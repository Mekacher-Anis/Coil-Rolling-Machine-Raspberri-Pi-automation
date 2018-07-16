#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    //create qapp for the main event loop
    QApplication a(argc, argv);

    //create main window
    MainWindow w;

    //sets the stylesheet
    QFile file(":/stylesheets/dark.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet(file.readAll());
    w.setStyleSheet(styleSheet);

    w.show();

    return a.exec();
}
