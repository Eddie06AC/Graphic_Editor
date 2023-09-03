/********************************************************************************
** Form generated from reading UI file 'dialog_draw_romb.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRAW_ROMB_H
#define UI_DIALOG_DRAW_ROMB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_draw_romb
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog_draw_romb)
    {
        if (Dialog_draw_romb->objectName().isEmpty())
            Dialog_draw_romb->setObjectName(QString::fromUtf8("Dialog_draw_romb"));
        Dialog_draw_romb->resize(370, 253);
        Dialog_draw_romb->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        pushButton = new QPushButton(Dialog_draw_romb);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 210, 82, 32));
        QFont font;
        font.setPointSize(11);
        pushButton->setFont(font);
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
        pushButton_2 = new QPushButton(Dialog_draw_romb);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 210, 82, 32));
        pushButton_2->setFont(font);
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
        label = new QLabel(Dialog_draw_romb);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 80, 37, 28));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label_2 = new QLabel(Dialog_draw_romb);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(15, 10, 340, 31));
        QFont font2;
        font2.setPointSize(13);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_3 = new QLabel(Dialog_draw_romb);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 40, 231, 161));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/images/img/romb.png);"));
        spinBox = new QSpinBox(Dialog_draw_romb);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 80, 71, 31));
        QFont font3;
        font3.setPointSize(12);
        spinBox->setFont(font3);
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
        pushButton_3 = new QPushButton(Dialog_draw_romb);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 120, 35, 35));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/pen_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(35, 35));
        label_3->raise();
        pushButton->raise();
        pushButton_2->raise();
        label->raise();
        label_2->raise();
        spinBox->raise();
        pushButton_3->raise();

        retranslateUi(Dialog_draw_romb);

        QMetaObject::connectSlotsByName(Dialog_draw_romb);
    } // setupUi

    void retranslateUi(QDialog *Dialog_draw_romb)
    {
        Dialog_draw_romb->setWindowTitle(QCoreApplication::translate("Dialog_draw_romb", "Drawing rhomb", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_draw_romb", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_draw_romb", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("Dialog_draw_romb", "a =", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_draw_romb", "Enter the dimensions of the diamond for drawing", nullptr));
        label_3->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("Dialog_draw_romb", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#000000;\">Setting up drawing styles</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_draw_romb: public Ui_Dialog_draw_romb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRAW_ROMB_H
