/********************************************************************************
** Form generated from reading UI file 'dialog_draw_elipse.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRAW_ELIPSE_H
#define UI_DIALOG_DRAW_ELIPSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_draw_elipse
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QPushButton *pushButton_settings;

    void setupUi(QDialog *Dialog_draw_elipse)
    {
        if (Dialog_draw_elipse->objectName().isEmpty())
            Dialog_draw_elipse->setObjectName(QString::fromUtf8("Dialog_draw_elipse"));
        Dialog_draw_elipse->resize(409, 249);
        Dialog_draw_elipse->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label = new QLabel(Dialog_draw_elipse);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 340, 31));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Dialog_draw_elipse);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(22, 70, 37, 28));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_3 = new QLabel(Dialog_draw_elipse);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 50, 231, 151));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/images/img/elipse.png);"));
        spinBox = new QSpinBox(Dialog_draw_elipse);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 70, 71, 31));
        QFont font2;
        font2.setPointSize(12);
        spinBox->setFont(font2);
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
        spinBox->setMaximum(10000);
        spinBox->setValue(0);
        pushButton_ok = new QPushButton(Dialog_draw_elipse);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(70, 205, 82, 32));
        QFont font3;
        font3.setPointSize(11);
        pushButton_ok->setFont(font3);
        pushButton_ok->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_cancel = new QPushButton(Dialog_draw_elipse);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(270, 205, 82, 32));
        pushButton_cancel->setFont(font3);
        pushButton_cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        spinBox_2 = new QSpinBox(Dialog_draw_elipse);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(70, 120, 71, 31));
        spinBox_2->setFont(font2);
        spinBox_2->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_2->setMaximum(10000);
        spinBox_2->setValue(0);
        label_4 = new QLabel(Dialog_draw_elipse);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(22, 120, 37, 28));
        label_4->setFont(font1);
        pushButton_settings = new QPushButton(Dialog_draw_elipse);
        pushButton_settings->setObjectName(QString::fromUtf8("pushButton_settings"));
        pushButton_settings->setGeometry(QRect(20, 160, 35, 35));
        pushButton_settings->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/pen_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_settings->setIcon(icon);
        pushButton_settings->setIconSize(QSize(35, 35));

        retranslateUi(Dialog_draw_elipse);

        QMetaObject::connectSlotsByName(Dialog_draw_elipse);
    } // setupUi

    void retranslateUi(QDialog *Dialog_draw_elipse)
    {
        Dialog_draw_elipse->setWindowTitle(QCoreApplication::translate("Dialog_draw_elipse", "Drawing elipse", nullptr));
        label->setText(QCoreApplication::translate("Dialog_draw_elipse", "Enter the dimensions of the ellipse to draw", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_draw_elipse", "a = ", nullptr));
        label_3->setText(QString());
        pushButton_ok->setText(QCoreApplication::translate("Dialog_draw_elipse", "Ok", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Dialog_draw_elipse", "Cancel", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_draw_elipse", "b =", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_settings->setToolTip(QCoreApplication::translate("Dialog_draw_elipse", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#000000;\">Setting up drawing styles</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_settings->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_draw_elipse: public Ui_Dialog_draw_elipse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRAW_ELIPSE_H
