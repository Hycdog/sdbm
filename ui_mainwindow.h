/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "customedGraphicsView.h"
#include "modifiedTableWidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QFrame *line_9;
    QVBoxLayout *verticalLayout;
    QFrame *line_12;
    QLabel *label_date;
    QLabel *label_connection;
    QLabel *label_db;
    QLabel *label_username;
    QFrame *line;
    QTreeWidget *treeWidget;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line_3;
    QStackedWidget *stackedWidget;
    QWidget *page_selectUser;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_stuname;
    QLineEdit *lineEdit_stuname;
    QLabel *label_sno;
    QLineEdit *lineEdit_sno;
    QLabel *label_gender;
    QComboBox *comboBox_gender;
    QPushButton *pushButton_search;
    Table *tableWidget_displayUser;
    QLabel *label_title_selectUser;
    QLabel *label_querystatus;
    QWidget *page_registerUser;
    QGridLayout *gridLayout_5;
    QLabel *label_title_registerUser;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_inputRegisterUserHint_name;
    QLineEdit *lineEdit_registerUser_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_inputRegisterUserHint_sex;
    QLineEdit *lineEdit_registerUser_sex;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_inputRegisterUserHint_age;
    QLineEdit *lineEdit_registerUser_age;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_inputRegisterUserHint_height;
    QLineEdit *lineEdit_registerUser_height;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_inputRegisterUserHint_age_2;
    QLineEdit *lineEdit_registerUser_age_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_inputRegisterUserHint_weight;
    QLineEdit *lineEdit_registerUser_weight;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_inputRegisterUserHint_comment;
    QTextEdit *textEdit_comment;
    QPushButton *pushButton_register;
    QWidget *page_task;
    QGridLayout *gridLayout_2;
    QLabel *label_title_taskName;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_loadImage;
    QFrame *line_2;
    QPushButton *pushButton_cameraShot;
    customedGraphicsView *graphicsView_task;
    QWidget *page_computation;
    QGridLayout *gridLayout_3;
    QLabel *label_title_computation;
    QGraphicsView *graphicsView_comp;
    QWidget *page_reportGen;
    QGridLayout *gridLayout_6;
    QLabel *label_title_reportGen;
    QGraphicsView *graphicsView_report;
    QWidget *page_configuration;
    QGridLayout *gridLayout_7;
    QLabel *label_title_configuration;
    QGraphicsView *graphicsView_configuration;
    QFrame *line_4;
    QLabel *label_stat;
    QFrame *line_6;
    QFrame *line_8;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(926, 580);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(-1, 9, -1, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(false);
        splitter->setHandleWidth(0);
        splitter->setChildrenCollapsible(false);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetMinAndMaxSize);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_9);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout->setContentsMargins(0, -1, 5, 5);
        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_12->sizePolicy().hasHeightForWidth());
        line_12->setSizePolicy(sizePolicy);
        line_12->setMinimumSize(QSize(100, 0));
        line_12->setMaximumSize(QSize(300, 16777215));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_12);

        label_date = new QLabel(layoutWidget);
        label_date->setObjectName(QString::fromUtf8("label_date"));
        sizePolicy.setHeightForWidth(label_date->sizePolicy().hasHeightForWidth());
        label_date->setSizePolicy(sizePolicy);
        label_date->setMinimumSize(QSize(100, 0));
        label_date->setMaximumSize(QSize(300, 50));
        QFont font;
        font.setPointSize(15);
        label_date->setFont(font);
        label_date->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_date);

        label_connection = new QLabel(layoutWidget);
        label_connection->setObjectName(QString::fromUtf8("label_connection"));
        label_connection->setMaximumSize(QSize(300, 50));
        label_connection->setFont(font);
        label_connection->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_connection);

        label_db = new QLabel(layoutWidget);
        label_db->setObjectName(QString::fromUtf8("label_db"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_db->sizePolicy().hasHeightForWidth());
        label_db->setSizePolicy(sizePolicy1);
        label_db->setMinimumSize(QSize(100, 0));
        label_db->setMaximumSize(QSize(300, 16777215));
        label_db->setFont(font);
        label_db->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_db);

        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        sizePolicy1.setHeightForWidth(label_username->sizePolicy().hasHeightForWidth());
        label_username->setSizePolicy(sizePolicy1);
        label_username->setMinimumSize(QSize(100, 0));
        label_username->setMaximumSize(QSize(300, 16777215));
        label_username->setFont(font);
        label_username->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_username);

        line = new QFrame(layoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setMinimumSize(QSize(100, 0));
        line->setMaximumSize(QSize(300, 16777215));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        treeWidget = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy2);
        treeWidget->setMinimumSize(QSize(100, 0));
        treeWidget->setMaximumSize(QSize(300, 16777215));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        treeWidget->setFont(font1);
        treeWidget->header()->setVisible(false);

        verticalLayout->addWidget(treeWidget);


        horizontalLayout_5->addLayout(verticalLayout);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_2->setContentsMargins(0, 5, 0, 5);
        line_3 = new QFrame(layoutWidget1);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        stackedWidget = new QStackedWidget(layoutWidget1);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_selectUser = new QWidget();
        page_selectUser->setObjectName(QString::fromUtf8("page_selectUser"));
        gridLayout_4 = new QGridLayout(page_selectUser);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_stuname = new QLabel(page_selectUser);
        label_stuname->setObjectName(QString::fromUtf8("label_stuname"));
        label_stuname->setMaximumSize(QSize(100, 16777215));
        label_stuname->setFont(font);

        horizontalLayout->addWidget(label_stuname);

        lineEdit_stuname = new QLineEdit(page_selectUser);
        lineEdit_stuname->setObjectName(QString::fromUtf8("lineEdit_stuname"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_stuname->sizePolicy().hasHeightForWidth());
        lineEdit_stuname->setSizePolicy(sizePolicy3);
        lineEdit_stuname->setFont(font);

        horizontalLayout->addWidget(lineEdit_stuname);

        label_sno = new QLabel(page_selectUser);
        label_sno->setObjectName(QString::fromUtf8("label_sno"));
        label_sno->setMaximumSize(QSize(100, 16777215));
        label_sno->setFont(font);

        horizontalLayout->addWidget(label_sno);

        lineEdit_sno = new QLineEdit(page_selectUser);
        lineEdit_sno->setObjectName(QString::fromUtf8("lineEdit_sno"));
        sizePolicy3.setHeightForWidth(lineEdit_sno->sizePolicy().hasHeightForWidth());
        lineEdit_sno->setSizePolicy(sizePolicy3);
        lineEdit_sno->setFont(font);

        horizontalLayout->addWidget(lineEdit_sno);

        label_gender = new QLabel(page_selectUser);
        label_gender->setObjectName(QString::fromUtf8("label_gender"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_gender->sizePolicy().hasHeightForWidth());
        label_gender->setSizePolicy(sizePolicy4);
        label_gender->setMaximumSize(QSize(100, 16777215));
        label_gender->setFont(font);

        horizontalLayout->addWidget(label_gender);

        comboBox_gender = new QComboBox(page_selectUser);
        comboBox_gender->setObjectName(QString::fromUtf8("comboBox_gender"));
        sizePolicy.setHeightForWidth(comboBox_gender->sizePolicy().hasHeightForWidth());
        comboBox_gender->setSizePolicy(sizePolicy);
        comboBox_gender->setMinimumSize(QSize(100, 0));
        comboBox_gender->setMaximumSize(QSize(200, 16777215));
        comboBox_gender->setFont(font);

        horizontalLayout->addWidget(comboBox_gender);

        pushButton_search = new QPushButton(page_selectUser);
        pushButton_search->setObjectName(QString::fromUtf8("pushButton_search"));
        pushButton_search->setMinimumSize(QSize(100, 0));
        pushButton_search->setMaximumSize(QSize(200, 50));
        pushButton_search->setFont(font);

        horizontalLayout->addWidget(pushButton_search);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 1);

        tableWidget_displayUser = new Table(page_selectUser);
        tableWidget_displayUser->setObjectName(QString::fromUtf8("tableWidget_displayUser"));
        QFont font2;
        font2.setPointSize(12);
        tableWidget_displayUser->setFont(font2);

        gridLayout_4->addWidget(tableWidget_displayUser, 3, 0, 1, 1);

        label_title_selectUser = new QLabel(page_selectUser);
        label_title_selectUser->setObjectName(QString::fromUtf8("label_title_selectUser"));
        QFont font3;
        font3.setPointSize(18);
        label_title_selectUser->setFont(font3);
        label_title_selectUser->setAlignment(Qt::AlignCenter);
        label_title_selectUser->setMargin(5);

        gridLayout_4->addWidget(label_title_selectUser, 0, 0, 1, 1);

        label_querystatus = new QLabel(page_selectUser);
        label_querystatus->setObjectName(QString::fromUtf8("label_querystatus"));

        gridLayout_4->addWidget(label_querystatus, 2, 0, 1, 1);

        stackedWidget->addWidget(page_selectUser);
        page_registerUser = new QWidget();
        page_registerUser->setObjectName(QString::fromUtf8("page_registerUser"));
        gridLayout_5 = new QGridLayout(page_registerUser);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_title_registerUser = new QLabel(page_registerUser);
        label_title_registerUser->setObjectName(QString::fromUtf8("label_title_registerUser"));
        label_title_registerUser->setFont(font3);
        label_title_registerUser->setAlignment(Qt::AlignCenter);
        label_title_registerUser->setMargin(5);

        gridLayout_5->addWidget(label_title_registerUser, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_inputRegisterUserHint_name = new QLabel(page_registerUser);
        label_inputRegisterUserHint_name->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_name"));
        label_inputRegisterUserHint_name->setFont(font);

        horizontalLayout_3->addWidget(label_inputRegisterUserHint_name);

        lineEdit_registerUser_name = new QLineEdit(page_registerUser);
        lineEdit_registerUser_name->setObjectName(QString::fromUtf8("lineEdit_registerUser_name"));
        lineEdit_registerUser_name->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_registerUser_name);


        gridLayout_5->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_inputRegisterUserHint_sex = new QLabel(page_registerUser);
        label_inputRegisterUserHint_sex->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_sex"));
        label_inputRegisterUserHint_sex->setFont(font);

        horizontalLayout_4->addWidget(label_inputRegisterUserHint_sex);

        lineEdit_registerUser_sex = new QLineEdit(page_registerUser);
        lineEdit_registerUser_sex->setObjectName(QString::fromUtf8("lineEdit_registerUser_sex"));
        lineEdit_registerUser_sex->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_registerUser_sex);


        gridLayout_5->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_inputRegisterUserHint_age = new QLabel(page_registerUser);
        label_inputRegisterUserHint_age->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_age"));
        label_inputRegisterUserHint_age->setFont(font);

        horizontalLayout_6->addWidget(label_inputRegisterUserHint_age);

        lineEdit_registerUser_age = new QLineEdit(page_registerUser);
        lineEdit_registerUser_age->setObjectName(QString::fromUtf8("lineEdit_registerUser_age"));
        lineEdit_registerUser_age->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_registerUser_age);


        gridLayout_5->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_inputRegisterUserHint_height = new QLabel(page_registerUser);
        label_inputRegisterUserHint_height->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_height"));
        label_inputRegisterUserHint_height->setFont(font);

        horizontalLayout_7->addWidget(label_inputRegisterUserHint_height);

        lineEdit_registerUser_height = new QLineEdit(page_registerUser);
        lineEdit_registerUser_height->setObjectName(QString::fromUtf8("lineEdit_registerUser_height"));
        lineEdit_registerUser_height->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_registerUser_height);


        gridLayout_5->addLayout(horizontalLayout_7, 4, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_inputRegisterUserHint_age_2 = new QLabel(page_registerUser);
        label_inputRegisterUserHint_age_2->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_age_2"));
        label_inputRegisterUserHint_age_2->setFont(font);

        horizontalLayout_11->addWidget(label_inputRegisterUserHint_age_2);

        lineEdit_registerUser_age_2 = new QLineEdit(page_registerUser);
        lineEdit_registerUser_age_2->setObjectName(QString::fromUtf8("lineEdit_registerUser_age_2"));
        lineEdit_registerUser_age_2->setFont(font);

        horizontalLayout_11->addWidget(lineEdit_registerUser_age_2);


        gridLayout_5->addLayout(horizontalLayout_11, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_inputRegisterUserHint_weight = new QLabel(page_registerUser);
        label_inputRegisterUserHint_weight->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_weight"));
        label_inputRegisterUserHint_weight->setFont(font);

        horizontalLayout_8->addWidget(label_inputRegisterUserHint_weight);

        lineEdit_registerUser_weight = new QLineEdit(page_registerUser);
        lineEdit_registerUser_weight->setObjectName(QString::fromUtf8("lineEdit_registerUser_weight"));
        lineEdit_registerUser_weight->setFont(font);

        horizontalLayout_8->addWidget(lineEdit_registerUser_weight);


        gridLayout_5->addLayout(horizontalLayout_8, 6, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_inputRegisterUserHint_comment = new QLabel(page_registerUser);
        label_inputRegisterUserHint_comment->setObjectName(QString::fromUtf8("label_inputRegisterUserHint_comment"));
        label_inputRegisterUserHint_comment->setFont(font);

        horizontalLayout_9->addWidget(label_inputRegisterUserHint_comment);


        gridLayout_5->addLayout(horizontalLayout_9, 7, 0, 1, 1);

        textEdit_comment = new QTextEdit(page_registerUser);
        textEdit_comment->setObjectName(QString::fromUtf8("textEdit_comment"));
        textEdit_comment->setFont(font);

        gridLayout_5->addWidget(textEdit_comment, 8, 0, 1, 1);

        pushButton_register = new QPushButton(page_registerUser);
        pushButton_register->setObjectName(QString::fromUtf8("pushButton_register"));
        pushButton_register->setMinimumSize(QSize(0, 50));
        pushButton_register->setFont(font);

        gridLayout_5->addWidget(pushButton_register, 9, 0, 1, 1);

        stackedWidget->addWidget(page_registerUser);
        page_task = new QWidget();
        page_task->setObjectName(QString::fromUtf8("page_task"));
        gridLayout_2 = new QGridLayout(page_task);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_title_taskName = new QLabel(page_task);
        label_title_taskName->setObjectName(QString::fromUtf8("label_title_taskName"));
        label_title_taskName->setFont(font3);
        label_title_taskName->setAlignment(Qt::AlignCenter);
        label_title_taskName->setMargin(5);

        gridLayout_2->addWidget(label_title_taskName, 0, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        pushButton_loadImage = new QPushButton(page_task);
        pushButton_loadImage->setObjectName(QString::fromUtf8("pushButton_loadImage"));
        pushButton_loadImage->setMinimumSize(QSize(0, 50));
        pushButton_loadImage->setFont(font);

        horizontalLayout_10->addWidget(pushButton_loadImage);

        line_2 = new QFrame(page_task);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_2);

        pushButton_cameraShot = new QPushButton(page_task);
        pushButton_cameraShot->setObjectName(QString::fromUtf8("pushButton_cameraShot"));
        pushButton_cameraShot->setMinimumSize(QSize(0, 50));
        pushButton_cameraShot->setFont(font);

        horizontalLayout_10->addWidget(pushButton_cameraShot);


        gridLayout_2->addLayout(horizontalLayout_10, 1, 0, 1, 1);

        graphicsView_task = new customedGraphicsView(page_task);
        graphicsView_task->setObjectName(QString::fromUtf8("graphicsView_task"));

        gridLayout_2->addWidget(graphicsView_task, 2, 0, 1, 1);

        stackedWidget->addWidget(page_task);
        page_computation = new QWidget();
        page_computation->setObjectName(QString::fromUtf8("page_computation"));
        gridLayout_3 = new QGridLayout(page_computation);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_title_computation = new QLabel(page_computation);
        label_title_computation->setObjectName(QString::fromUtf8("label_title_computation"));
        label_title_computation->setFont(font3);
        label_title_computation->setAlignment(Qt::AlignCenter);
        label_title_computation->setMargin(5);

        gridLayout_3->addWidget(label_title_computation, 0, 0, 1, 1);

        graphicsView_comp = new QGraphicsView(page_computation);
        graphicsView_comp->setObjectName(QString::fromUtf8("graphicsView_comp"));

        gridLayout_3->addWidget(graphicsView_comp, 1, 0, 1, 1);

        stackedWidget->addWidget(page_computation);
        page_reportGen = new QWidget();
        page_reportGen->setObjectName(QString::fromUtf8("page_reportGen"));
        gridLayout_6 = new QGridLayout(page_reportGen);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_title_reportGen = new QLabel(page_reportGen);
        label_title_reportGen->setObjectName(QString::fromUtf8("label_title_reportGen"));
        label_title_reportGen->setFont(font3);
        label_title_reportGen->setAlignment(Qt::AlignCenter);
        label_title_reportGen->setMargin(5);

        gridLayout_6->addWidget(label_title_reportGen, 0, 0, 1, 1);

        graphicsView_report = new QGraphicsView(page_reportGen);
        graphicsView_report->setObjectName(QString::fromUtf8("graphicsView_report"));

        gridLayout_6->addWidget(graphicsView_report, 1, 0, 1, 1);

        stackedWidget->addWidget(page_reportGen);
        page_configuration = new QWidget();
        page_configuration->setObjectName(QString::fromUtf8("page_configuration"));
        gridLayout_7 = new QGridLayout(page_configuration);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_title_configuration = new QLabel(page_configuration);
        label_title_configuration->setObjectName(QString::fromUtf8("label_title_configuration"));
        label_title_configuration->setFont(font3);
        label_title_configuration->setAlignment(Qt::AlignCenter);
        label_title_configuration->setMargin(5);

        gridLayout_7->addWidget(label_title_configuration, 0, 0, 1, 1);

        graphicsView_configuration = new QGraphicsView(page_configuration);
        graphicsView_configuration->setObjectName(QString::fromUtf8("graphicsView_configuration"));

        gridLayout_7->addWidget(graphicsView_configuration, 1, 0, 1, 1);

        stackedWidget->addWidget(page_configuration);

        horizontalLayout_2->addWidget(stackedWidget);

        line_4 = new QFrame(layoutWidget1);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4);

        splitter->addWidget(layoutWidget1);

        gridLayout->addWidget(splitter, 1, 0, 1, 1);

        label_stat = new QLabel(centralwidget);
        label_stat->setObjectName(QString::fromUtf8("label_stat"));
        sizePolicy3.setHeightForWidth(label_stat->sizePolicy().hasHeightForWidth());
        label_stat->setSizePolicy(sizePolicy3);
        label_stat->setMaximumSize(QSize(16777215, 20));
        label_stat->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_stat, 3, 0, 1, 1);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 0, 0, 1, 1);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_date->setText(QCoreApplication::translate("MainWindow", "YYYY/MM/DD", nullptr));
        label_connection->setText(QCoreApplication::translate("MainWindow", "\350\277\236\346\216\245\347\212\266\346\200\201", nullptr));
        label_db->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\224\250\346\210\267", nullptr));
        label_stuname->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        label_sno->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        label_gender->setText(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        pushButton_search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
        label_title_selectUser->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\345\255\246\347\224\237", nullptr));
        label_querystatus->setText(QString());
        label_title_registerUser->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214\345\255\246\347\224\237", nullptr));
        label_inputRegisterUserHint_name->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\255\246\347\224\237\345\220\215\347\247\260\357\274\232", nullptr));
        label_inputRegisterUserHint_sex->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_inputRegisterUserHint_age->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\351\231\242\357\274\232", nullptr));
        label_inputRegisterUserHint_height->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\211\213\346\234\272\345\217\267\347\240\201\357\274\232", nullptr));
        label_inputRegisterUserHint_age_2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        label_inputRegisterUserHint_weight->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\255\246\347\224\237\347\261\215\350\264\257\357\274\232", nullptr));
        label_inputRegisterUserHint_comment->setText(QCoreApplication::translate("MainWindow", "\345\244\207\346\263\250\357\274\232", nullptr));
        pushButton_register->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214\347\224\250\346\210\267", nullptr));
        label_title_taskName->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\345\244\264\345\203\217", nullptr));
        pushButton_loadImage->setText(QCoreApplication::translate("MainWindow", "\345\212\240\350\275\275\345\233\276\347\211\207", nullptr));
        pushButton_cameraShot->setText(QCoreApplication::translate("MainWindow", "\344\272\272\345\267\245\346\213\215\346\221\204", nullptr));
        label_title_computation->setText(QCoreApplication::translate("MainWindow", "Func2", nullptr));
        label_title_reportGen->setText(QCoreApplication::translate("MainWindow", "\346\212\245\345\221\212\347\224\237\346\210\220", nullptr));
        label_title_configuration->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_stat->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\265\267\345\244\247\345\255\246\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\347\263\273\347\273\237 v1.0\347\211\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
