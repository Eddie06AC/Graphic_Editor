/********************************************************************************
** Form generated from reading UI file 'dialog_size_scene.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SIZE_SCENE_H
#define UI_DIALOG_SIZE_SCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_size_scene
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButto_ok;
    QPushButton *pushButton_2_cancel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButtonA0;
    QPushButton *pushButtonA1;
    QPushButton *pushButtonA2;
    QPushButton *pushButtonA3;
    QPushButton *pushButtonA4;
    QPushButton *pushButtonA5;
    QRadioButton *radioButton_None;
    QRadioButton *radioButton_Cage;
    QRadioButton *radioButton_Line;
    QLabel *label_5;
    QComboBox *unit_of_measurement;
    QDoubleSpinBox *width;
    QDoubleSpinBox *height;
    QSpinBox *spinBox_size_cage_line;

    void setupUi(QDialog *Dialog_size_scene)
    {
        if (Dialog_size_scene->objectName().isEmpty())
            Dialog_size_scene->setObjectName(QString::fromUtf8("Dialog_size_scene"));
        Dialog_size_scene->resize(360, 287);
        Dialog_size_scene->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label_3 = new QLabel(Dialog_size_scene);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(15, 10, 330, 51));
        QFont font;
        font.setPointSize(13);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Dialog_size_scene);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 260, 301, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(100, 100, 100)"));
        pushButto_ok = new QPushButton(Dialog_size_scene);
        pushButto_ok->setObjectName(QString::fromUtf8("pushButto_ok"));
        pushButto_ok->setGeometry(QRect(60, 220, 82, 32));
        QFont font1;
        font1.setPointSize(11);
        pushButto_ok->setFont(font1);
        pushButto_ok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}"));
        pushButton_2_cancel = new QPushButton(Dialog_size_scene);
        pushButton_2_cancel->setObjectName(QString::fromUtf8("pushButton_2_cancel"));
        pushButton_2_cancel->setGeometry(QRect(200, 220, 82, 32));
        pushButton_2_cancel->setFont(font1);
        pushButton_2_cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}"));
        label = new QLabel(Dialog_size_scene);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(125, 130, 91, 31));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);
        label_2 = new QLabel(Dialog_size_scene);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(125, 170, 81, 31));
        label_2->setFont(font2);
        pushButtonA0 = new QPushButton(Dialog_size_scene);
        pushButtonA0->setObjectName(QString::fromUtf8("pushButtonA0"));
        pushButtonA0->setGeometry(QRect(10, 100, 41, 31));
        pushButtonA0->setFont(font2);
        pushButtonA0->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        pushButtonA1 = new QPushButton(Dialog_size_scene);
        pushButtonA1->setObjectName(QString::fromUtf8("pushButtonA1"));
        pushButtonA1->setGeometry(QRect(60, 100, 41, 31));
        pushButtonA1->setFont(font2);
        pushButtonA1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        pushButtonA2 = new QPushButton(Dialog_size_scene);
        pushButtonA2->setObjectName(QString::fromUtf8("pushButtonA2"));
        pushButtonA2->setGeometry(QRect(10, 140, 41, 31));
        pushButtonA2->setFont(font2);
        pushButtonA2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        pushButtonA3 = new QPushButton(Dialog_size_scene);
        pushButtonA3->setObjectName(QString::fromUtf8("pushButtonA3"));
        pushButtonA3->setGeometry(QRect(60, 140, 41, 31));
        pushButtonA3->setFont(font2);
        pushButtonA3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        pushButtonA4 = new QPushButton(Dialog_size_scene);
        pushButtonA4->setObjectName(QString::fromUtf8("pushButtonA4"));
        pushButtonA4->setGeometry(QRect(10, 180, 41, 31));
        pushButtonA4->setFont(font2);
        pushButtonA4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        pushButtonA5 = new QPushButton(Dialog_size_scene);
        pushButtonA5->setObjectName(QString::fromUtf8("pushButtonA5"));
        pushButtonA5->setGeometry(QRect(60, 180, 41, 31));
        pushButtonA5->setFont(font2);
        pushButtonA5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;\n"
"}\n"
"QPushButton::hover\n"
"{\n"
"background-color:white;\n"
"}\n"
""));
        radioButton_None = new QRadioButton(Dialog_size_scene);
        radioButton_None->setObjectName(QString::fromUtf8("radioButton_None"));
        radioButton_None->setGeometry(QRect(150, 80, 61, 20));
        radioButton_None->setFont(font2);
        radioButton_Cage = new QRadioButton(Dialog_size_scene);
        radioButton_Cage->setObjectName(QString::fromUtf8("radioButton_Cage"));
        radioButton_Cage->setGeometry(QRect(150, 100, 71, 21));
        radioButton_Cage->setFont(font2);
        radioButton_Line = new QRadioButton(Dialog_size_scene);
        radioButton_Line->setObjectName(QString::fromUtf8("radioButton_Line"));
        radioButton_Line->setGeometry(QRect(230, 80, 61, 20));
        radioButton_Line->setFont(font2);
        label_5 = new QLabel(Dialog_size_scene);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 80, 61, 16));
        label_5->setFont(font2);
        unit_of_measurement = new QComboBox(Dialog_size_scene);
        unit_of_measurement->addItem(QString());
        unit_of_measurement->addItem(QString());
        unit_of_measurement->addItem(QString());
        unit_of_measurement->addItem(QString());
        unit_of_measurement->addItem(QString());
        unit_of_measurement->setObjectName(QString::fromUtf8("unit_of_measurement"));
        unit_of_measurement->setGeometry(QRect(290, 150, 55, 31));
        unit_of_measurement->setFont(font2);
        unit_of_measurement->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px; \n"
"  width: 300px;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"QComboBox::down-arrow {\n"
"   right: 4px;\n"
"  	image: url(:/images/img/Down_icon.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"   background-color: white;\n"
"}"));
        width = new QDoubleSpinBox(Dialog_size_scene);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(180, 130, 101, 30));
        width->setFont(font2);
        width->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"  	image: url(:/images/img/Down_icon.png);\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"	image: url(:/images/img/UP_icon.png);\n"
"}\n"
"QDoubleSpinBox:hover\n"
"{\n"
"   background-color: white;\n"
"}"));
        width->setMaximum(1000000000.000000000000000);
        height = new QDoubleSpinBox(Dialog_size_scene);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(180, 170, 101, 30));
        height->setFont(font2);
        height->setStyleSheet(QString::fromUtf8("QDoubleSpinBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"QDoubleSpinBox::down-button\n"
"{\n"
"  	image: url(:/images/img/Down_icon.png);\n"
"\n"
"}\n"
"QDoubleSpinBox::up-button\n"
"{\n"
"	image: url(:/images/img/UP_icon.png);\n"
"}\n"
"QDoubleSpinBox:hover\n"
"{\n"
"   background-color: white;\n"
"}"));
        height->setMaximum(1000000000.000000000000000);
        spinBox_size_cage_line = new QSpinBox(Dialog_size_scene);
        spinBox_size_cage_line->setObjectName(QString::fromUtf8("spinBox_size_cage_line"));
        spinBox_size_cage_line->setEnabled(false);
        spinBox_size_cage_line->setGeometry(QRect(240, 100, 42, 22));
        spinBox_size_cage_line->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"QSpinBox::down-button\n"
"{\n"
"  	image: url(:/images/img/Down_icon.png);\n"
"\n"
"}\n"
"QSpinBox::up-button\n"
"{\n"
"	image: url(:/images/img/UP_icon.png);\n"
"}\n"
"QSpinBox:hover\n"
"{\n"
"   background-color: white;\n"
"}"));
        spinBox_size_cage_line->setMaximum(10000);
        spinBox_size_cage_line->setValue(50);

        retranslateUi(Dialog_size_scene);

        QMetaObject::connectSlotsByName(Dialog_size_scene);
    } // setupUi

    void retranslateUi(QDialog *Dialog_size_scene)
    {
        Dialog_size_scene->setWindowTitle(QCoreApplication::translate("Dialog_size_scene", "Resizing a graphic scene", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_size_scene", "Enter the parameters\n"
" to change the size of the graphic scene", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_size_scene", "Default graphic scene dimensions: 1874 x 762", nullptr));
        pushButto_ok->setText(QCoreApplication::translate("Dialog_size_scene", "Ok", nullptr));
        pushButton_2_cancel->setText(QCoreApplication::translate("Dialog_size_scene", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Dialog_size_scene", "Width", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_size_scene", "Height", nullptr));
        pushButtonA0->setText(QCoreApplication::translate("Dialog_size_scene", "A0", nullptr));
        pushButtonA1->setText(QCoreApplication::translate("Dialog_size_scene", "A1", nullptr));
        pushButtonA2->setText(QCoreApplication::translate("Dialog_size_scene", "A2", nullptr));
        pushButtonA3->setText(QCoreApplication::translate("Dialog_size_scene", "A3", nullptr));
        pushButtonA4->setText(QCoreApplication::translate("Dialog_size_scene", "A4", nullptr));
        pushButtonA5->setText(QCoreApplication::translate("Dialog_size_scene", "A5", nullptr));
        radioButton_None->setText(QCoreApplication::translate("Dialog_size_scene", "None", nullptr));
        radioButton_Cage->setText(QCoreApplication::translate("Dialog_size_scene", "\320\241age", nullptr));
        radioButton_Line->setText(QCoreApplication::translate("Dialog_size_scene", "Line", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_size_scene", "Presets", nullptr));
        unit_of_measurement->setItemText(0, QCoreApplication::translate("Dialog_size_scene", "px", nullptr));
        unit_of_measurement->setItemText(1, QCoreApplication::translate("Dialog_size_scene", "mm", nullptr));
        unit_of_measurement->setItemText(2, QCoreApplication::translate("Dialog_size_scene", "cm", nullptr));
        unit_of_measurement->setItemText(3, QCoreApplication::translate("Dialog_size_scene", "dm", nullptr));
        unit_of_measurement->setItemText(4, QCoreApplication::translate("Dialog_size_scene", "m", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog_size_scene: public Ui_Dialog_size_scene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SIZE_SCENE_H
