#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QElapsedTimer>
#include <QThread>
#include <QDate>
#include <QSqlTableModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    bool isItNumber(QString);

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

private:
    Ui::MainWindow *ui;
    bool stop = false;
    bool machStopped = true;
    int workerID,techID;
    int nbOfPieces = 0,waste = 0;
    QSqlDatabase workersDB,GIDB;
    QSqlTableModel *prodTabMod;
    QElapsedTimer workerTimer;
    QThread *workerTimerTh , *techTimerTh;
    QElapsedTimer techTimer;
    const QString dateFormat = "yyyy/MM/dd";
    const QString ManagerPWD = "banana95";
    QString currentDate = QDate::currentDate().toString(dateFormat);
};

#endif // MAINWINDOW_H
