#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QElapsedTimer>
#include <QThread>
#include <QDate>
#include <QSqlTableModel>
#include <QFile>

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

private:
    Ui::MainWindow *ui;
    bool stop = false;
    bool machStopped = true;
    int workerID,techID;
    int nbOfPieces = 0,waste = 0;
    QSqlDatabase workersDB,GIDB;
    QSqlTableModel *prodTabMod;
    QElapsedTimer workerTimer;
    //QThread *workerTimerTh , *techTimerTh; //CHANGED BECAUSE IT DOESN'T WORK ON RASPBERRY
    TimerThread *workerTimerTh , *techTimerTh;
    QElapsedTimer techTimer;
    const QString dateFormat = "yyyy/MM/dd";
    const QString ManagerPWD = "banana95";
    QString currentDate = QDate::currentDate().toString(dateFormat);
    QFile* myFile;
};

class TimerThread : public QThread{

private :
    Q_OBJECT
    MainWindow* main;
    QElapsedTimer* timer;
public:

    TimerThread(MainWindow* windowController, QElapsedTimer* timer);

    void run() override;
};

#endif // MAINWINDOW_H
