/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabs;
    QWidget *control;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QLabel *stateLab;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *nbPie2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *Overview;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QGroupBox *worker;
    QGridLayout *gridLayout_2;
    QLabel *IdLab;
    QLineEdit *name;
    QPushButton *start;
    QLabel *chargeLab;
    QLineEdit *charge;
    QLabel *nameLab;
    QPushButton *save;
    QLineEdit *Id;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *nbPie;
    QLabel *waste;
    QLabel *label_5;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *time;
    QGroupBox *axis;
    QGridLayout *gridLayout_11;
    QLabel *label_7;
    QLineEdit *article;
    QCheckBox *axis1;
    QCheckBox *axis2;
    QCheckBox *axis3;
    QCheckBox *axis4;
    QCheckBox *axis5;
    QCheckBox *axis6;
    QCheckBox *axis7;
    QCheckBox *axis8;
    QPushButton *startMachBut;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_6;
    QLabel *label;
    QComboBox *machState;
    QLabel *label_12;
    QLineEdit *PR;
    QLabel *machineIdLab;
    QLabel *time_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *machID;
    QLabel *nameLab_2;
    QLineEdit *Id_2;
    QLabel *IdLab_2;
    QLineEdit *name_2;
    QPushButton *start_2;
    QComboBox *poste;
    QPushButton *save_2;
    QWidget *Diagnostics;
    QGridLayout *gridLayout_7;
    QGroupBox *chartBox;
    QPushButton *searchBut;
    QLabel *label_4;
    QLineEdit *diagId;
    QComboBox *diagNat;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *diagType;
    QComboBox *diagLimit;
    QWidget *dbEditor;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_8;
    QLabel *IdLab_3;
    QLineEdit *name_3;
    QLabel *chargeLab_3;
    QComboBox *itemNat;
    QPushButton *addWorker;
    QLabel *posteLab_3;
    QComboBox *poste_3;
    QLineEdit *Id_3;
    QLabel *nameLab_3;
    QLineEdit *charge_3;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *save_3;
    QPushButton *dltBut;
    QTableView *dbEditorTable;
    QPushButton *addBut;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(813, 519);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabs = new QTabWidget(centralWidget);
        tabs->setObjectName(QStringLiteral("tabs"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabs->sizePolicy().hasHeightForWidth());
        tabs->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        tabs->setFont(font);
        tabs->setTabShape(QTabWidget::Rounded);
        tabs->setTabsClosable(false);
        tabs->setTabBarAutoHide(false);
        control = new QWidget();
        control->setObjectName(QStringLiteral("control"));
        gridLayout_5 = new QGridLayout(control);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_9 = new QLabel(control);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_9->setFont(font1);
        label_9->setStyleSheet(QLatin1String("color : rgb(34, 225, 47);\n"
"font-size : 27px;\n"
"font-weight: bold;\n"
""));

        horizontalLayout->addWidget(label_9);

        stateLab = new QLabel(control);
        stateLab->setObjectName(QStringLiteral("stateLab"));
        stateLab->setFont(font1);
        stateLab->setStyleSheet(QLatin1String("color : rgb(113, 85, 222);\n"
"font-size : 27px;\n"
"font-weight: bold;"));

        horizontalLayout->addWidget(stateLab);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout_5->addLayout(horizontalLayout, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        nbPie2 = new QLabel(control);
        nbPie2->setObjectName(QStringLiteral("nbPie2"));

        horizontalLayout_3->addWidget(nbPie2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        gridLayout_5->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 3, 1, 1, 1);

        tabs->addTab(control, QString());
        Overview = new QWidget();
        Overview->setObjectName(QStringLiteral("Overview"));
        sizePolicy.setHeightForWidth(Overview->sizePolicy().hasHeightForWidth());
        Overview->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(Overview);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter = new QSplitter(Overview);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        worker = new QGroupBox(splitter);
        worker->setObjectName(QStringLiteral("worker"));
        QFont font2;
        font2.setPointSize(16);
        worker->setFont(font2);
        gridLayout_2 = new QGridLayout(worker);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        IdLab = new QLabel(worker);
        IdLab->setObjectName(QStringLiteral("IdLab"));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        IdLab->setFont(font3);

        gridLayout_2->addWidget(IdLab, 0, 0, 1, 1);

        name = new QLineEdit(worker);
        name->setObjectName(QStringLiteral("name"));

        gridLayout_2->addWidget(name, 1, 1, 1, 1);

        start = new QPushButton(worker);
        start->setObjectName(QStringLiteral("start"));
        start->setFont(font3);

        gridLayout_2->addWidget(start, 3, 1, 1, 1);

        chargeLab = new QLabel(worker);
        chargeLab->setObjectName(QStringLiteral("chargeLab"));
        chargeLab->setFont(font3);

        gridLayout_2->addWidget(chargeLab, 2, 0, 1, 1);

        charge = new QLineEdit(worker);
        charge->setObjectName(QStringLiteral("charge"));

        gridLayout_2->addWidget(charge, 2, 1, 1, 1);

        nameLab = new QLabel(worker);
        nameLab->setObjectName(QStringLiteral("nameLab"));
        nameLab->setFont(font3);

        gridLayout_2->addWidget(nameLab, 1, 0, 1, 1);

        save = new QPushButton(worker);
        save->setObjectName(QStringLiteral("save"));
        save->setEnabled(false);

        gridLayout_2->addWidget(save, 5, 1, 1, 1);

        Id = new QLineEdit(worker);
        Id->setObjectName(QStringLiteral("Id"));

        gridLayout_2->addWidget(Id, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(worker);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nbPie = new QLabel(groupBox_3);
        nbPie->setObjectName(QStringLiteral("nbPie"));
        QFont font4;
        font4.setPointSize(14);
        nbPie->setFont(font4);

        gridLayout->addWidget(nbPie, 2, 2, 1, 1);

        waste = new QLabel(groupBox_3);
        waste->setObjectName(QStringLiteral("waste"));
        waste->setFont(font4);

        gridLayout->addWidget(waste, 3, 2, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        time = new QLabel(groupBox_3);
        time->setObjectName(QStringLiteral("time"));
        time->setFont(font4);

        gridLayout->addWidget(time, 0, 2, 1, 1);

        axis = new QGroupBox(groupBox_3);
        axis->setObjectName(QStringLiteral("axis"));
        gridLayout_11 = new QGridLayout(axis);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_7 = new QLabel(axis);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        gridLayout_11->addWidget(label_7, 0, 0, 1, 8);

        article = new QLineEdit(axis);
        article->setObjectName(QStringLiteral("article"));

        gridLayout_11->addWidget(article, 0, 8, 1, 1);

        axis1 = new QCheckBox(axis);
        axis1->setObjectName(QStringLiteral("axis1"));
        axis1->setChecked(true);
        axis1->setTristate(false);

        gridLayout_11->addWidget(axis1, 1, 0, 1, 1);

        axis2 = new QCheckBox(axis);
        axis2->setObjectName(QStringLiteral("axis2"));
        axis2->setChecked(true);

        gridLayout_11->addWidget(axis2, 1, 1, 1, 1);

        axis3 = new QCheckBox(axis);
        axis3->setObjectName(QStringLiteral("axis3"));
        axis3->setChecked(true);

        gridLayout_11->addWidget(axis3, 1, 2, 1, 1);

        axis4 = new QCheckBox(axis);
        axis4->setObjectName(QStringLiteral("axis4"));
        axis4->setChecked(true);

        gridLayout_11->addWidget(axis4, 1, 3, 1, 1);

        axis5 = new QCheckBox(axis);
        axis5->setObjectName(QStringLiteral("axis5"));
        axis5->setChecked(true);

        gridLayout_11->addWidget(axis5, 1, 4, 1, 1);

        axis6 = new QCheckBox(axis);
        axis6->setObjectName(QStringLiteral("axis6"));
        axis6->setChecked(true);

        gridLayout_11->addWidget(axis6, 1, 5, 1, 1);

        axis7 = new QCheckBox(axis);
        axis7->setObjectName(QStringLiteral("axis7"));
        axis7->setChecked(true);

        gridLayout_11->addWidget(axis7, 1, 6, 1, 1);

        axis8 = new QCheckBox(axis);
        axis8->setObjectName(QStringLiteral("axis8"));
        axis8->setChecked(true);

        gridLayout_11->addWidget(axis8, 1, 7, 1, 1);

        startMachBut = new QPushButton(axis);
        startMachBut->setObjectName(QStringLiteral("startMachBut"));
        startMachBut->setEnabled(false);

        gridLayout_11->addWidget(startMachBut, 1, 8, 1, 1);


        gridLayout->addWidget(axis, 1, 0, 1, 3);


        gridLayout_2->addWidget(groupBox_3, 4, 0, 1, 2);

        splitter->addWidget(worker);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setFont(font2);
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_6 = new QGridLayout(groupBox_4);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font4);

        gridLayout_6->addWidget(label, 5, 0, 1, 1);

        machState = new QComboBox(groupBox_4);
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->addItem(QString());
        machState->setObjectName(QStringLiteral("machState"));
        QFont font5;
        font5.setPointSize(12);
        machState->setFont(font5);
        machState->setEditable(true);

        gridLayout_6->addWidget(machState, 6, 1, 1, 2);

        label_12 = new QLabel(groupBox_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font4);

        gridLayout_6->addWidget(label_12, 6, 0, 1, 1);

        PR = new QLineEdit(groupBox_4);
        PR->setObjectName(QStringLiteral("PR"));

        gridLayout_6->addWidget(PR, 5, 1, 1, 2);

        machineIdLab = new QLabel(groupBox_4);
        machineIdLab->setObjectName(QStringLiteral("machineIdLab"));
        machineIdLab->setFont(font4);

        gridLayout_6->addWidget(machineIdLab, 2, 0, 1, 1);

        time_2 = new QLabel(groupBox_4);
        time_2->setObjectName(QStringLiteral("time_2"));
        time_2->setFont(font4);

        gridLayout_6->addWidget(time_2, 0, 2, 1, 1);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font4);

        gridLayout_6->addWidget(label_11, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        machID = new QLineEdit(groupBox_4);
        machID->setObjectName(QStringLiteral("machID"));

        gridLayout_6->addWidget(machID, 2, 1, 1, 2);


        gridLayout_3->addWidget(groupBox_4, 5, 0, 1, 2);

        nameLab_2 = new QLabel(groupBox_2);
        nameLab_2->setObjectName(QStringLiteral("nameLab_2"));
        nameLab_2->setFont(font3);

        gridLayout_3->addWidget(nameLab_2, 0, 0, 1, 1);

        Id_2 = new QLineEdit(groupBox_2);
        Id_2->setObjectName(QStringLiteral("Id_2"));

        gridLayout_3->addWidget(Id_2, 0, 1, 1, 1);

        IdLab_2 = new QLabel(groupBox_2);
        IdLab_2->setObjectName(QStringLiteral("IdLab_2"));
        IdLab_2->setFont(font3);

        gridLayout_3->addWidget(IdLab_2, 1, 0, 1, 1);

        name_2 = new QLineEdit(groupBox_2);
        name_2->setObjectName(QStringLiteral("name_2"));

        gridLayout_3->addWidget(name_2, 1, 1, 1, 1);

        start_2 = new QPushButton(groupBox_2);
        start_2->setObjectName(QStringLiteral("start_2"));
        start_2->setFont(font3);

        gridLayout_3->addWidget(start_2, 4, 1, 1, 1);

        poste = new QComboBox(groupBox_2);
        poste->addItem(QString());
        poste->addItem(QString());
        poste->addItem(QString());
        poste->setObjectName(QStringLiteral("poste"));
        poste->setFont(font5);
        poste->setModelColumn(0);

        gridLayout_3->addWidget(poste, 3, 1, 1, 1);

        save_2 = new QPushButton(groupBox_2);
        save_2->setObjectName(QStringLiteral("save_2"));
        save_2->setEnabled(false);

        gridLayout_3->addWidget(save_2, 6, 1, 1, 1);

        splitter->addWidget(groupBox_2);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);

        tabs->addTab(Overview, QString());
        Diagnostics = new QWidget();
        Diagnostics->setObjectName(QStringLiteral("Diagnostics"));
        gridLayout_7 = new QGridLayout(Diagnostics);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        chartBox = new QGroupBox(Diagnostics);
        chartBox->setObjectName(QStringLiteral("chartBox"));

        gridLayout_7->addWidget(chartBox, 2, 0, 1, 6);

        searchBut = new QPushButton(Diagnostics);
        searchBut->setObjectName(QStringLiteral("searchBut"));
        searchBut->setFont(font3);

        gridLayout_7->addWidget(searchBut, 0, 5, 1, 1);

        label_4 = new QLabel(Diagnostics);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font3);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        diagId = new QLineEdit(Diagnostics);
        diagId->setObjectName(QStringLiteral("diagId"));
        QFont font6;
        font6.setPointSize(16);
        font6.setBold(true);
        font6.setWeight(75);
        diagId->setFont(font6);

        gridLayout_7->addWidget(diagId, 0, 1, 1, 1);

        diagNat = new QComboBox(Diagnostics);
        diagNat->addItem(QString());
        diagNat->addItem(QString());
        diagNat->setObjectName(QStringLiteral("diagNat"));
        diagNat->setFont(font4);

        gridLayout_7->addWidget(diagNat, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        diagType = new QComboBox(Diagnostics);
        diagType->addItem(QString());
        diagType->addItem(QString());
        diagType->setObjectName(QStringLiteral("diagType"));
        diagType->setEnabled(false);
        diagType->setFont(font4);

        gridLayout_7->addWidget(diagType, 1, 1, 1, 1);

        diagLimit = new QComboBox(Diagnostics);
        diagLimit->addItem(QString());
        diagLimit->addItem(QString());
        diagLimit->addItem(QString());
        diagLimit->setObjectName(QStringLiteral("diagLimit"));
        diagLimit->setFont(font4);

        gridLayout_7->addWidget(diagLimit, 0, 3, 1, 1);

        tabs->addTab(Diagnostics, QString());
        dbEditor = new QWidget();
        dbEditor->setObjectName(QStringLiteral("dbEditor"));
        gridLayout_10 = new QGridLayout(dbEditor);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        groupBox = new QGroupBox(dbEditor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_8 = new QGridLayout(groupBox);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        IdLab_3 = new QLabel(groupBox);
        IdLab_3->setObjectName(QStringLiteral("IdLab_3"));
        IdLab_3->setFont(font3);

        gridLayout_8->addWidget(IdLab_3, 1, 0, 1, 1);

        name_3 = new QLineEdit(groupBox);
        name_3->setObjectName(QStringLiteral("name_3"));

        gridLayout_8->addWidget(name_3, 2, 4, 1, 1);

        chargeLab_3 = new QLabel(groupBox);
        chargeLab_3->setObjectName(QStringLiteral("chargeLab_3"));
        chargeLab_3->setFont(font3);

        gridLayout_8->addWidget(chargeLab_3, 3, 0, 1, 4);

        itemNat = new QComboBox(groupBox);
        itemNat->addItem(QString());
        itemNat->addItem(QString());
        itemNat->setObjectName(QStringLiteral("itemNat"));
        itemNat->setFont(font4);

        gridLayout_8->addWidget(itemNat, 0, 4, 1, 1);

        addWorker = new QPushButton(groupBox);
        addWorker->setObjectName(QStringLiteral("addWorker"));

        gridLayout_8->addWidget(addWorker, 2, 5, 1, 1);

        posteLab_3 = new QLabel(groupBox);
        posteLab_3->setObjectName(QStringLiteral("posteLab_3"));
        posteLab_3->setEnabled(false);
        posteLab_3->setFont(font4);

        gridLayout_8->addWidget(posteLab_3, 4, 0, 1, 3);

        poste_3 = new QComboBox(groupBox);
        poste_3->addItem(QString());
        poste_3->addItem(QString());
        poste_3->addItem(QString());
        poste_3->setObjectName(QStringLiteral("poste_3"));
        poste_3->setEnabled(false);
        poste_3->setFont(font5);
        poste_3->setModelColumn(0);

        gridLayout_8->addWidget(poste_3, 4, 4, 1, 1);

        Id_3 = new QLineEdit(groupBox);
        Id_3->setObjectName(QStringLiteral("Id_3"));

        gridLayout_8->addWidget(Id_3, 1, 4, 1, 1);

        nameLab_3 = new QLabel(groupBox);
        nameLab_3->setObjectName(QStringLiteral("nameLab_3"));
        nameLab_3->setFont(font3);

        gridLayout_8->addWidget(nameLab_3, 2, 0, 1, 2);

        charge_3 = new QLineEdit(groupBox);
        charge_3->setObjectName(QStringLiteral("charge_3"));

        gridLayout_8->addWidget(charge_3, 3, 4, 1, 1);


        gridLayout_10->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(dbEditor);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_9 = new QGridLayout(groupBox_6);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_8, 1, 0, 1, 1);

        save_3 = new QPushButton(groupBox_6);
        save_3->setObjectName(QStringLiteral("save_3"));

        gridLayout_9->addWidget(save_3, 1, 3, 1, 1);

        dltBut = new QPushButton(groupBox_6);
        dltBut->setObjectName(QStringLiteral("dltBut"));

        gridLayout_9->addWidget(dltBut, 1, 2, 1, 1);

        dbEditorTable = new QTableView(groupBox_6);
        dbEditorTable->setObjectName(QStringLiteral("dbEditorTable"));

        gridLayout_9->addWidget(dbEditorTable, 0, 0, 1, 4);

        addBut = new QPushButton(groupBox_6);
        addBut->setObjectName(QStringLiteral("addBut"));

        gridLayout_9->addWidget(addBut, 1, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 1, 0, 1, 1);

        tabs->addTab(dbEditor, QString());

        verticalLayout_2->addWidget(tabs);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(Id, name);
        QWidget::setTabOrder(name, charge);
        QWidget::setTabOrder(charge, start);
        QWidget::setTabOrder(start, save);
        QWidget::setTabOrder(save, Id_2);
        QWidget::setTabOrder(Id_2, name_2);
        QWidget::setTabOrder(name_2, poste);
        QWidget::setTabOrder(poste, start_2);
        QWidget::setTabOrder(start_2, PR);
        QWidget::setTabOrder(PR, machState);
        QWidget::setTabOrder(machState, save_2);

        retranslateUi(MainWindow);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Etat :", nullptr));
        stateLab->setText(QApplication::translate("MainWindow", "Arr\303\252t\303\251e", nullptr));
        nbPie2->setText(QString());
        tabs->setTabText(tabs->indexOf(control), QApplication::translate("MainWindow", "Control", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        Overview->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        worker->setTitle(QApplication::translate("MainWindow", "Ouvrier", nullptr));
        IdLab->setText(QApplication::translate("MainWindow", "Id", nullptr));
        name->setText(QApplication::translate("MainWindow", "Mekacher Anis", nullptr));
        start->setText(QApplication::translate("MainWindow", "Commencer", nullptr));
        chargeLab->setText(QApplication::translate("MainWindow", "Charge", nullptr));
        charge->setText(QApplication::translate("MainWindow", "5", nullptr));
        nameLab->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        save->setText(QApplication::translate("MainWindow", "Sauvegarder", nullptr));
        Id->setText(QApplication::translate("MainWindow", "0", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Informations", nullptr));
        nbPie->setText(QApplication::translate("MainWindow", "0", nullptr));
        waste->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Nb. Pieces :", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Dechets :", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Duree de travail :", nullptr));
        time->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Article :", nullptr));
        axis1->setText(QString());
        axis2->setText(QString());
        axis3->setText(QString());
        axis4->setText(QString());
        axis5->setText(QString());
        axis6->setText(QString());
        axis7->setText(QString());
        axis8->setText(QString());
        startMachBut->setText(QApplication::translate("MainWindow", "D\303\251marrer", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Technicien", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Poste", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Informations", nullptr));
        label->setText(QApplication::translate("MainWindow", "PR", nullptr));
        machState->setItemText(0, QApplication::translate("MainWindow", "Panne", nullptr));
        machState->setItemText(1, QApplication::translate("MainWindow", "Manque Planification", nullptr));
        machState->setItemText(2, QApplication::translate("MainWindow", "Manque Avance", nullptr));
        machState->setItemText(3, QApplication::translate("MainWindow", "Manque Matiere (Externe)", nullptr));
        machState->setItemText(4, QApplication::translate("MainWindow", "Manque Matiere (Interne)", nullptr));
        machState->setItemText(5, QApplication::translate("MainWindow", "Manque main d'oeuvre", nullptr));
        machState->setItemText(6, QApplication::translate("MainWindow", "Rupture d'energie", nullptr));
        machState->setItemText(7, QApplication::translate("MainWindow", "Maintenance preventive", nullptr));
        machState->setItemText(8, QApplication::translate("MainWindow", "Changement de Serie", nullptr));
        machState->setItemText(9, QApplication::translate("MainWindow", "Changement des rouleaux", nullptr));
        machState->setItemText(10, QApplication::translate("MainWindow", "Probleme de qualite", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "Etat de la machine", nullptr));
        machineIdLab->setText(QApplication::translate("MainWindow", "Machine ID", nullptr));
        time_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Duree de travail :", nullptr));
        nameLab_2->setText(QApplication::translate("MainWindow", "Id", nullptr));
        Id_2->setText(QApplication::translate("MainWindow", "0", nullptr));
        IdLab_2->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        name_2->setText(QApplication::translate("MainWindow", "Mekacher Anis", nullptr));
        start_2->setText(QApplication::translate("MainWindow", "Commencer", nullptr));
        poste->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        poste->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        poste->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));

        poste->setCurrentText(QApplication::translate("MainWindow", "1", nullptr));
        save_2->setText(QApplication::translate("MainWindow", "Sauvegarder", nullptr));
        tabs->setTabText(tabs->indexOf(Overview), QApplication::translate("MainWindow", "Overview", nullptr));
        chartBox->setTitle(QString());
        searchBut->setText(QApplication::translate("MainWindow", "Rechercher", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "ID", nullptr));
        diagNat->setItemText(0, QApplication::translate("MainWindow", "Ouvrier", nullptr));
        diagNat->setItemText(1, QApplication::translate("MainWindow", "Technicien", nullptr));

        diagType->setItemText(0, QApplication::translate("MainWindow", "Rendement", nullptr));
        diagType->setItemText(1, QApplication::translate("MainWindow", "Efficacite", nullptr));

        diagLimit->setItemText(0, QApplication::translate("MainWindow", "Les 7 derniers jours", nullptr));
        diagLimit->setItemText(1, QApplication::translate("MainWindow", "Les 15 derniers jours", nullptr));
        diagLimit->setItemText(2, QApplication::translate("MainWindow", "Les 30 derniers jours", nullptr));

        tabs->setTabText(tabs->indexOf(Diagnostics), QApplication::translate("MainWindow", "Diagnostics", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter Ouvrier / Technicien", nullptr));
        IdLab_3->setText(QApplication::translate("MainWindow", "Id", nullptr));
        name_3->setText(QApplication::translate("MainWindow", "Mekacher Anis", nullptr));
        chargeLab_3->setText(QApplication::translate("MainWindow", "Charge", nullptr));
        itemNat->setItemText(0, QApplication::translate("MainWindow", "Ouvrier", nullptr));
        itemNat->setItemText(1, QApplication::translate("MainWindow", "Technicien", nullptr));

        addWorker->setText(QApplication::translate("MainWindow", "Ajouter", nullptr));
        posteLab_3->setText(QApplication::translate("MainWindow", "Poste", nullptr));
        poste_3->setItemText(0, QApplication::translate("MainWindow", "1", nullptr));
        poste_3->setItemText(1, QApplication::translate("MainWindow", "2", nullptr));
        poste_3->setItemText(2, QApplication::translate("MainWindow", "3", nullptr));

        poste_3->setCurrentText(QApplication::translate("MainWindow", "1", nullptr));
        Id_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        nameLab_3->setText(QApplication::translate("MainWindow", "Nom", nullptr));
        charge_3->setText(QApplication::translate("MainWindow", "5", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Editer la base de donn\303\251es des produits", nullptr));
        save_3->setText(QApplication::translate("MainWindow", "Sauvegarder", nullptr));
        dltBut->setText(QApplication::translate("MainWindow", "Supprimer", nullptr));
        addBut->setText(QApplication::translate("MainWindow", "Inserer", nullptr));
        tabs->setTabText(tabs->indexOf(dbEditor), QApplication::translate("MainWindow", "Edit Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
