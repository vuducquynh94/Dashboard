/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_a_to_do_list;
    QAction *actionExit;
    QWidget *centralWidget;
    QPushButton *imageDownloadButton;
    QLabel *imageLabel;
    QLineEdit *zipCodeEdit;
    QPushButton *weatherDownloadButton;
    QLabel *weatherLabel;
    QStackedWidget *clockWidget;
    QWidget *page;
    QLabel *timeLabel;
    QPushButton *worldButton;
    QLCDNumber *secondLCD;
    QLCDNumber *minuteLCD;
    QLCDNumber *hourLCD;
    QWidget *page_2;
    QPushButton *currentButton;
    QLCDNumber *worldSecondLCD;
    QLCDNumber *worldHourLCD;
    QLCDNumber *worldMinuteLCD;
    QComboBox *worldComboBox;
    QLabel *worldTimeLabel;
    QTableView *tableView;
    QLabel *photoLabel;
    QMenuBar *menuBar;
    QMenu *menuTools;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(933, 715);
        actionOpen_a_to_do_list = new QAction(MainWindow);
        actionOpen_a_to_do_list->setObjectName(QString::fromUtf8("actionOpen_a_to_do_list"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        imageDownloadButton = new QPushButton(centralWidget);
        imageDownloadButton->setObjectName(QString::fromUtf8("imageDownloadButton"));
        imageDownloadButton->setGeometry(QRect(20, 240, 131, 41));
        QFont font;
        font.setPointSize(11);
        imageDownloadButton->setFont(font);
        imageLabel = new QLabel(centralWidget);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setGeometry(QRect(20, 290, 420, 301));
        imageLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black;\n"
"border-image:url(:images/map.jpg);"));
        zipCodeEdit = new QLineEdit(centralWidget);
        zipCodeEdit->setObjectName(QString::fromUtf8("zipCodeEdit"));
        zipCodeEdit->setGeometry(QRect(160, 240, 131, 41));
        QFont font1;
        font1.setPointSize(14);
        zipCodeEdit->setFont(font1);
        zipCodeEdit->setAlignment(Qt::AlignCenter);
        weatherDownloadButton = new QPushButton(centralWidget);
        weatherDownloadButton->setObjectName(QString::fromUtf8("weatherDownloadButton"));
        weatherDownloadButton->setGeometry(QRect(300, 240, 141, 41));
        QFont font2;
        font2.setPointSize(9);
        weatherDownloadButton->setFont(font2);
        weatherLabel = new QLabel(centralWidget);
        weatherLabel->setObjectName(QString::fromUtf8("weatherLabel"));
        weatherLabel->setGeometry(QRect(450, 450, 231, 141));
        QFont font3;
        font3.setPointSize(8);
        weatherLabel->setFont(font3);
        weatherLabel->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        weatherLabel->setAlignment(Qt::AlignCenter);
        clockWidget = new QStackedWidget(centralWidget);
        clockWidget->setObjectName(QString::fromUtf8("clockWidget"));
        clockWidget->setGeometry(QRect(20, 10, 420, 221));
        clockWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        clockWidget->setStyleSheet(QString::fromUtf8("border: 1px solid black"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        timeLabel = new QLabel(page);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(10, 140, 261, 71));
        timeLabel->setFont(font2);
        timeLabel->setAlignment(Qt::AlignCenter);
        worldButton = new QPushButton(page);
        worldButton->setObjectName(QString::fromUtf8("worldButton"));
        worldButton->setGeometry(QRect(290, 160, 121, 51));
        worldButton->setFont(font);
        worldButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius:50px;\n"
" background-color:rgb(163, 235, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(103, 103, 103)\n"
"}"));
        secondLCD = new QLCDNumber(page);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(280, 20, 121, 111));
        secondLCD->setDigitCount(2);
        secondLCD->setProperty("value", QVariant(22.000000000000000));
        secondLCD->setProperty("intValue", QVariant(22));
        minuteLCD = new QLCDNumber(page);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(150, 20, 121, 111));
        minuteLCD->setDigitCount(2);
        minuteLCD->setProperty("value", QVariant(22.000000000000000));
        minuteLCD->setProperty("intValue", QVariant(22));
        hourLCD = new QLCDNumber(page);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(10, 10, 131, 121));
        hourLCD->setDigitCount(2);
        hourLCD->setProperty("value", QVariant(22.000000000000000));
        hourLCD->setProperty("intValue", QVariant(22));
        clockWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        currentButton = new QPushButton(page_2);
        currentButton->setObjectName(QString::fromUtf8("currentButton"));
        currentButton->setGeometry(QRect(10, 150, 121, 51));
        QFont font4;
        font4.setPointSize(10);
        currentButton->setFont(font4);
        currentButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-radius:50px;\n"
" background-color:rgb(163, 235, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(103, 103, 103)\n"
"}"));
        worldSecondLCD = new QLCDNumber(page_2);
        worldSecondLCD->setObjectName(QString::fromUtf8("worldSecondLCD"));
        worldSecondLCD->setGeometry(QRect(270, 30, 81, 71));
        worldSecondLCD->setDigitCount(2);
        worldSecondLCD->setProperty("value", QVariant(22.000000000000000));
        worldSecondLCD->setProperty("intValue", QVariant(22));
        worldHourLCD = new QLCDNumber(page_2);
        worldHourLCD->setObjectName(QString::fromUtf8("worldHourLCD"));
        worldHourLCD->setGeometry(QRect(70, 10, 101, 91));
        worldHourLCD->setDigitCount(2);
        worldHourLCD->setProperty("value", QVariant(22.000000000000000));
        worldHourLCD->setProperty("intValue", QVariant(22));
        worldMinuteLCD = new QLCDNumber(page_2);
        worldMinuteLCD->setObjectName(QString::fromUtf8("worldMinuteLCD"));
        worldMinuteLCD->setGeometry(QRect(180, 30, 81, 71));
        worldMinuteLCD->setDigitCount(2);
        worldMinuteLCD->setProperty("value", QVariant(22.000000000000000));
        worldMinuteLCD->setProperty("intValue", QVariant(22));
        worldComboBox = new QComboBox(page_2);
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->addItem(QString());
        worldComboBox->setObjectName(QString::fromUtf8("worldComboBox"));
        worldComboBox->setGeometry(QRect(70, 110, 281, 22));
        worldTimeLabel = new QLabel(page_2);
        worldTimeLabel->setObjectName(QString::fromUtf8("worldTimeLabel"));
        worldTimeLabel->setGeometry(QRect(150, 140, 261, 71));
        worldTimeLabel->setFont(font2);
        worldTimeLabel->setAlignment(Qt::AlignCenter);
        clockWidget->addWidget(page_2);
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(450, 10, 461, 431));
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->verticalHeader()->setVisible(false);
        photoLabel = new QLabel(centralWidget);
        photoLabel->setObjectName(QString::fromUtf8("photoLabel"));
        photoLabel->setGeometry(QRect(690, 450, 221, 141));
        photoLabel->setFont(font4);
        photoLabel->setStyleSheet(QString::fromUtf8("background-image:url(:images/1.jpg);"));
        photoLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 933, 31));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTools->menuAction());
        menuTools->addAction(actionOpen_a_to_do_list);
        menuTools->addSeparator();
        menuTools->addAction(actionExit);

        retranslateUi(MainWindow);

        clockWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen_a_to_do_list->setText(QApplication::translate("MainWindow", "Open a To-Do list", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        imageDownloadButton->setText(QApplication::translate("MainWindow", "Display Map", nullptr));
        imageLabel->setText(QString());
        zipCodeEdit->setInputMask(QApplication::translate("MainWindow", "99999", nullptr));
        zipCodeEdit->setText(QApplication::translate("MainWindow", "98119", nullptr));
        weatherDownloadButton->setText(QApplication::translate("MainWindow", "Display Weather", nullptr));
        weatherLabel->setText(QApplication::translate("MainWindow", "Weather Information", nullptr));
        timeLabel->setText(QApplication::translate("MainWindow", "Time:", nullptr));
        worldButton->setText(QApplication::translate("MainWindow", "World Clock", nullptr));
        currentButton->setText(QApplication::translate("MainWindow", "Current Time", nullptr));
        worldComboBox->setItemText(0, QApplication::translate("MainWindow", "New York", nullptr));
        worldComboBox->setItemText(1, QApplication::translate("MainWindow", "Los Angeles", nullptr));
        worldComboBox->setItemText(2, QApplication::translate("MainWindow", "Dubai", nullptr));
        worldComboBox->setItemText(3, QApplication::translate("MainWindow", "Seoul", nullptr));
        worldComboBox->setItemText(4, QApplication::translate("MainWindow", "Ho Chi Minh", nullptr));
        worldComboBox->setItemText(5, QApplication::translate("MainWindow", "Hong Kong", nullptr));
        worldComboBox->setItemText(6, QApplication::translate("MainWindow", "Beijing", nullptr));
        worldComboBox->setItemText(7, QApplication::translate("MainWindow", "Tokyo", nullptr));
        worldComboBox->setItemText(8, QApplication::translate("MainWindow", "Sydney", nullptr));
        worldComboBox->setItemText(9, QApplication::translate("MainWindow", "Paris", nullptr));
        worldComboBox->setItemText(10, QApplication::translate("MainWindow", "London", nullptr));

        worldTimeLabel->setText(QApplication::translate("MainWindow", "Time:", nullptr));
        photoLabel->setText(QString());
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
