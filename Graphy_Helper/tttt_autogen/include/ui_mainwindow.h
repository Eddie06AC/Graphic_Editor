/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_JPEG;
    QAction *actionPNG;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_show_coord;
    QLabel *label_show_fig_type;
    QLabel *label_show_width_height;
    QLabel *label_photo_pen_size;
    QLabel *label_pen_size;
    QLabel *label_show_size_figure;
    QLabel *label_sizeA1_A5;
    QLabel *label_show_size_scene;
    QPushButton *pushButton_change_size_scene;
    QLabel *label_slider_size;
    QWidget *widget;
    QGroupBox *groupBox;
    QPushButton *UP_Button;
    QPushButton *DOWN_Button;
    QPushButton *move_figure_Button;
    QPushButton *select_button;
    QGroupBox *groupBox_2;
    QLabel *label_layer_1;
    QLabel *label_layer_2;
    QLabel *label_layer_3;
    QRadioButton *radioButton_layer_1;
    QRadioButton *radioButton_layer_2;
    QRadioButton *radioButton_layer_3;
    QCheckBox *checkBox_layer_1;
    QCheckBox *checkBox_layer_2;
    QCheckBox *checkBox_layer_3;
    QGroupBox *groupBox_5;
    QComboBox *comboBox_line;
    QComboBox *comboBox_triangle;
    QComboBox *comboBox_circle;
    QComboBox *comboBox_romb;
    QComboBox *comboBox_square;
    QPushButton *pen_Button;
    QLabel *label_size;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_brown;
    QPushButton *pushButton_black;
    QPushButton *pushButton_green;
    QPushButton *pushButton_red;
    QPushButton *pushButton_dark_green;
    QPushButton *pushButton_white;
    QPushButton *pushButton_blue;
    QPushButton *pushButton_pink;
    QPushButton *pushButton_orange;
    QPushButton *pushButton_azure;
    QPushButton *pushButton_yellow;
    QPushButton *pushButton_violet;
    QPushButton *pushButton_color;
    QLabel *label_current_color;
    QPushButton *sizeButton_font;
    QPushButton *clear_Button;
    QPushButton *pushButton_prev;
    QLabel *label_color_current;
    QGroupBox *groupBox_3;
    QPushButton *pipette_button;
    QPushButton *brush_Button;
    QPushButton *add_text_Button;
    QPushButton *pushButton_pen_draw_style;
    QGroupBox *groupBox_4;
    QFontComboBox *fontComboBox;
    QLabel *label_2;
    QSpinBox *font_size;
    QLabel *label_3;
    QLabel *font_color;
    QPushButton *bold_button;
    QPushButton *italic_button;
    QPushButton *underline_button;
    QPushButton *strike_out_button;
    QPushButton *clear_layout;
    QPushButton *FILL;
    QGraphicsView *size_top;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGraphicsView *size_left;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1174, 671);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action->setFont(font);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_JPEG = new QAction(MainWindow);
        action_JPEG->setObjectName(QString::fromUtf8("action_JPEG"));
        actionPNG = new QAction(MainWindow);
        actionPNG->setObjectName(QString::fromUtf8("actionPNG"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(25, 25));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/img/coord.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_show_coord = new QLabel(centralwidget);
        label_show_coord->setObjectName(QString::fromUtf8("label_show_coord"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_show_coord->sizePolicy().hasHeightForWidth());
        label_show_coord->setSizePolicy(sizePolicy1);
        label_show_coord->setMinimumSize(QSize(0, 25));
        label_show_coord->setMaximumSize(QSize(140, 25));
        label_show_coord->setFont(font);
        label_show_coord->setStyleSheet(QString::fromUtf8("background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_show_coord->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_show_coord);

        label_show_fig_type = new QLabel(centralwidget);
        label_show_fig_type->setObjectName(QString::fromUtf8("label_show_fig_type"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_show_fig_type->sizePolicy().hasHeightForWidth());
        label_show_fig_type->setSizePolicy(sizePolicy2);
        label_show_fig_type->setMaximumSize(QSize(25, 25));
        label_show_fig_type->setStyleSheet(QString::fromUtf8("image: url(:/images/img/figures_show_rect.png);"));

        horizontalLayout->addWidget(label_show_fig_type);

        label_show_width_height = new QLabel(centralwidget);
        label_show_width_height->setObjectName(QString::fromUtf8("label_show_width_height"));
        label_show_width_height->setMaximumSize(QSize(105, 25));
        label_show_width_height->setFont(font);
        label_show_width_height->setStyleSheet(QString::fromUtf8("background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_show_width_height->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_show_width_height);

        label_photo_pen_size = new QLabel(centralwidget);
        label_photo_pen_size->setObjectName(QString::fromUtf8("label_photo_pen_size"));
        label_photo_pen_size->setMaximumSize(QSize(25, 25));
        label_photo_pen_size->setStyleSheet(QString::fromUtf8("image: url(:/images/img/pen_width.png);"));

        horizontalLayout->addWidget(label_photo_pen_size);

        label_pen_size = new QLabel(centralwidget);
        label_pen_size->setObjectName(QString::fromUtf8("label_pen_size"));
        label_pen_size->setMaximumSize(QSize(60, 25));
        label_pen_size->setFont(font);
        label_pen_size->setStyleSheet(QString::fromUtf8("background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_pen_size->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_pen_size);

        label_show_size_figure = new QLabel(centralwidget);
        label_show_size_figure->setObjectName(QString::fromUtf8("label_show_size_figure"));
        label_show_size_figure->setFont(font);

        horizontalLayout->addWidget(label_show_size_figure);

        label_sizeA1_A5 = new QLabel(centralwidget);
        label_sizeA1_A5->setObjectName(QString::fromUtf8("label_sizeA1_A5"));
        label_sizeA1_A5->setMaximumSize(QSize(25, 25));
        label_sizeA1_A5->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));

        horizontalLayout->addWidget(label_sizeA1_A5);

        label_show_size_scene = new QLabel(centralwidget);
        label_show_size_scene->setObjectName(QString::fromUtf8("label_show_size_scene"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_show_size_scene->sizePolicy().hasHeightForWidth());
        label_show_size_scene->setSizePolicy(sizePolicy3);
        label_show_size_scene->setMaximumSize(QSize(140, 25));
        label_show_size_scene->setFont(font);
        label_show_size_scene->setStyleSheet(QString::fromUtf8("background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_show_size_scene->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_show_size_scene);

        pushButton_change_size_scene = new QPushButton(centralwidget);
        pushButton_change_size_scene->setObjectName(QString::fromUtf8("pushButton_change_size_scene"));
        sizePolicy3.setHeightForWidth(pushButton_change_size_scene->sizePolicy().hasHeightForWidth());
        pushButton_change_size_scene->setSizePolicy(sizePolicy3);
        pushButton_change_size_scene->setMaximumSize(QSize(120, 25));
        pushButton_change_size_scene->setFont(font);
        pushButton_change_size_scene->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_change_size_scene);

        label_slider_size = new QLabel(centralwidget);
        label_slider_size->setObjectName(QString::fromUtf8("label_slider_size"));
        sizePolicy2.setHeightForWidth(label_slider_size->sizePolicy().hasHeightForWidth());
        label_slider_size->setSizePolicy(sizePolicy2);
        label_slider_size->setMinimumSize(QSize(90, 25));
        label_slider_size->setFont(font);
        label_slider_size->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_slider_size->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_slider_size);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 2);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(500, 140));
        widget->setMaximumSize(QSize(16777215, 140));
        QFont font1;
        font1.setPointSize(10);
        font1.setKerning(true);
        widget->setFont(font1);
        widget->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 136, 120));
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        groupBox->setMaximumSize(QSize(160, 140));
        QFont font2;
        font2.setPointSize(11);
        font2.setKerning(true);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        UP_Button = new QPushButton(groupBox);
        UP_Button->setObjectName(QString::fromUtf8("UP_Button"));
        UP_Button->setGeometry(QRect(12, 90, 50, 24));
        UP_Button->setFont(font);
        UP_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        DOWN_Button = new QPushButton(groupBox);
        DOWN_Button->setObjectName(QString::fromUtf8("DOWN_Button"));
        DOWN_Button->setGeometry(QRect(72, 90, 50, 24));
        DOWN_Button->setFont(font);
        DOWN_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        move_figure_Button = new QPushButton(groupBox);
        move_figure_Button->setObjectName(QString::fromUtf8("move_figure_Button"));
        move_figure_Button->setGeometry(QRect(12, 55, 110, 30));
        move_figure_Button->setFont(font1);
        move_figure_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        select_button = new QPushButton(groupBox);
        select_button->setObjectName(QString::fromUtf8("select_button"));
        select_button->setGeometry(QRect(22, 25, 90, 25));
        select_button->setFont(font1);
        select_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(295, 0, 80, 111));
        sizePolicy2.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy2);
        groupBox_2->setMaximumSize(QSize(130, 120));
        groupBox_2->setFont(font2);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        label_layer_1 = new QLabel(groupBox_2);
        label_layer_1->setObjectName(QString::fromUtf8("label_layer_1"));
        label_layer_1->setGeometry(QRect(10, 30, 21, 21));
        label_layer_1->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_layer_1->setAlignment(Qt::AlignCenter);
        label_layer_2 = new QLabel(groupBox_2);
        label_layer_2->setObjectName(QString::fromUtf8("label_layer_2"));
        label_layer_2->setGeometry(QRect(10, 55, 21, 21));
        label_layer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_layer_2->setAlignment(Qt::AlignCenter);
        label_layer_3 = new QLabel(groupBox_2);
        label_layer_3->setObjectName(QString::fromUtf8("label_layer_3"));
        label_layer_3->setGeometry(QRect(10, 80, 21, 21));
        label_layer_3->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_layer_3->setAlignment(Qt::AlignCenter);
        radioButton_layer_1 = new QRadioButton(groupBox_2);
        radioButton_layer_1->setObjectName(QString::fromUtf8("radioButton_layer_1"));
        radioButton_layer_1->setGeometry(QRect(38, 32, 16, 16));
        radioButton_layer_1->setChecked(true);
        radioButton_layer_2 = new QRadioButton(groupBox_2);
        radioButton_layer_2->setObjectName(QString::fromUtf8("radioButton_layer_2"));
        radioButton_layer_2->setGeometry(QRect(38, 58, 16, 16));
        radioButton_layer_3 = new QRadioButton(groupBox_2);
        radioButton_layer_3->setObjectName(QString::fromUtf8("radioButton_layer_3"));
        radioButton_layer_3->setGeometry(QRect(38, 84, 16, 16));
        checkBox_layer_1 = new QCheckBox(groupBox_2);
        checkBox_layer_1->setObjectName(QString::fromUtf8("checkBox_layer_1"));
        checkBox_layer_1->setGeometry(QRect(60, 30, 20, 20));
        QFont font3;
        font3.setPointSize(9);
        font3.setKerning(true);
        checkBox_layer_1->setFont(font3);
        checkBox_layer_1->setStyleSheet(QString::fromUtf8(""));
        checkBox_layer_1->setIconSize(QSize(35, 35));
        checkBox_layer_1->setChecked(true);
        checkBox_layer_2 = new QCheckBox(groupBox_2);
        checkBox_layer_2->setObjectName(QString::fromUtf8("checkBox_layer_2"));
        checkBox_layer_2->setGeometry(QRect(60, 56, 20, 20));
        checkBox_layer_2->setFont(font3);
        checkBox_layer_2->setStyleSheet(QString::fromUtf8(""));
        checkBox_layer_2->setIconSize(QSize(35, 35));
        checkBox_layer_2->setChecked(true);
        checkBox_layer_3 = new QCheckBox(groupBox_2);
        checkBox_layer_3->setObjectName(QString::fromUtf8("checkBox_layer_3"));
        checkBox_layer_3->setGeometry(QRect(60, 82, 20, 20));
        checkBox_layer_3->setFont(font3);
        checkBox_layer_3->setStyleSheet(QString::fromUtf8(""));
        checkBox_layer_3->setIconSize(QSize(35, 35));
        checkBox_layer_3->setChecked(true);
        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(525, 0, 151, 140));
        sizePolicy2.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy2);
        groupBox_5->setMaximumSize(QSize(500, 140));
        groupBox_5->setFont(font2);
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        groupBox_5->setFlat(false);
        comboBox_line = new QComboBox(groupBox_5);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/line_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_line->addItem(icon, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/img/line_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_line->addItem(icon1, QString());
        comboBox_line->setObjectName(QString::fromUtf8("comboBox_line"));
        comboBox_line->setGeometry(QRect(10, 20, 60, 35));
        comboBox_line->setMaximumSize(QSize(62, 35));
        comboBox_line->setFont(font);
        comboBox_line->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	image: url(:/images/img/arrow-removebg-preview-removebg-preview.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  color:black;\n"
"  min-width: 185px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: rgb(211, 211, 211);\n"
"  color:black;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"   border: 2px solid black;\n"
"}"));
        comboBox_line->setIconSize(QSize(29, 29));
        comboBox_triangle = new QComboBox(groupBox_5);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/img/triangle_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_triangle->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/img/triangle_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_triangle->addItem(icon3, QString());
        comboBox_triangle->setObjectName(QString::fromUtf8("comboBox_triangle"));
        comboBox_triangle->setGeometry(QRect(10, 60, 60, 35));
        comboBox_triangle->setMaximumSize(QSize(62, 35));
        comboBox_triangle->setFont(font);
        comboBox_triangle->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	image: url(:/images/img/arrow-removebg-preview-removebg-preview.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  color:black;\n"
"  min-width: 230px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: rgb(211, 211, 211);\n"
"  color:black;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"   border: 2px solid black;\n"
"}"));
        comboBox_triangle->setIconSize(QSize(29, 29));
        comboBox_circle = new QComboBox(groupBox_5);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/img/circle_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_circle->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/img/circle_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_circle->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/img/elipse_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_circle->addItem(icon6, QString());
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/img/elipse_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_circle->addItem(icon7, QString());
        comboBox_circle->setObjectName(QString::fromUtf8("comboBox_circle"));
        comboBox_circle->setGeometry(QRect(80, 60, 60, 35));
        comboBox_circle->setMaximumSize(QSize(62, 35));
        comboBox_circle->setFont(font);
        comboBox_circle->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	image: url(:/images/img/arrow-removebg-preview-removebg-preview.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  color:black;\n"
"  min-width: 195px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: rgb(211, 211, 211);\n"
"  color:black;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"   border: 2px solid black;\n"
"}"));
        comboBox_circle->setIconSize(QSize(29, 29));
        comboBox_romb = new QComboBox(groupBox_5);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/img/romb_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_romb->addItem(icon8, QString());
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/img/romb_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_romb->addItem(icon9, QString());
        comboBox_romb->setObjectName(QString::fromUtf8("comboBox_romb"));
        comboBox_romb->setGeometry(QRect(10, 100, 60, 35));
        comboBox_romb->setMaximumSize(QSize(62, 35));
        comboBox_romb->setFont(font);
        comboBox_romb->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px;\n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{\n"
"    border: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	image: url(:/images/img/arrow-removebg-preview-removebg-preview.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  color:black;\n"
"  min-width: 180px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: rgb(211, 211, 211);\n"
"  color:black;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"   border: 2px solid black;\n"
"}"));
        comboBox_romb->setIconSize(QSize(29, 29));
        comboBox_square = new QComboBox(groupBox_5);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/img/square_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_square->addItem(icon10, QString());
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/img/square_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_square->addItem(icon11, QString());
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/img/rect_pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_square->addItem(icon12, QString());
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/img/rect_param.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox_square->addItem(icon13, QString());
        comboBox_square->setObjectName(QString::fromUtf8("comboBox_square"));
        comboBox_square->setGeometry(QRect(80, 20, 61, 35));
        sizePolicy.setHeightForWidth(comboBox_square->sizePolicy().hasHeightForWidth());
        comboBox_square->setSizePolicy(sizePolicy);
        comboBox_square->setMaximumSize(QSize(62, 35));
        comboBox_square->setFont(font1);
        comboBox_square->setAutoFillBackground(false);
        comboBox_square->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px; \n"
"}\n"
"\n"
"QComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    right: 4px;\n"
"	image: url(:/images/img/arrow-removebg-preview-removebg-preview.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"\n"
"}\n"
"\n"
"QComboBox QAbstractItemView  {\n"
"  color:black;\n"
"  min-width: 240px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"}\n"
"\n"
"QComboBox QListView::item:hover{\n"
"  border-radius:10px;\n"
"  background-color: rgb(211, 211, 211);\n"
"  color:black;\n"
"}\n"
"QComboBox::hover\n"
"{\n"
"   border: 2px solid black;\n"
"}"));
        comboBox_square->setIconSize(QSize(29, 29));
        pen_Button = new QPushButton(groupBox_5);
        pen_Button->setObjectName(QString::fromUtf8("pen_Button"));
        pen_Button->setGeometry(QRect(90, 100, 35, 35));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pen_Button->sizePolicy().hasHeightForWidth());
        pen_Button->setSizePolicy(sizePolicy4);
        pen_Button->setStyleSheet(QString::fromUtf8("\n"
"QPushButton {\n"
"image: url(:/images/img/pen_param.png);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
"\n"
""));
        pen_Button->setIconSize(QSize(35, 35));
        label_size = new QLabel(widget);
        label_size->setObjectName(QString::fromUtf8("label_size"));
        label_size->setGeometry(QRect(728, 10, 54, 35));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Impact")});
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setKerning(true);
        label_size->setFont(font4);
        label_size->setStyleSheet(QString::fromUtf8("   background-color: rgb(211,211,211);\n"
"border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_size->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(880, 0, 231, 140));
        sizePolicy2.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy2);
        groupBox_6->setMaximumSize(QSize(250, 140));
        groupBox_6->setFont(font2);
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        groupBox_6->setAlignment(Qt::AlignCenter);
        pushButton_brown = new QPushButton(groupBox_6);
        pushButton_brown->setObjectName(QString::fromUtf8("pushButton_brown"));
        pushButton_brown->setGeometry(QRect(193, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_brown->sizePolicy().hasHeightForWidth());
        pushButton_brown->setSizePolicy(sizePolicy2);
        pushButton_brown->setMaximumSize(QSize(27, 27));
        pushButton_brown->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(150,75,0);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_black = new QPushButton(groupBox_6);
        pushButton_black->setObjectName(QString::fromUtf8("pushButton_black"));
        pushButton_black->setGeometry(QRect(193, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_black->sizePolicy().hasHeightForWidth());
        pushButton_black->setSizePolicy(sizePolicy2);
        pushButton_black->setMaximumSize(QSize(27, 27));
        pushButton_black->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: black;\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_green = new QPushButton(groupBox_6);
        pushButton_green->setObjectName(QString::fromUtf8("pushButton_green"));
        pushButton_green->setGeometry(QRect(85, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_green->sizePolicy().hasHeightForWidth());
        pushButton_green->setSizePolicy(sizePolicy2);
        pushButton_green->setMaximumSize(QSize(27, 27));
        pushButton_green->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color:rgb(68,171,0);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_red = new QPushButton(groupBox_6);
        pushButton_red->setObjectName(QString::fromUtf8("pushButton_red"));
        pushButton_red->setGeometry(QRect(13, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_red->sizePolicy().hasHeightForWidth());
        pushButton_red->setSizePolicy(sizePolicy2);
        pushButton_red->setMaximumSize(QSize(27, 27));
        pushButton_red->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: red;\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_dark_green = new QPushButton(groupBox_6);
        pushButton_dark_green->setObjectName(QString::fromUtf8("pushButton_dark_green"));
        pushButton_dark_green->setGeometry(QRect(157, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_dark_green->sizePolicy().hasHeightForWidth());
        pushButton_dark_green->setSizePolicy(sizePolicy2);
        pushButton_dark_green->setMaximumSize(QSize(27, 27));
        pushButton_dark_green->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(34,87,0);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_white = new QPushButton(groupBox_6);
        pushButton_white->setObjectName(QString::fromUtf8("pushButton_white"));
        pushButton_white->setGeometry(QRect(13, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_white->sizePolicy().hasHeightForWidth());
        pushButton_white->setSizePolicy(sizePolicy2);
        pushButton_white->setMaximumSize(QSize(27, 27));
        pushButton_white->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: white;\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_blue = new QPushButton(groupBox_6);
        pushButton_blue->setObjectName(QString::fromUtf8("pushButton_blue"));
        pushButton_blue->setGeometry(QRect(49, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_blue->sizePolicy().hasHeightForWidth());
        pushButton_blue->setSizePolicy(sizePolicy2);
        pushButton_blue->setMaximumSize(QSize(27, 27));
        pushButton_blue->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: blue;\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_pink = new QPushButton(groupBox_6);
        pushButton_pink->setObjectName(QString::fromUtf8("pushButton_pink"));
        pushButton_pink->setGeometry(QRect(121, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_pink->sizePolicy().hasHeightForWidth());
        pushButton_pink->setSizePolicy(sizePolicy2);
        pushButton_pink->setMaximumSize(QSize(27, 27));
        pushButton_pink->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(255,192,203);\n"
" border-radius: 10px;   \n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_orange = new QPushButton(groupBox_6);
        pushButton_orange->setObjectName(QString::fromUtf8("pushButton_orange"));
        pushButton_orange->setGeometry(QRect(49, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_orange->sizePolicy().hasHeightForWidth());
        pushButton_orange->setSizePolicy(sizePolicy2);
        pushButton_orange->setMaximumSize(QSize(27, 27));
        pushButton_orange->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(255,165,0);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_azure = new QPushButton(groupBox_6);
        pushButton_azure->setObjectName(QString::fromUtf8("pushButton_azure"));
        pushButton_azure->setGeometry(QRect(157, 27, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_azure->sizePolicy().hasHeightForWidth());
        pushButton_azure->setSizePolicy(sizePolicy2);
        pushButton_azure->setMaximumSize(QSize(27, 27));
        pushButton_azure->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(0,127,255);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_yellow = new QPushButton(groupBox_6);
        pushButton_yellow->setObjectName(QString::fromUtf8("pushButton_yellow"));
        pushButton_yellow->setGeometry(QRect(121, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_yellow->sizePolicy().hasHeightForWidth());
        pushButton_yellow->setSizePolicy(sizePolicy2);
        pushButton_yellow->setMaximumSize(QSize(27, 27));
        pushButton_yellow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: yellow;\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_violet = new QPushButton(groupBox_6);
        pushButton_violet->setObjectName(QString::fromUtf8("pushButton_violet"));
        pushButton_violet->setGeometry(QRect(85, 60, 27, 27));
        sizePolicy2.setHeightForWidth(pushButton_violet->sizePolicy().hasHeightForWidth());
        pushButton_violet->setSizePolicy(sizePolicy2);
        pushButton_violet->setMaximumSize(QSize(27, 27));
        pushButton_violet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
" background-color: rgb(143,0,255);\n"
" border-radius: 10px;\n"
"}\n"
"QPushButton::hover{\n"
"  border: 2px solid black;\n"
"}"));
        pushButton_color = new QPushButton(groupBox_6);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        pushButton_color->setEnabled(true);
        pushButton_color->setGeometry(QRect(178, 92, 40, 40));
        sizePolicy2.setHeightForWidth(pushButton_color->sizePolicy().hasHeightForWidth());
        pushButton_color->setSizePolicy(sizePolicy2);
        pushButton_color->setMaximumSize(QSize(40, 40));
        pushButton_color->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius: 5px;\n"
"image: url(:/images/img/color_change.png); \n"
"border-color: rgb(211, 211, 211);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
""));
        pushButton_color->setIconSize(QSize(40, 40));
        label_current_color = new QLabel(groupBox_6);
        label_current_color->setObjectName(QString::fromUtf8("label_current_color"));
        label_current_color->setGeometry(QRect(5, 100, 171, 31));
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        font5.setItalic(false);
        font5.setUnderline(false);
        label_current_color->setFont(font5);
        label_current_color->setStyleSheet(QString::fromUtf8(""));
        sizeButton_font = new QPushButton(widget);
        sizeButton_font->setObjectName(QString::fromUtf8("sizeButton_font"));
        sizeButton_font->setGeometry(QRect(715, 50, 80, 25));
        sizeButton_font->setMaximumSize(QSize(80, 25));
        sizeButton_font->setFont(font1);
        sizeButton_font->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        clear_Button = new QPushButton(widget);
        clear_Button->setObjectName(QString::fromUtf8("clear_Button"));
        clear_Button->setGeometry(QRect(720, 110, 70, 25));
        sizePolicy2.setHeightForWidth(clear_Button->sizePolicy().hasHeightForWidth());
        clear_Button->setSizePolicy(sizePolicy2);
        clear_Button->setMaximumSize(QSize(90, 25));
        clear_Button->setFont(font1);
        clear_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        pushButton_prev = new QPushButton(widget);
        pushButton_prev->setObjectName(QString::fromUtf8("pushButton_prev"));
        pushButton_prev->setGeometry(QRect(820, 70, 45, 45));
        sizePolicy2.setHeightForWidth(pushButton_prev->sizePolicy().hasHeightForWidth());
        pushButton_prev->setSizePolicy(sizePolicy2);
        pushButton_prev->setMaximumSize(QSize(45, 45));
        pushButton_prev->setStyleSheet(QString::fromUtf8(" background-color: white;\n"
" border-radius: 10px;\n"
"border: 1px solid gray;"));
        label_color_current = new QLabel(widget);
        label_color_current->setObjectName(QString::fromUtf8("label_color_current"));
        label_color_current->setGeometry(QRect(820, 10, 45, 45));
        sizePolicy2.setHeightForWidth(label_color_current->sizePolicy().hasHeightForWidth());
        label_color_current->setSizePolicy(sizePolicy2);
        label_color_current->setMaximumSize(QSize(45, 45));
        label_color_current->setStyleSheet(QString::fromUtf8(" background-color: black;\n"
" border-radius: 10px;\n"
"border: 1px solid gray;"));
        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(385, 0, 130, 121));
        sizePolicy2.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy2);
        groupBox_3->setMaximumSize(QSize(160, 160));
        groupBox_3->setFont(font2);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        pipette_button = new QPushButton(groupBox_3);
        pipette_button->setObjectName(QString::fromUtf8("pipette_button"));
        pipette_button->setGeometry(QRect(10, 57, 67, 25));
        pipette_button->setFont(font);
        pipette_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        brush_Button = new QPushButton(groupBox_3);
        brush_Button->setObjectName(QString::fromUtf8("brush_Button"));
        brush_Button->setGeometry(QRect(10, 25, 61, 25));
        brush_Button->setFont(font1);
        brush_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        add_text_Button = new QPushButton(groupBox_3);
        add_text_Button->setObjectName(QString::fromUtf8("add_text_Button"));
        add_text_Button->setGeometry(QRect(10, 90, 100, 24));
        add_text_Button->setFont(font);
        add_text_Button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        pushButton_pen_draw_style = new QPushButton(groupBox_3);
        pushButton_pen_draw_style->setObjectName(QString::fromUtf8("pushButton_pen_draw_style"));
        pushButton_pen_draw_style->setGeometry(QRect(80, 30, 41, 41));
        pushButton_pen_draw_style->setFont(font);
        pushButton_pen_draw_style->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"image: url(:/images/img/draw_circle_pen.png);\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
""));
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(145, 0, 141, 121));
        sizePolicy2.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy2);
        groupBox_4->setMaximumSize(QSize(160, 140));
        groupBox_4->setFont(font2);
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"   background-color: rgb(211,211,211);\n"
"   border-radius: 10px;\n"
"   border: 1px solid gray;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"	subcontrol-origin:padding;\n"
"	left:10px;\n"
"}"));
        fontComboBox = new QFontComboBox(groupBox_4);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));
        fontComboBox->setGeometry(QRect(10, 28, 121, 25));
        sizePolicy.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy);
        fontComboBox->setCursor(QCursor(Qt::ArrowCursor));
        fontComboBox->setStyleSheet(QString::fromUtf8("QFontComboBox {\n"
"   font-size:10.5pt;\n"
"   border: 1px solid gray;\n"
"   border-radius:10px;\n"
"   background-color: rgb(227, 227, 227);\n"
"}\n"
"QFontComboBox:on {\n"
"    border-bottom-left-radius: 0px;\n"
"    border-bottom-right-radius: 0px; \n"
"  width: 300px;\n"
"}\n"
"\n"
"QFontComboBox::drop-down \n"
"{  \n"
"  border:0px;\n"
"}\n"
"QFontComboBox::down-arrow {\n"
"    right: 4px;\n"
"  	image: url(:/images/img/Down_icon.png);\n"
"	width: 20px;\n"
"    height: 80px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"  min-width: 240px;\n"
"  min-height: 50px;\n"
"  border: 1px solid gray;\n"
"  border-top-left-radius: 0px;\n"
"  border-top-right-radius: 10px;\n"
"  border-bottom-right-radius: 10px;\n"
"  border-bottom-left-radius: 10px;\n"
"  background-color: rgb(227, 227, 227);\n"
"} \n"
"\n"
"QFontComboBox::hover {\n"
"    background-color: white;\n"
"}"));
        fontComboBox->setEditable(false);
        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 55, 61, 30));
        QFont font6;
        font6.setPointSize(11);
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8(""));
        font_size = new QSpinBox(groupBox_4);
        font_size->setObjectName(QString::fromUtf8("font_size"));
        font_size->setGeometry(QRect(40, 59, 41, 21));
        font_size->setFont(font6);
        font_size->setStyleSheet(QString::fromUtf8("QSpinBox{   \n"
"   background-color: rgb(227,227,227);\n"
"   border-radius: 5px;\n"
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
        font_size->setMinimum(1);
        font_size->setValue(18);
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 90, 41, 16));
        label_3->setFont(font6);
        font_color = new QLabel(groupBox_4);
        font_color->setObjectName(QString::fromUtf8("font_color"));
        font_color->setGeometry(QRect(50, 87, 28, 20));
        font_color->setStyleSheet(QString::fromUtf8("background-color: rgb(211,211,211);\n"
"border-radius: 5px;\n"
"border: 1px solid black;"));
        bold_button = new QPushButton(groupBox_4);
        bold_button->setObjectName(QString::fromUtf8("bold_button"));
        bold_button->setGeometry(QRect(88, 57, 22, 22));
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        bold_button->setFont(font7);
        bold_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 5px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
""));
        italic_button = new QPushButton(groupBox_4);
        italic_button->setObjectName(QString::fromUtf8("italic_button"));
        italic_button->setGeometry(QRect(113, 57, 22, 22));
        QFont font8;
        font8.setPointSize(11);
        font8.setItalic(true);
        italic_button->setFont(font8);
        italic_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 5px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"}\n"
""));
        underline_button = new QPushButton(groupBox_4);
        underline_button->setObjectName(QString::fromUtf8("underline_button"));
        underline_button->setGeometry(QRect(88, 87, 22, 22));
        QFont font9;
        font9.setPointSize(11);
        font9.setUnderline(true);
        underline_button->setFont(font9);
        underline_button->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 5px;\n"
"border: 1px solid gray;"));
        strike_out_button = new QPushButton(groupBox_4);
        strike_out_button->setObjectName(QString::fromUtf8("strike_out_button"));
        strike_out_button->setGeometry(QRect(113, 87, 22, 22));
        QFont font10;
        font10.setPointSize(11);
        font10.setStrikeOut(true);
        strike_out_button->setFont(font10);
        strike_out_button->setStyleSheet(QString::fromUtf8("background-color: rgb(227, 227, 227);\n"
"border-radius: 5px;\n"
"border: 1px solid gray;"));
        clear_layout = new QPushButton(widget);
        clear_layout->setObjectName(QString::fromUtf8("clear_layout"));
        clear_layout->setGeometry(QRect(710, 80, 90, 25));
        clear_layout->setMaximumSize(QSize(100, 25));
        clear_layout->setFont(font1);
        clear_layout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(227, 227, 227);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));
        FILL = new QPushButton(widget);
        FILL->setObjectName(QString::fromUtf8("FILL"));
        FILL->setGeometry(QRect(680, 8, 31, 131));
        FILL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(229, 212, 255);\n"
"    border-radius: 10px;\n"
"    border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    border: 2px solid black;\n"
"	font-size: 9pt;\n"
"	font-weight: bold;\n"
"}\n"
""));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        size_top = new QGraphicsView(centralwidget);
        size_top->setObjectName(QString::fromUtf8("size_top"));
        size_top->setEnabled(false);
        sizePolicy1.setHeightForWidth(size_top->sizePolicy().hasHeightForWidth());
        size_top->setSizePolicy(sizePolicy1);
        size_top->setMaximumSize(QSize(16777215, 20));
        size_top->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        size_top->setFrameShape(QFrame::StyledPanel);
        size_top->setFrameShadow(QFrame::Sunken);
        size_top->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        size_top->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        size_top->setRenderHints(QPainter::SmoothPixmapTransform);

        gridLayout->addWidget(size_top, 1, 1, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1128, 423));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 2, 1, 1, 1);

        size_left = new QGraphicsView(centralwidget);
        size_left->setObjectName(QString::fromUtf8("size_left"));
        size_left->setEnabled(false);
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(size_left->sizePolicy().hasHeightForWidth());
        size_left->setSizePolicy(sizePolicy5);
        size_left->setMaximumSize(QSize(20, 16777215));
        size_left->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        size_left->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        size_left->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        size_left->setRenderHints(QPainter::SmoothPixmapTransform);

        gridLayout->addWidget(size_left, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1174, 23));
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Graphy Helper", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271 ", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        action_JPEG->setText(QCoreApplication::translate("MainWindow", " JPEG", nullptr));
        actionPNG->setText(QCoreApplication::translate("MainWindow", "PNG", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\262\320\276\320\271\321\201\321\202\320\262\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\272\320\260 ", nullptr));
        action_9->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\202\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; font-style:italic;\">Coordinates of mouse</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QString());
        label_show_coord->setText(QCoreApplication::translate("MainWindow", "Coordinates of mouse", nullptr));
        label_show_fig_type->setText(QString());
        label_show_width_height->setText(QCoreApplication::translate("MainWindow", "width x height", nullptr));
        label_photo_pen_size->setText(QString());
        label_pen_size->setText(QCoreApplication::translate("MainWindow", "width", nullptr));
        label_show_size_figure->setText(QString());
        label_sizeA1_A5->setText(QString());
        label_show_size_scene->setText(QCoreApplication::translate("MainWindow", "width x height", nullptr));
        pushButton_change_size_scene->setText(QCoreApplication::translate("MainWindow", "Size scene", nullptr));
        label_slider_size->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Handle objects", nullptr));
        UP_Button->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        DOWN_Button->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        move_figure_Button->setText(QCoreApplication::translate("MainWindow", "Move object", nullptr));
        select_button->setText(QCoreApplication::translate("MainWindow", "Select area", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Layers", nullptr));
        label_layer_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_layer_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_layer_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        radioButton_layer_1->setText(QString());
        radioButton_layer_2->setText(QString());
        radioButton_layer_3->setText(QString());
        checkBox_layer_1->setText(QString());
        checkBox_layer_2->setText(QString());
        checkBox_layer_3->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Figures", nullptr));
        comboBox_line->setItemText(0, QCoreApplication::translate("MainWindow", " Line by mouse", nullptr));
        comboBox_line->setItemText(1, QCoreApplication::translate("MainWindow", " Line by parameters", nullptr));

        comboBox_triangle->setItemText(0, QCoreApplication::translate("MainWindow", " Triangle by mouse", nullptr));
        comboBox_triangle->setItemText(1, QCoreApplication::translate("MainWindow", " Triangle by parameters", nullptr));

        comboBox_circle->setItemText(0, QCoreApplication::translate("MainWindow", " Circle by mouse", nullptr));
        comboBox_circle->setItemText(1, QCoreApplication::translate("MainWindow", " Circle by parameters", nullptr));
        comboBox_circle->setItemText(2, QCoreApplication::translate("MainWindow", " Ellipse by mouse", nullptr));
        comboBox_circle->setItemText(3, QCoreApplication::translate("MainWindow", " Ellipse by parameters", nullptr));

        comboBox_romb->setItemText(0, QCoreApplication::translate("MainWindow", " Rhomb by mouse", nullptr));
        comboBox_romb->setItemText(1, QCoreApplication::translate("MainWindow", " Rhomb by parameters", nullptr));

        comboBox_square->setItemText(0, QCoreApplication::translate("MainWindow", " Square by mouse ", nullptr));
        comboBox_square->setItemText(1, QCoreApplication::translate("MainWindow", " Square by parameters", nullptr));
        comboBox_square->setItemText(2, QCoreApplication::translate("MainWindow", " Rectangle by mouse", nullptr));
        comboBox_square->setItemText(3, QCoreApplication::translate("MainWindow", " Rectangle by parameters", nullptr));

        pen_Button->setText(QString());
        label_size->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "Colors", nullptr));
        pushButton_brown->setText(QString());
        pushButton_black->setText(QString());
        pushButton_green->setText(QString());
        pushButton_red->setText(QString());
        pushButton_dark_green->setText(QString());
        pushButton_white->setText(QString());
        pushButton_blue->setText(QString());
        pushButton_pink->setText(QString());
        pushButton_orange->setText(QString());
        pushButton_azure->setText(QString());
        pushButton_yellow->setText(QString());
        pushButton_violet->setText(QString());
        pushButton_color->setText(QString());
        label_current_color->setText(QCoreApplication::translate("MainWindow", "Current: RGB(255,255,255)", nullptr));
        sizeButton_font->setText(QCoreApplication::translate("MainWindow", "Size brush", nullptr));
        clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
        pushButton_prev->setText(QString());
        label_color_current->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        pipette_button->setText(QCoreApplication::translate("MainWindow", "Pipette", nullptr));
        brush_Button->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        add_text_Button->setText(QCoreApplication::translate("MainWindow", "Add text", nullptr));
        pushButton_pen_draw_style->setText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Text information", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Size", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        font_color->setText(QString());
        bold_button->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        italic_button->setText(QCoreApplication::translate("MainWindow", "\342\205\240", nullptr));
        underline_button->setText(QCoreApplication::translate("MainWindow", "U", nullptr));
        strike_out_button->setText(QCoreApplication::translate("MainWindow", "S", nullptr));
        clear_layout->setText(QCoreApplication::translate("MainWindow", "Clear layout", nullptr));
        FILL->setText(QCoreApplication::translate("MainWindow", "FILL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
