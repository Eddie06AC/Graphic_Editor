/********************************************************************************
** Form generated from reading UI file 'dialog_maybe_save.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MAYBE_SAVE_H
#define UI_DIALOG_MAYBE_SAVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_maybe_save
{
public:
    QLabel *label;
    QPushButton *pushButton_YES;
    QPushButton *pushButton_NO;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *Dialog_maybe_save)
    {
        if (Dialog_maybe_save->objectName().isEmpty())
            Dialog_maybe_save->setObjectName(QString::fromUtf8("Dialog_maybe_save"));
        Dialog_maybe_save->resize(420, 142);
        label = new QLabel(Dialog_maybe_save);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 391, 81));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label->setAlignment(Qt::AlignCenter);
        pushButton_YES = new QPushButton(Dialog_maybe_save);
        pushButton_YES->setObjectName(QString::fromUtf8("pushButton_YES"));
        pushButton_YES->setGeometry(QRect(45, 100, 80, 32));
        QFont font1;
        font1.setPointSize(11);
        pushButton_YES->setFont(font1);
        pushButton_YES->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_NO = new QPushButton(Dialog_maybe_save);
        pushButton_NO->setObjectName(QString::fromUtf8("pushButton_NO"));
        pushButton_NO->setGeometry(QRect(170, 100, 80, 32));
        pushButton_NO->setFont(font1);
        pushButton_NO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_cancel = new QPushButton(Dialog_maybe_save);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(295, 100, 80, 32));
        pushButton_cancel->setFont(font1);
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

        retranslateUi(Dialog_maybe_save);

        QMetaObject::connectSlotsByName(Dialog_maybe_save);
    } // setupUi

    void retranslateUi(QDialog *Dialog_maybe_save)
    {
        Dialog_maybe_save->setWindowTitle(QCoreApplication::translate("Dialog_maybe_save", "Saving file", nullptr));
        label->setText(QCoreApplication::translate("Dialog_maybe_save", "Changes have been made.\n"
"Would you like to save the file before exiting?", nullptr));
        pushButton_YES->setText(QCoreApplication::translate("Dialog_maybe_save", "Yes", nullptr));
        pushButton_NO->setText(QCoreApplication::translate("Dialog_maybe_save", "No", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Dialog_maybe_save", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_maybe_save: public Ui_Dialog_maybe_save {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MAYBE_SAVE_H
