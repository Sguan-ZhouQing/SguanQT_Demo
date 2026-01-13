/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *led;
    QLabel *label;
    QPushButton *key_open;
    QPushButton *key_refresh;
    QTextBrowser *textBrowser;
    QTextEdit *textEdit;
    QComboBox *comboBox_com;
    QComboBox *comboBox_speed;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *key_tx;
    QPushButton *key_clear;
    QPushButton *key_rx_clear;
    QLCDNumber *lcdNumber;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(539, 372);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        led = new QPushButton(centralwidget);
        led->setObjectName("led");
        led->setGeometry(QRect(400, 150, 41, 41));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(390, -10, 151, 41));
        key_open = new QPushButton(centralwidget);
        key_open->setObjectName("key_open");
        key_open->setGeometry(QRect(450, 150, 71, 20));
        key_refresh = new QPushButton(centralwidget);
        key_refresh->setObjectName("key_refresh");
        key_refresh->setGeometry(QRect(450, 180, 71, 21));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(0, 0, 381, 201));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 210, 381, 81));
        comboBox_com = new QComboBox(centralwidget);
        comboBox_com->setObjectName("comboBox_com");
        comboBox_com->setGeometry(QRect(400, 50, 121, 31));
        comboBox_speed = new QComboBox(centralwidget);
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->addItem(QString());
        comboBox_speed->setObjectName("comboBox_speed");
        comboBox_speed->setGeometry(QRect(400, 110, 121, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(400, 30, 151, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 90, 151, 21));
        key_tx = new QPushButton(centralwidget);
        key_tx->setObjectName("key_tx");
        key_tx->setGeometry(QRect(400, 210, 71, 41));
        key_tx->setAutoFillBackground(false);
        key_clear = new QPushButton(centralwidget);
        key_clear->setObjectName("key_clear");
        key_clear->setGeometry(QRect(400, 250, 71, 41));
        key_clear->setAutoFillBackground(false);
        key_rx_clear = new QPushButton(centralwidget);
        key_rx_clear->setObjectName("key_rx_clear");
        key_rx_clear->setGeometry(QRect(470, 240, 51, 51));
        key_rx_clear->setAutoFillBackground(false);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(460, 84, 51, 21));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        led->setText(QCoreApplication::translate("MainWindow", "LED", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\230\237\345\277\205\345\260\230Sguan->\344\270\262\345\217\243\345\212\251\346\211\213", nullptr));
        key_open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        key_refresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\344\270\262\345\217\243", nullptr));
        comboBox_speed->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox_speed->setItemText(1, QCoreApplication::translate("MainWindow", "19200", nullptr));
        comboBox_speed->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        comboBox_speed->setItemText(3, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBox_speed->setItemText(4, QCoreApplication::translate("MainWindow", "115200", nullptr));
        comboBox_speed->setItemText(5, QCoreApplication::translate("MainWindow", "921600", nullptr));
        comboBox_speed->setItemText(6, QCoreApplication::translate("MainWindow", "1152000", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\351\200\211\346\213\251\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        key_tx->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        key_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244\346\226\207\346\234\254", nullptr));
        key_rx_clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
