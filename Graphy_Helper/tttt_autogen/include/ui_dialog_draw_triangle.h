/********************************************************************************
** Form generated from reading UI file 'dialog_draw_triangle.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DRAW_TRIANGLE_H
#define UI_DIALOG_DRAW_TRIANGLE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_draw_triangle
{
public:
    QPushButton *pushButton_ok;
    QLabel *label_2;
    QLabel *label_photo;
    QWidget *widget_a;
    QSpinBox *spinBox_a;
    QLabel *label;
    QWidget *widget_b;
    QSpinBox *spinBox_b;
    QLabel *label_4;
    QWidget *widget_c;
    QSpinBox *spinBox_c;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_a_b;
    QPushButton *pushButton_a_c;
    QPushButton *pushButton_b_c;
    QPushButton *pushButton_2;
    QPushButton *pushButton_equilater;
    QPushButton *pushButton_isosceles;
    QPushButton *pushButton_rectangular;

    void setupUi(QDialog *Dialog_draw_triangle)
    {
        if (Dialog_draw_triangle->objectName().isEmpty())
            Dialog_draw_triangle->setObjectName(QString::fromUtf8("Dialog_draw_triangle"));
        Dialog_draw_triangle->resize(450, 337);
        Dialog_draw_triangle->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        pushButton_ok = new QPushButton(Dialog_draw_triangle);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(100, 290, 82, 32));
        QFont font;
        font.setPointSize(11);
        pushButton_ok->setFont(font);
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
        label_2 = new QLabel(Dialog_draw_triangle);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 10, 391, 31));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_2->setAlignment(Qt::AlignCenter);
        label_photo = new QLabel(Dialog_draw_triangle);
        label_photo->setObjectName(QString::fromUtf8("label_photo"));
        label_photo->setGeometry(QRect(170, 50, 311, 191));
        label_photo->setStyleSheet(QString::fromUtf8("image: url(:/images/img/triangle_equilateral.png);\n"
"\n"
""));
        widget_a = new QWidget(Dialog_draw_triangle);
        widget_a->setObjectName(QString::fromUtf8("widget_a"));
        widget_a->setGeometry(QRect(10, 65, 141, 61));
        spinBox_a = new QSpinBox(widget_a);
        spinBox_a->setObjectName(QString::fromUtf8("spinBox_a"));
        spinBox_a->setGeometry(QRect(60, 20, 71, 31));
        QFont font2;
        font2.setPointSize(12);
        spinBox_a->setFont(font2);
        spinBox_a->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_a->setMaximum(10000);
        spinBox_a->setValue(0);
        label = new QLabel(widget_a);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 37, 28));
        QFont font3;
        font3.setPointSize(16);
        label->setFont(font3);
        widget_b = new QWidget(Dialog_draw_triangle);
        widget_b->setObjectName(QString::fromUtf8("widget_b"));
        widget_b->setGeometry(QRect(10, 125, 141, 61));
        spinBox_b = new QSpinBox(widget_b);
        spinBox_b->setObjectName(QString::fromUtf8("spinBox_b"));
        spinBox_b->setGeometry(QRect(60, 20, 71, 31));
        spinBox_b->setFont(font2);
        spinBox_b->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_b->setMaximum(10000);
        spinBox_b->setValue(0);
        label_4 = new QLabel(widget_b);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 20, 37, 28));
        label_4->setFont(font3);
        widget_c = new QWidget(Dialog_draw_triangle);
        widget_c->setObjectName(QString::fromUtf8("widget_c"));
        widget_c->setGeometry(QRect(10, 185, 141, 61));
        spinBox_c = new QSpinBox(widget_c);
        spinBox_c->setObjectName(QString::fromUtf8("spinBox_c"));
        spinBox_c->setGeometry(QRect(60, 20, 71, 31));
        spinBox_c->setFont(font2);
        spinBox_c->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_c->setMaximum(10000);
        spinBox_c->setValue(0);
        label_6 = new QLabel(widget_c);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 20, 37, 28));
        label_6->setFont(font3);
        pushButton = new QPushButton(Dialog_draw_triangle);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 290, 82, 32));
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
        pushButton_a_b = new QPushButton(Dialog_draw_triangle);
        pushButton_a_b->setObjectName(QString::fromUtf8("pushButton_a_b"));
        pushButton_a_b->setGeometry(QRect(12, 70, 170, 40));
        pushButton_a_b->setFont(font2);
        pushButton_a_b->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_a_c = new QPushButton(Dialog_draw_triangle);
        pushButton_a_c->setObjectName(QString::fromUtf8("pushButton_a_c"));
        pushButton_a_c->setGeometry(QRect(12, 120, 170, 40));
        pushButton_a_c->setFont(font2);
        pushButton_a_c->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_b_c = new QPushButton(Dialog_draw_triangle);
        pushButton_b_c->setObjectName(QString::fromUtf8("pushButton_b_c"));
        pushButton_b_c->setGeometry(QRect(12, 170, 170, 40));
        pushButton_b_c->setFont(font2);
        pushButton_b_c->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_2 = new QPushButton(Dialog_draw_triangle);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 190, 35, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/pen_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(35, 35));
        pushButton_equilater = new QPushButton(Dialog_draw_triangle);
        pushButton_equilater->setObjectName(QString::fromUtf8("pushButton_equilater"));
        pushButton_equilater->setGeometry(QRect(15, 240, 130, 31));
        pushButton_equilater->setFont(font2);
        pushButton_equilater->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_equilater->setCheckable(false);
        pushButton_isosceles = new QPushButton(Dialog_draw_triangle);
        pushButton_isosceles->setObjectName(QString::fromUtf8("pushButton_isosceles"));
        pushButton_isosceles->setGeometry(QRect(160, 240, 130, 31));
        pushButton_isosceles->setFont(font2);
        pushButton_isosceles->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_rectangular = new QPushButton(Dialog_draw_triangle);
        pushButton_rectangular->setObjectName(QString::fromUtf8("pushButton_rectangular"));
        pushButton_rectangular->setGeometry(QRect(305, 240, 130, 31));
        pushButton_rectangular->setFont(font2);
        pushButton_rectangular->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_rectangular->setCheckable(false);

        retranslateUi(Dialog_draw_triangle);

        QMetaObject::connectSlotsByName(Dialog_draw_triangle);
    } // setupUi

    void retranslateUi(QDialog *Dialog_draw_triangle)
    {
        Dialog_draw_triangle->setWindowTitle(QCoreApplication::translate("Dialog_draw_triangle", "Drawing triangle", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("Dialog_draw_triangle", "Ok", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_draw_triangle", "Enter the dimensions of the triangle to draw", nullptr));
        label_photo->setText(QString());
        label->setText(QCoreApplication::translate("Dialog_draw_triangle", "a = ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_draw_triangle", "b = ", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_draw_triangle", "c = ", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_draw_triangle", "Cancel", nullptr));
        pushButton_a_b->setText(QCoreApplication::translate("Dialog_draw_triangle", "Enter sides (a) and (b)", nullptr));
        pushButton_a_c->setText(QCoreApplication::translate("Dialog_draw_triangle", "Enter sides (a) and (c)", nullptr));
        pushButton_b_c->setText(QCoreApplication::translate("Dialog_draw_triangle", "Enter sides (b) and (c)", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("Dialog_draw_triangle", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#000000;\">Setting up drawing styles</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QString());
        pushButton_equilater->setText(QCoreApplication::translate("Dialog_draw_triangle", "Equilateral", nullptr));
        pushButton_isosceles->setText(QCoreApplication::translate("Dialog_draw_triangle", "Isosceles", nullptr));
        pushButton_rectangular->setText(QCoreApplication::translate("Dialog_draw_triangle", "Rectangular", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_draw_triangle: public Ui_Dialog_draw_triangle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DRAW_TRIANGLE_H
