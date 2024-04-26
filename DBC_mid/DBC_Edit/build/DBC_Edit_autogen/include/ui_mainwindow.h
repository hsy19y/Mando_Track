/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *CAN_ID;
    QTextEdit *sg_name;
    QTextEdit *sg_factor;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *sg_offset;
    QTextEdit *sg_unit;
    QLabel *label_8;
    QTextEdit *sg_cm;
    QLabel *label_9;
    QLabel *label_10;
    QTextEdit *msg_cm;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *sg_min;
    QLabel *label_15;
    QTextEdit *sg_max;
    QSpinBox *sg_start;
    QSpinBox *sg_length;
    QSpinBox *msg_length;
    QComboBox *sg_endian;
    QLabel *label_16;
    QTextEdit *msg_name;
    QComboBox *sg_type;
    QLabel *label_17;
    QPushButton *bt_signal;
    QPushButton *bt_msg;
    QTextBrowser *DBC_temp;
    QLabel *label_18;
    QPushButton *bt_save;
    QPushButton *bt_del_lastline;
    QTextBrowser *debug;
    QLabel *label_19;
    QPushButton *bt_addDBC;
    QLineEdit *lineEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(641, 736);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 50, 48, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 50, 48, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 210, 81, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(270, 210, 48, 16));
        CAN_ID = new QTextEdit(centralwidget);
        CAN_ID->setObjectName("CAN_ID");
        CAN_ID->setGeometry(QRect(30, 70, 221, 31));
        sg_name = new QTextEdit(centralwidget);
        sg_name->setObjectName("sg_name");
        sg_name->setGeometry(QRect(30, 230, 231, 31));
        QFont font;
        font.setPointSize(9);
        sg_name->setFont(font);
        sg_factor = new QTextEdit(centralwidget);
        sg_factor->setObjectName("sg_factor");
        sg_factor->setGeometry(QRect(30, 290, 101, 31));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(330, 210, 48, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 270, 48, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 270, 48, 16));
        sg_offset = new QTextEdit(centralwidget);
        sg_offset->setObjectName("sg_offset");
        sg_offset->setGeometry(QRect(140, 290, 101, 31));
        sg_unit = new QTextEdit(centralwidget);
        sg_unit->setObjectName("sg_unit");
        sg_unit->setGeometry(QRect(450, 290, 91, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 270, 48, 16));
        sg_cm = new QTextEdit(centralwidget);
        sg_cm->setObjectName("sg_cm");
        sg_cm->setGeometry(QRect(30, 350, 511, 31));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 330, 61, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(400, 50, 41, 16));
        msg_cm = new QTextEdit(centralwidget);
        msg_cm->setObjectName("msg_cm");
        msg_cm->setGeometry(QRect(30, 130, 511, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(30, 110, 61, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(30, 10, 101, 31));
        QFont font1;
        font1.setPointSize(15);
        label_12->setFont(font1);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(30, 170, 101, 31));
        label_13->setFont(font1);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(250, 270, 48, 16));
        sg_min = new QTextEdit(centralwidget);
        sg_min->setObjectName("sg_min");
        sg_min->setGeometry(QRect(250, 290, 91, 31));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(350, 270, 48, 16));
        sg_max = new QTextEdit(centralwidget);
        sg_max->setObjectName("sg_max");
        sg_max->setGeometry(QRect(350, 290, 91, 31));
        sg_start = new QSpinBox(centralwidget);
        sg_start->setObjectName("sg_start");
        sg_start->setGeometry(QRect(270, 230, 51, 31));
        sg_length = new QSpinBox(centralwidget);
        sg_length->setObjectName("sg_length");
        sg_length->setGeometry(QRect(330, 230, 51, 31));
        msg_length = new QSpinBox(centralwidget);
        msg_length->setObjectName("msg_length");
        msg_length->setGeometry(QRect(400, 70, 51, 31));
        sg_endian = new QComboBox(centralwidget);
        sg_endian->addItem(QString());
        sg_endian->addItem(QString());
        sg_endian->setObjectName("sg_endian");
        sg_endian->setGeometry(QRect(390, 230, 51, 31));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(390, 210, 48, 16));
        msg_name = new QTextEdit(centralwidget);
        msg_name->setObjectName("msg_name");
        msg_name->setGeometry(QRect(260, 70, 131, 31));
        sg_type = new QComboBox(centralwidget);
        sg_type->addItem(QString());
        sg_type->addItem(QString());
        sg_type->setObjectName("sg_type");
        sg_type->setGeometry(QRect(450, 230, 91, 31));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(450, 210, 48, 16));
        bt_signal = new QPushButton(centralwidget);
        bt_signal->setObjectName("bt_signal");
        bt_signal->setGeometry(QRect(550, 540, 81, 31));
        bt_msg = new QPushButton(centralwidget);
        bt_msg->setObjectName("bt_msg");
        bt_msg->setGeometry(QRect(550, 500, 81, 31));
        DBC_temp = new QTextBrowser(centralwidget);
        DBC_temp->setObjectName("DBC_temp");
        DBC_temp->setGeometry(QRect(30, 500, 511, 201));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(30, 480, 61, 16));
        bt_save = new QPushButton(centralwidget);
        bt_save->setObjectName("bt_save");
        bt_save->setGeometry(QRect(550, 670, 81, 31));
        bt_del_lastline = new QPushButton(centralwidget);
        bt_del_lastline->setObjectName("bt_del_lastline");
        bt_del_lastline->setGeometry(QRect(550, 580, 81, 41));
        debug = new QTextBrowser(centralwidget);
        debug->setObjectName("debug");
        debug->setGeometry(QRect(30, 410, 511, 51));
        QFont font2;
        font2.setPointSize(8);
        debug->setFont(font2);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(30, 390, 41, 16));
        bt_addDBC = new QPushButton(centralwidget);
        bt_addDBC->setObjectName("bt_addDBC");
        bt_addDBC->setGeometry(QRect(550, 630, 81, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(450, 180, 113, 22));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DBC Editor for CAN Bus Database Files", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CAN ID", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Bit Start", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Factor", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Offset", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Unit", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Length", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Message", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Signal", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        sg_endian->setItemText(0, QCoreApplication::translate("MainWindow", "Little", nullptr));
        sg_endian->setItemText(1, QCoreApplication::translate("MainWindow", "Big", nullptr));

        label_16->setText(QCoreApplication::translate("MainWindow", "Endian", nullptr));
        sg_type->setItemText(0, QCoreApplication::translate("MainWindow", "Signed", nullptr));
        sg_type->setItemText(1, QCoreApplication::translate("MainWindow", "Unsigned", nullptr));

        label_17->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        bt_signal->setText(QCoreApplication::translate("MainWindow", "Add Signal", nullptr));
        bt_msg->setText(QCoreApplication::translate("MainWindow", "Add Message", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "DBC File", nullptr));
        bt_save->setText(QCoreApplication::translate("MainWindow", "Save DBC", nullptr));
        bt_del_lastline->setText(QCoreApplication::translate("MainWindow", "Delete\n"
"Last Line", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        bt_addDBC->setText(QCoreApplication::translate("MainWindow", "Add DBC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
