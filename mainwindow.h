#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QElapsedTimer>
#include <QThread>
#include <QDate>
#include <QSqlTableModel>
#include <QFile>
#include <QTimer>
#include <wiringPi.h>

#define RELAY 29
#define WASTE 28

namespace Ui {
class MainWindow;
}

class TimerThread;

class MainWindow : public QMainWindow
{
    friend class TimerThread;

    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool isItNumber(QString);

    bool getStop() const;

private slots:
    void on_start_clicked();

    void on_save_clicked();

    void on_start_2_clicked();

    void on_save_2_clicked();

    QSqlDatabase openDB(QString name);

    void on_searchBut_clicked();

    void on_tabs_currentChanged(int index);

    void on_startMachBut_clicked();

    void on_addWorker_clicked();

    void on_save_3_clicked();

    void on_dltBut_clicked();

    void on_addBut_clicked();

    void on_itemNat_currentIndexChanged(int index);

    void log(QString txt);

    void on_diagType_currentIndexChanged(int index);

    void on_diagLimit_currentIndexChanged(int index);

public slots:
    void machIsDone();

private:
    Ui::MainWindow *ui;
    const QString NA = "NA";
    bool stop = false;
    bool machStopped = true;
    int workerID,techID;
    int nbOfPieces = 0,waste = 0;
    QSqlDatabase workersDB,GIDB;
    QSqlTableModel *prodTabMod;
    QElapsedTimer workerTimer;
    QThread *workerTimerTh , *techTimerTh, *wasteTh; //CHANGED BECAUSE IT DOESN'T WORK ON RASPBERRY
    //TimerThread *workerTimerTh , *techTimerTh;
    QElapsedTimer techTimer;
    const QString dateFormat = "yyyy/MM/dd";
    const QString ManagerPWD = "banana95";
    QString currentDate = QDate::currentDate().toString(dateFormat);
    QFile* myFile;
    QTimer machTimer; //used to count the time the machine has run
};

//class TimerThread : public QThread{

//private :
//    Q_OBJECT
//    MainWindow* main;
//    QElapsedTimer* timer;
//public:

//    TimerThread(MainWindow* windowController, QElapsedTimer* timer);

//    void run() override;
//};

#endif // MAINWINDOW_H
