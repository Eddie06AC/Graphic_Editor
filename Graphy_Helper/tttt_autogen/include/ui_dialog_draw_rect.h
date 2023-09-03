/********************************************************************************
** Form generated from reading UI file 'dialog_draw_rect.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRAW_RECT_H
#define UI_DIALOG_DRAW_RECT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_draw_Rect
{
public:
    QLabel *label;
    QSpinBox *spinBox_A;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinBox_B;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog_draw_Rect)
    {
        if (Dialog_draw_Rect->objectName().isEmpty())
            Dialog_draw_Rect->setObjectName(QString::fromUtf8("Dialog_draw_Rect"));
        Dialog_draw_Rect->resize(445, 268);
        Dialog_draw_Rect->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label = new QLabel(Dialog_draw_Rect);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 421, 31));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label->setAlignment(Qt::AlignCenter);
        spinBox_A = new QSpinBox(Dialog_draw_Rect);
        spinBox_A->setObjectName(QString::fromUtf8("spinBox_A"));
        spinBox_A->setGeometry(QRect(88, 70, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        spinBox_A->setFont(font1);
        spinBox_A->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_A->setMaximum(10000);
        spinBox_A->setValue(0);
        label_2 = new QLabel(Dialog_draw_Rect);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 37, 28));
        QFont font2;
        font2.setPointSize(16);
        label_2->setFont(font2);
        label_3 = new QLabel(Dialog_draw_Rect);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 110, 37, 28));
        label_3->setFont(font2);
        spinBox_B = new QSpinBox(Dialog_draw_Rect);
        spinBox_B->setObjectName(QString::fromUtf8("spinBox_B"));
        spinBox_B->setGeometry(QRect(88, 110, 71, 31));
        spinBox_B->setFont(font1);
        spinBox_B->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_B->setMaximum(10000);
        spinBox_B->setValue(0);
        label_4 = new QLabel(Dialog_draw_Rect);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 60, 281, 161));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/images/img/rect.png);"));
        pushButton = new QPushButton(Dialog_draw_Rect);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 227, 82, 32));
        QFont font3;
        font3.setPointSize(11);
        pushButton->setFont(font3);
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
        pushButton_2 = new QPushButton(Dialog_draw_Rect);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 227, 82, 32));
        pushButton_2->setFont(font3);
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
        pushButton_3 = new QPushButton(Dialog_draw_Rect);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 150, 35, 35));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/pen_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(35, 35));

        retranslateUi(Dialog_draw_Rect);

        QMetaObject::connectSlotsByName(Dialog_draw_Rect);
    } // setupUi

    void retranslateUi(QDialog *Dialog_draw_Rect)
    {
        Dialog_draw_Rect->setWindowTitle(QCoreApplication::translate("Dialog_draw_Rect", "Drawing rectangle", nullptr));
        label->setText(QCoreApplication::translate("Dialog_draw_Rect", "Enter the dimensions of the rectangle to draw", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_draw_Rect", "a =", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_draw_Rect", "b =", nullptr));
        label_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog_draw_Rect", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_draw_Rect", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("Dialog_draw_Rect", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#000000;\">Setting up drawing styles</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_draw_Rect: public Ui_Dialog_draw_Rect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRAW_RECT_H
