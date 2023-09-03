/********************************************************************************
** Form generated from reading UI file 'dialog_size_pen.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_SIZE_PEN_H
#define UI_DIALOG_SIZE_PEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_size_pen
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_size_pen)
    {
        if (Dialog_size_pen->objectName().isEmpty())
            Dialog_size_pen->setObjectName(QString::fromUtf8("Dialog_size_pen"));
        Dialog_size_pen->resize(250, 149);
        Dialog_size_pen->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label = new QLabel(Dialog_size_pen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 15, 210, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label->setAlignment(Qt::AlignCenter);
        spinBox = new QSpinBox(Dialog_size_pen);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(15, 65, 220, 31));
        spinBox->setFont(font);
        spinBox->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        spinBox->setValue(25);
        pushButton = new QPushButton(Dialog_size_pen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 110, 82, 32));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(Dialog_size_pen);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 110, 82, 32));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Dialog_size_pen);

        QMetaObject::connectSlotsByName(Dialog_size_pen);
    } // setupUi

    void retranslateUi(QDialog *Dialog_size_pen)
    {
        Dialog_size_pen->setWindowTitle(QCoreApplication::translate("Dialog_size_pen", "Changing the brush size", nullptr));
        label->setText(QCoreApplication::translate("Dialog_size_pen", "Enter the integer number:", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_size_pen", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_size_pen", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_size_pen: public Ui_Dialog_size_pen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_SIZE_PEN_H
