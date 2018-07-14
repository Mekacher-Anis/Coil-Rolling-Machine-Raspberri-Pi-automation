#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSplineSeries>
#include <QChart>
#include <QChartView>
#include <QLayout>
#include <QDateTimeAxis>
#include <QValueAxis>
#include <QInputDialog>
#include <QDir>

using namespace QtCharts;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),machTimer(this)
{
    ui->setupUi(this); //setup interface
    setFixedSize(QSize(1000,600));
    setWindowTitle("Gruner Machine Control");
    workersDB = openDB("workers.db");   //open workers database
    GIDB = openDB("general_information.sqlite"); //open general information database
    prodTabMod = new QSqlTableModel(this, GIDB); //defined here so it doesn't get defined every time the dbEditorTab is opened
    wiringPiSetup();
    pinMode(RELAY,OUTPUT);
    pinMode(WASTE,INPUT);
    QObject::connect(&machTimer,SIGNAL(timeout()),this,SLOT(machIsDone()));
}



//opens a connection to the designated database
QSqlDatabase MainWindow::openDB(QString name){
    QString loc = QCoreApplication::applicationDirPath()+ "/" + name; //get path to sqlite databse
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE",name); //create database
    db.setDatabaseName(loc);
    if(db.open()) return db; //open it and chek if it's open
    else QMessageBox::critical(this,"ERROR",db.lastError().text());
}

//test if a string is a vlaid number
bool MainWindow::isItNumber(QString txt){
    bool test = true;
    for(QChar c : txt)
        if(!c.isDigit()) test = false;
    return txt.isEmpty() ? false : test;
}

//called when the worker's start button is clicked
void MainWindow::on_start_clicked()
{
    //Checks whether the ID is a valid number or not
    bool test = true;
    test = isItNumber(ui->Id->text());

    //Checks if the employee is part of the database
    QSqlQuery query(workersDB);
    QString queryText = "SELECT * FROM 'workers' WHERE ID=";
    queryText += ui->Id->text() + " AND Name='"+ui->name->text()+"' AND Charge='"+ui->charge->text()+"';";
    query.exec(queryText);
    if(!query.next()) //test if there are any results (worker is part of the database)
        test = false;

    //take actions accordingly
    if(!test)
        QMessageBox::critical(this,"ERROR","Invalid Credentials");
    else{
        //save ID
        workerID = ui->Id->text().toInt();

        //Disable start buttton - enable save button
        ui->start->setEnabled(false);
        ui->save->setEnabled(true);
        ui->startMachBut->setEnabled(true);

        //start timer in diffrent thread
        workerTimer.start();
        stop = false;



        //CHANGED BECAUSE IT DOESN'T WORK ON RASPBERRY
        workerTimerTh = QThread::create([this]{
            while(!this->stop){ //this check is not necessary, because the thread is going to be destroyed when it's stopped
                QString time = QDateTime::fromTime_t(workerTimer.elapsed()/1000).toUTC().toString("hh:mm:ss");
                ui->time->setText(time);
                QThread::msleep(1000); //to ensure it doesn't consume to much cpu power
            }
        });

        //        workerTimerTh = new TimerThread(this,&workerTimer);
        workerTimerTh->start();


        //start listner for waste
        wasteTh = QThread::create([this]{
            while(!stop){
                if(digitalRead(WASTE) == 1){ //if the input pin is high add a waste
                    waste++;
                    ui->waste->setText(QString::number(waste));
                }
            }
        });
        wasteTh->start();
    }
}

//called when the worker's save button is clicked
void MainWindow::on_save_clicked()
{
    //enable start button and disable save button
    ui->save->setEnabled(false);
    ui->start->setEnabled(true);
    ui->startMachBut->setEnabled(false);

    stop = true; //stop the workers update thread
    qint64 time = (workerTimer.elapsed()/60000)+1; //get elapsed time (at least one min)
    workerTimer.invalidate(); //stop timer

    //delete the view updater thread
    if(workerTimerTh != nullptr){
        workerTimerTh->terminate();
        delete workerTimerTh;
        workerTimerTh = nullptr;
    }

    //delete the waste updater thread
    if(wasteTh != nullptr){
        wasteTh->terminate();
        delete wasteTh;
        wasteTh = nullptr;
    }

    //update database
    QSqlQuery query(workersDB);

    //check if there's an entry with the current date
    query.exec("SELECT * FROM 'workers' WHERE ID= "
               +QString::number(workerID) //use workerID because the ID lineEdit may have changed
               +" AND Date= '"+currentDate+"';");

    if(query.next()){ //if there's an entry with today's date update it
        int newTime = query.value(3).toInt() + time;
        int newNbOfPiec = query.value(5).toInt() + nbOfPieces;
        int newWaste = query.value(6).toInt() + waste;
        query.exec("UPDATE workers SET 'Total_Time'= "
                   +QString::number(newTime)
                   +" , 'Number_Of_Pieces' = " + QString::number(newNbOfPiec)
                   +" , 'Waste' = "+QString::number(newWaste)+"  WHERE ID= "
                   +QString::number(workerID)
                   +" AND Date= '"+currentDate+"';");

        nbOfPieces = waste = 0; //reset the numbers

    }else{ //or just add another entry

        query.exec("INSERT INTO workers VALUES("
                   +QString::number(workerID)+",'"
                   +ui->name->text()+"',"
                   +ui->charge->text()+","
                   +QString::number(time)+",'"
                   +currentDate+"',"
                   +QString::number(nbOfPieces)+","
                   +QString::number(waste)+");");


        //reset the numbers
        nbOfPieces = waste = 0;
        //reset labels
        ui->nbPie->setText("0");
        ui->waste->setText("0");
    }
}

//called when the tech's start button is clicked
void MainWindow::on_start_2_clicked()
{
    stop = true; //stop the workers update thread
    //Checks whether the ID is a valid number or not
    bool test = true;
    test = isItNumber(ui->Id_2->text());

    //Checks if the employee is part of the database
    QSqlQuery query(workersDB);
    QString queryText = "SELECT * FROM 'technicians' WHERE ID=";
    queryText += ui->Id_2->text() + " AND Name='"+ui->name_2->text()+"' AND Poste="+ui->poste->currentText()+";";
    query.exec(queryText);
    if(!query.next())
        test = false;

    //take actions accordingly
    if(!test)
        QMessageBox::critical(this,"ERROR","Invalid Credentials");
    else{
        //save ID
        techID = ui->Id_2->text().toInt();

        //Disable/enable start/save butttons
        ui->start_2->setEnabled(false);
        ui->save_2->setEnabled(true);

        //start timer in diffrent thread
        techTimer.start();

        //CHANGED BECAUSE IT DOESN'T WORK ON RASPBERRY
        techTimerTh = QThread::create([this]{
            while(this->stop){
                QString time = QDateTime::fromTime_t(techTimer.elapsed()/1000).toUTC().toString("hh:mm:ss");
                ui->time_2->setText(time);
                QThread::msleep(1000);
            }
        });


        //        techTimerTh = new TimerThread(this,&techTimer);
        techTimerTh->start();
    }
}


void MainWindow::on_save_2_clicked()
{
    //check if the inputted data is valid
    if(!isItNumber(ui->machID->text()) || ui->PR->text().isEmpty()){
        QMessageBox::critical(this,"ERROR","Invalid Data");
        return;
    }

    //enable start button and disable save button
    //ui->start->setEnabled(true);
    ui->save_2->setEnabled(false);
    ui->start_2->setEnabled(true);

    stop = false; //stops the tech's update thread
    qint64 time = (techTimer.elapsed()/60000) + 1; //get elapsed time (at least 1 min)
    techTimer.invalidate(); //stop timer

    //delete the view updater thread
    if(techTimerTh != nullptr){
        techTimerTh->terminate();
        delete techTimerTh;
        techTimerTh = nullptr;
    }

    //update the tech's database
    QSqlQuery query(workersDB);

    query.exec("INSERT INTO technicians VALUES("
               +QString::number(techID)+",'"
               +ui->name_2->text()+"',"
               +ui->poste->currentText()+","
               +QString::number(time)+",'"
               +currentDate+"');");

    //update the general_information database

    //check if there's an entry with the current date
    query.exec("SELECT * FROM 'technicians' WHERE ID= "
               +QString::number(workerID) //use workerID because the ID lineEdit may have changed
               +" AND Date= '"+currentDate+"';");

    if(query.next()){ //if there's an entry with today's date update it
        int newTime = query.value(3).toInt() + time;
        query.exec("UPDATE workers SET 'Total_Time'= "
                   +QString::number(newTime)
                   +"  WHERE ID= "+QString::number(workerID)
                   +" AND Date= '"+currentDate+"';");
    }else{
        QSqlQuery GIQuery(GIDB);
        GIQuery.exec("INSERT INTO machines_status VALUES("
                     +ui->machID->text()+",'"
                     +ui->machState->currentText()+"','"
                     +ui->PR->text()+"',"
                     +QString::number(time)+",'"
                     +currentDate+"');");
    }
}

void MainWindow::on_searchBut_clicked()
{
    //check if the inputted data is valid
    if(!isItNumber(ui->diagId->text())){
        QMessageBox::critical(this,"ERROR","Invalid Data");
        return;
    }

    //technicians have only one type of graph
    if(ui->diagNat->currentIndex() != 0)
        ui->diagType->setEnabled(false);
    else
        ui->diagType->setEnabled(true);

    QSqlQuery query(workersDB);
    QString tableName = (ui->diagNat->currentIndex() == 0)  ? "workers" : "technicians"; //database name to access
    //check the chosen limit and get the correct text for the query
    QString limit;
    switch (ui->diagLimit->currentIndex()) {
    case 0 :
        limit = "7";
        break;
    case 1 :
        limit = "15";
        break;
    case 2 :
        limit = "30";
        break;
    }

    QString queryString = "SELECT * FROM "+tableName+" WHERE ID="+ui->diagId->text()+" ORDER BY Date ASC LIMIT "+limit+";";
    query.exec(queryString); //get the chosen rows from the corresponding table

    //Draw spline chart
    QSplineSeries *series = new QSplineSeries(); //holds the values

    quint64 lastDate;
    qreal max = 0; //holds the max value found in the list for setting the y axis range later
    while (query.next()){

        quint64 xValue = query.value(4).toDateTime().toMSecsSinceEpoch(); //save abscisse as milliseconds for later use by the created DateTime_XAxis


        //chose the value based on the type of the graph chosen
        qreal yValue;
        if(ui->diagNat->currentIndex() != 0){ //if he's a technician
            yValue = query.value(3).toInt();
            if (yValue > max)
                max = yValue + 10;

        }else if(ui->diagType->currentIndex() == 0){ //rendement
            yValue = query.value(5).toInt() / query.value(3).toInt();
            if (yValue > max)
                max = yValue + 1;

        }else{
            yValue = (query.value(5).toInt() * 100) / (query.value(5).toInt()+query.value(6).toInt()); //efficiency
            max = 100;
        }

        series->append(xValue,yValue); //add value to the list
        lastDate = xValue;
    }


    QChart *chart = new QChart(); //holds info about the chart
    chart->legend()->hide();
    chart->addSeries(series);

    QDateTimeAxis *axisX = new QDateTimeAxis; //create custom X Axis for date
    axisX->setFormat("dd-MM-yyyy");
    chart->setAxisX(axisX,series);

    QValueAxis *axisY = new QValueAxis; //create custom Y Axis for values
    axisY->setRange(0,max);
    chart->setAxisY(axisY,series);

    QChartView *chartView = new QChartView(chart); //create the chart widget

    QVBoxLayout* layout = new QVBoxLayout;
    if(ui->chartBox->layout() == nullptr) //if it doesn't have a layout add one
        ui->chartBox->setLayout(layout);

    //remove all objects in the chartBox to make room for the new graph
    QLayoutItem* item;
    while ( ( item = ui->chartBox->layout()->takeAt( 0 ) ) != nullptr )
    {
        delete item->widget();
        delete item;
    }

    ui->chartBox->layout()->addWidget(chartView); //add the chart to chartBox
    chartView->setRenderHint(QPainter::Antialiasing); //for better line quality
}


//called when the index is changed
void MainWindow::on_diagType_currentIndexChanged(int index)
{
    on_searchBut_clicked();
}

void MainWindow::machIsDone()
{
    machStopped = false;
    ui->startMachBut->setEnabled(true);
    ui->stateLab->setText("Arretee");

    //update nbr of pieces
    int count = 0;
    for(auto ax : ui->axis->children()){
        if((ax->objectName() != "startMachBut") && ((QCheckBox*)ax)->isChecked())
            count++;
    }
    nbOfPieces += count; //add the new pieces
    ui->nbPie->setText(QString::number(nbOfPieces)); //set the new label
}

//called when the tabs are changed
void MainWindow::on_tabs_currentChanged(int index)
{
    //if one of the administrator tabs are selected ask for password
    if(index == 2 || index == 3){
        bool ok;
        QString msg = "Entrer mot de passe";
        QString pwd;
        do{
            pwd = QInputDialog::getText(this, "Manager",msg, QLineEdit::Password,"banana95", &ok);
            if(!ok){
                ui->tabs->setCurrentIndex(1);
                return;
            }else
                msg = "Mot de Passe Incorrecte";
        }while (pwd != ManagerPWD);


        if(index == 3){
            prodTabMod->setTable("products");
            prodTabMod->setEditStrategy(QSqlTableModel::OnManualSubmit);
            prodTabMod->select();
            //            model->setHeaderData(0, Qt::Horizontal, tr("Name"));
            //            model->setHeaderData(1, Qt::Horizontal, tr("Salary"));
            ui->dbEditorTable->setModel(prodTabMod);

        }
    }
}

//called when the start the machine button is clicked
void MainWindow::on_startMachBut_clicked()
{
    //Checks whether the ID is a valid number or not
    bool test = true;
    test = isItNumber(ui->article->text());

    //Checks if the employee is part of the database
    QSqlQuery query(GIDB);
    QString queryText = "SELECT * FROM 'products' WHERE `Artikel`='";
    queryText += ui->article->text()+"';";
    query.exec(queryText);
    if(!query.next()) //test if there are any results (worker is part of the database)
        test = false;

    //take actions accordingly
    if(!test)
        QMessageBox::critical(this,"ERROR","Article Invalide");
    else{
        //open and close RELAY to simulate button pushed
        digitalWrite(RELAY,1);
        delay(500);
        digitalWrite(RELAY,0);

        //update UI
        machStopped = false;
        ui->startMachBut->setEnabled(false);
        ui->stateLab->setText("En marche");

        //created as place holder for the machine working time
        machTimer.setInterval(8000);
        machTimer.start();
    }
}

//called when the admin changes the nature of the worker to add
void MainWindow::on_itemNat_currentIndexChanged(int index)
{
    //enable "poste" if the technicien is slected
    if(index == 1){
        ui->poste_3->setEnabled(true);
        ui->posteLab_3->setEnabled(true);
        ui->charge_3->setEnabled(false);
        ui->chargeLab_3->setEnabled(false);
    }else{
        ui->poste_3->setEnabled(false);
        ui->posteLab_3->setEnabled(false);
        ui->charge_3->setEnabled(true);
        ui->chargeLab_3->setEnabled(true);
    }
}

void MainWindow::log(QString txt)
{
    QTextStream myLog(myFile);
    myLog << txt << endl;
}

bool MainWindow::getStop() const
{
    return stop;
}

//called when the add worker button is clicked
void MainWindow::on_addWorker_clicked()
{
    //check if the inputted data is valid
    if(!isItNumber(ui->Id_3->text())
            || ui->name_3->text().isEmpty()
            || ui->charge_3->text().isEmpty()){
        QMessageBox::critical(this,"ERROR","Invalid Data");
        return;
    }

    //check if the Id already exists
    bool test = true;
    QSqlQuery query = QSqlQuery(workersDB);
    if(ui->itemNat->currentIndex() == 0){
        query.exec("SELECT * FROM workers WHERE ID="+ui->Id_3->text()+" ;");
        if(query.next())
            test = false;
    }else{
        query.exec("SELECT * FROM technicians WHERE ID="+ui->Id_3->text()+" ;");
        if(query.next())
            test = false;
    }
    if(!test){
        QMessageBox::critical(this,"ERROR","ID Already Exists");
        return;
    }

    //this is a higher level way to add an entry to a table
    //using the qsqltablemodel as an alternative to qsqlquery
    QSqlTableModel* model = new QSqlTableModel(this,workersDB);
    QString tableName = (ui->itemNat->currentIndex() == 0)  ? "workers" : "technicians"; //get the slected nature of worker
    model->setTable(tableName);
    model->select();
    model->insertRow(0);
    model->setData(model->index(0,0),ui->Id_3->text().toInt());
    model->setData(model->index(0,1),ui->name_3->text());
    model->setData(model->index(0,4),currentDate);
    if(ui->itemNat->currentIndex() == 0)
        model->setData(model->index(0,2),ui->charge_3->text().toInt());
    else
        model->setData(model->index(0,2),ui->poste_3->currentIndex()+1);

    model->submitAll();
}

//called whe when the save products database button is clicked
void MainWindow::on_save_3_clicked()
{
    //save the changes made in the table
    prodTabMod->submitAll();
}

//called when the delete record from products database button is called
void MainWindow::on_dltBut_clicked()
{
    //get the currently selected items and delete them
    QModelIndexList selectedRows = ui->dbEditorTable->selectionModel()->selectedIndexes();
    for(auto row : selectedRows)
        prodTabMod->removeRow(row.row());
}

//called when the products table add row button is clicked
void MainWindow::on_addBut_clicked()
{
    //get the number of rows and add a row at the end and then select it for editing
    prodTabMod->insertRow(0);
    QModelIndex index = prodTabMod->index(0,0);
    ui->dbEditorTable->edit(index);
}

MainWindow::~MainWindow()
{
    workersDB.close();
    GIDB.close();
    myFile->close();
    delete ui;
    delete workerTimerTh;
    delete techTimerTh;
}







TimerThread::TimerThread(MainWindow* windowController, QElapsedTimer* timer):
    QThread(windowController), main(windowController),timer(timer){}

void TimerThread::run() {
    while(!main->stop){ //this check is not necessary, because the thread is going to be destroyed when it's stopped
        QString time = QDateTime::fromTime_t(timer->elapsed()/1000).toUTC().toString("hh:mm:ss");
        main->ui->time->setText(time);
        QThread::msleep(1000); //to ensure it doesn't consume to much cpu power
    }
}
