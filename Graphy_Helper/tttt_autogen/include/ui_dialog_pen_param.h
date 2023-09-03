/********************************************************************************
** Form generated from reading UI file 'dialog_pen_param.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PEN_PARAM_H
#define UI_DIALOG_PEN_PARAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog_pen_param
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_style_pen;
    QLabel *label_3;
    QSpinBox *spinBox_width_pen;
    QComboBox *comboBox_style_ending;
    QLabel *label_4;
    QComboBox *comboBox_style_connection;
    QLabel *label_5;
    QLabel *label_photo_Style;
    QLabel *label_photo_Join;
    QLabel *label_photo_Cap;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Dialog_pen_param)
    {
        if (Dialog_pen_param->objectName().isEmpty())
            Dialog_pen_param->setObjectName(QString::fromUtf8("Dialog_pen_param"));
        Dialog_pen_param->resize(405, 340);
        Dialog_pen_param->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
""));
        label = new QLabel(Dialog_pen_param);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 91, 22));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Dialog_pen_param);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(89, 10, 191, 31));
        QFont font1;
        font1.setPointSize(13);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_2->setAlignment(Qt::AlignCenter);
        comboBox_style_pen = new QComboBox(Dialog_pen_param);
        comboBox_style_pen->addItem(QString());
        comboBox_style_pen->addItem(QString());
        comboBox_style_pen->addItem(QString());
        comboBox_style_pen->addItem(QString());
        comboBox_style_pen->addItem(QString());
        comboBox_style_pen->setObjectName(QString::fromUtf8("comboBox_style_pen"));
        comboBox_style_pen->setGeometry(QRect(115, 67, 141, 31));
        comboBox_style_pen->setFont(font);
        comboBox_style_pen->setStyleSheet(QString::fromUtf8("QComboBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	  	image: url(:/images/img/Down_icon.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: white;\n"
"  color: black;\n"
"}"));
        label_3 = new QLabel(Dialog_pen_param);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 107, 101, 22));
        label_3->setFont(font);
        spinBox_width_pen = new QSpinBox(Dialog_pen_param);
        spinBox_width_pen->setObjectName(QString::fromUtf8("spinBox_width_pen"));
        spinBox_width_pen->setGeometry(QRect(120, 103, 51, 31));
        spinBox_width_pen->setFont(font);
        spinBox_width_pen->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
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
        spinBox_width_pen->setMinimum(1);
        comboBox_style_ending = new QComboBox(Dialog_pen_param);
        comboBox_style_ending->addItem(QString());
        comboBox_style_ending->addItem(QString());
        comboBox_style_ending->addItem(QString());
        comboBox_style_ending->setObjectName(QString::fromUtf8("comboBox_style_ending"));
        comboBox_style_ending->setGeometry(QRect(20, 170, 111, 31));
        comboBox_style_ending->setFont(font);
        comboBox_style_ending->setStyleSheet(QString::fromUtf8("QComboBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	  	image: url(:/images/img/Down_icon.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: white;\n"
"  color: black;\n"
"}"));
        label_4 = new QLabel(Dialog_pen_param);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 145, 181, 22));
        label_4->setFont(font);
        comboBox_style_connection = new QComboBox(Dialog_pen_param);
        comboBox_style_connection->addItem(QString());
        comboBox_style_connection->addItem(QString());
        comboBox_style_connection->addItem(QString());
        comboBox_style_connection->setObjectName(QString::fromUtf8("comboBox_style_connection"));
        comboBox_style_connection->setGeometry(QRect(20, 245, 101, 31));
        comboBox_style_connection->setFont(font);
        comboBox_style_connection->setStyleSheet(QString::fromUtf8("QComboBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	  	image: url(:/images/img/Down_icon.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: white;\n"
"  color: black;\n"
"}"));
        label_5 = new QLabel(Dialog_pen_param);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 201, 22));
        label_5->setFont(font);
        label_photo_Style = new QLabel(Dialog_pen_param);
        label_photo_Style->setObjectName(QString::fromUtf8("label_photo_Style"));
        label_photo_Style->setGeometry(QRect(270, 50, 111, 81));
        QFont font2;
        font2.setPointSize(11);
        label_photo_Style->setFont(font2);
        label_photo_Style->setStyleSheet(QString::fromUtf8("image: url(:/images/img/qpen-solid.png);"));
        label_photo_Join = new QLabel(Dialog_pen_param);
        label_photo_Join->setObjectName(QString::fromUtf8("label_photo_Join"));
        label_photo_Join->setGeometry(QRect(230, 180, 61, 111));
        label_photo_Join->setStyleSheet(QString::fromUtf8("image: url(:/images/img/qpen-bevel.png);"));
        label_photo_Cap = new QLabel(Dialog_pen_param);
        label_photo_Cap->setObjectName(QString::fromUtf8("label_photo_Cap"));
        label_photo_Cap->setGeometry(QRect(280, 130, 101, 81));
        label_photo_Cap->setStyleSheet(QString::fromUtf8("image: url(:/images/img/qpen-square.png);"));
        pushButton = new QPushButton(Dialog_pen_param);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 292, 82, 31));
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
        pushButton_2 = new QPushButton(Dialog_pen_param);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 292, 82, 31));
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
        label_6 = new QLabel(Dialog_pen_param);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(133, 147, 18, 18));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/images/img/toolTip.png);"));
        label_7 = new QLabel(Dialog_pen_param);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(185, 223, 18, 18));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/images/img/toolTip.png);"));

        retranslateUi(Dialog_pen_param);

        QMetaObject::connectSlotsByName(Dialog_pen_param);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pen_param)
    {
        Dialog_pen_param->setWindowTitle(QCoreApplication::translate("Dialog_pen_param", "Drawing options", nullptr));
        label->setText(QCoreApplication::translate("Dialog_pen_param", "Brush Style", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_pen_param", "Drawing Parameters", nullptr));
        comboBox_style_pen->setItemText(0, QCoreApplication::translate("Dialog_pen_param", "SolidLine", nullptr));
        comboBox_style_pen->setItemText(1, QCoreApplication::translate("Dialog_pen_param", "DashLine", nullptr));
        comboBox_style_pen->setItemText(2, QCoreApplication::translate("Dialog_pen_param", "DotLine", nullptr));
        comboBox_style_pen->setItemText(3, QCoreApplication::translate("Dialog_pen_param", "DashDotLine", nullptr));
        comboBox_style_pen->setItemText(4, QCoreApplication::translate("Dialog_pen_param", "DashDotDotLine", nullptr));

        label_3->setText(QCoreApplication::translate("Dialog_pen_param", "Brush Width", nullptr));
        comboBox_style_ending->setItemText(0, QCoreApplication::translate("Dialog_pen_param", "SquareCap", nullptr));
        comboBox_style_ending->setItemText(1, QCoreApplication::translate("Dialog_pen_param", "FlatCap", nullptr));
        comboBox_style_ending->setItemText(2, QCoreApplication::translate("Dialog_pen_param", "RoundCap", nullptr));

#if QT_CONFIG(whatsthis)
        label_4->setWhatsThis(QCoreApplication::translate("Dialog_pen_param", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("Dialog_pen_param", "Line End Styles", nullptr));
        comboBox_style_connection->setItemText(0, QCoreApplication::translate("Dialog_pen_param", "BevelJoin", nullptr));
        comboBox_style_connection->setItemText(1, QCoreApplication::translate("Dialog_pen_param", "MiterJoin", nullptr));
        comboBox_style_connection->setItemText(2, QCoreApplication::translate("Dialog_pen_param", "RoundJoin", nullptr));

        label_5->setText(QCoreApplication::translate("Dialog_pen_param", "Line Connection Styles", nullptr));
        label_photo_Style->setText(QString());
        label_photo_Join->setText(QString());
        label_photo_Cap->setText(QString());
        pushButton->setText(QCoreApplication::translate("Dialog_pen_param", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_pen_param", "Cancel", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("Dialog_pen_param", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; color:#000000;\">The </span><span style=\" font-family:'Verdana'; font-weight:700; font-style:italic; color:#000000;\">SquareCap</span><span style=\" font-family:'Verdana'; color:#000000;\"> style defines a square ending and closes the endpoint of the other line by half the width.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; colo"
                        "r:#000000;\">The </span><span style=\" font-family:'Verdana'; font-weight:700; font-style:italic; color:#000000;\">FlatCap</span><span style=\" font-family:'Verdana'; color:#000000;\"> style defines a square ending and does not cover the end point of another line.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; color:#000000;\">A </span><span style=\" font-family:'Verdana'; font-weight:700; font-style:italic; color:#000000;\">RoundCap</span><span style=\" font-family:'Verdana'; color:#000000;\"> defines a rounded ending.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QString());
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("Dialog_pen_param", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\">The </span><span style=\" font-family:'Verdana'; font-size:12px; font-weight:700; font-style:italic; color:#000000;\">BevelJoin</span><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\"> style defines that the lines will connect directly.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'V"
                        "erdana'; font-size:12px; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\">The </span><span style=\" font-family:'Verdana'; font-size:12px; font-weight:700; font-style:italic; color:#000000;\">MiterJoin</span><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\"> style extends the lines to intersect at an angle. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Verdana'; font-size:12px; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\">And the </span><span style=\" font-family:'Verdana'; font-size:12px; font-weight:700; font-style:"
                        "italic; color:#000000;\">RoundJoin</span><span style=\" font-family:'Verdana'; font-size:12px; color:#000000;\"> style connects the lines with an arc inscribed in the angle between the lines.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_pen_param: public Ui_Dialog_pen_param {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PEN_PARAM_H
