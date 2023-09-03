/********************************************************************************
** Form generated from reading UI file 'dialog_clear_all.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CLEAR_ALL_H
#define UI_DIALOG_CLEAR_ALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Clear_all
{
public:
    QLabel *label;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *Dialog_Clear_all)
    {
        if (Dialog_Clear_all->objectName().isEmpty())
            Dialog_Clear_all->setObjectName(QString::fromUtf8("Dialog_Clear_all"));
        Dialog_Clear_all->resize(435, 162);
        Dialog_Clear_all->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label = new QLabel(Dialog_Clear_all);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 391, 71));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        pushButton_OK = new QPushButton(Dialog_Clear_all);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(50, 110, 82, 32));
        QFont font1;
        font1.setPointSize(11);
        pushButton_OK->setFont(font1);
        pushButton_OK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_Cancel = new QPushButton(Dialog_Clear_all);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(310, 110, 82, 32));
        pushButton_Cancel->setFont(font1);
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        retranslateUi(Dialog_Clear_all);

        QMetaObject::connectSlotsByName(Dialog_Clear_all);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Clear_all)
    {
        Dialog_Clear_all->setWindowTitle(QCoreApplication::translate("Dialog_Clear_all", "Removing all objects from the graphic scene", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Clear_all", "Are you sure you want to delete all the objects ?\n"
"This action cannot be undone", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("Dialog_Clear_all", "Ok", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("Dialog_Clear_all", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Clear_all: public Ui_Dialog_Clear_all {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CLEAR_ALL_H
