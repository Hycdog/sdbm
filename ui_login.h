/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_hello;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_hostname;
    QLineEdit *lineEdit_hostname;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_port;
    QLineEdit *lineEdit_port;
    QSpacerItem *horizontalSpacer_14;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_dbname;
    QLineEdit *lineEdit_dbname;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButton_login;
    QPushButton *pushButton_reset;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_loginDisplay;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(984, 718);
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 70, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label_hello = new QLabel(Login);
        label_hello->setObjectName(QString::fromUtf8("label_hello"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_hello->sizePolicy().hasHeightForWidth());
        label_hello->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("SimSun-ExtB"));
        font.setPointSize(40);
        font.setBold(true);
        font.setWeight(75);
        label_hello->setFont(font);
        label_hello->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_hello);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_11 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_11);

        label_hostname = new QLabel(Login);
        label_hostname->setObjectName(QString::fromUtf8("label_hostname"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_hostname->sizePolicy().hasHeightForWidth());
        label_hostname->setSizePolicy(sizePolicy1);
        label_hostname->setMinimumSize(QSize(150, 0));
        label_hostname->setMaximumSize(QSize(300, 50));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_hostname->setFont(font1);
        label_hostname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_hostname);

        lineEdit_hostname = new QLineEdit(Login);
        lineEdit_hostname->setObjectName(QString::fromUtf8("lineEdit_hostname"));
        lineEdit_hostname->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setPointSize(15);
        lineEdit_hostname->setFont(font2);

        horizontalLayout_5->addWidget(lineEdit_hostname);

        horizontalSpacer_12 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_12);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_13 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_13);

        label_port = new QLabel(Login);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        sizePolicy1.setHeightForWidth(label_port->sizePolicy().hasHeightForWidth());
        label_port->setSizePolicy(sizePolicy1);
        label_port->setMinimumSize(QSize(150, 0));
        label_port->setMaximumSize(QSize(300, 50));
        label_port->setFont(font1);
        label_port->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_port);

        lineEdit_port = new QLineEdit(Login);
        lineEdit_port->setObjectName(QString::fromUtf8("lineEdit_port"));
        lineEdit_port->setMaximumSize(QSize(16777215, 50));
        lineEdit_port->setFont(font2);

        horizontalLayout_6->addWidget(lineEdit_port);

        horizontalSpacer_14 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        label_dbname = new QLabel(Login);
        label_dbname->setObjectName(QString::fromUtf8("label_dbname"));
        sizePolicy1.setHeightForWidth(label_dbname->sizePolicy().hasHeightForWidth());
        label_dbname->setSizePolicy(sizePolicy1);
        label_dbname->setMinimumSize(QSize(150, 0));
        label_dbname->setMaximumSize(QSize(300, 50));
        label_dbname->setFont(font1);
        label_dbname->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_dbname);

        lineEdit_dbname = new QLineEdit(Login);
        lineEdit_dbname->setObjectName(QString::fromUtf8("lineEdit_dbname"));
        lineEdit_dbname->setMaximumSize(QSize(16777215, 50));
        lineEdit_dbname->setFont(font2);

        horizontalLayout_4->addWidget(lineEdit_dbname);

        horizontalSpacer_10 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_username = new QLabel(Login);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        sizePolicy1.setHeightForWidth(label_username->sizePolicy().hasHeightForWidth());
        label_username->setSizePolicy(sizePolicy1);
        label_username->setMinimumSize(QSize(150, 0));
        label_username->setMaximumSize(QSize(300, 50));
        label_username->setFont(font1);
        label_username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_username);

        lineEdit_username = new QLineEdit(Login);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setMaximumSize(QSize(16777215, 50));
        lineEdit_username->setFont(font2);

        horizontalLayout->addWidget(lineEdit_username);

        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_password = new QLabel(Login);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        sizePolicy1.setHeightForWidth(label_password->sizePolicy().hasHeightForWidth());
        label_password->setSizePolicy(sizePolicy1);
        label_password->setMinimumSize(QSize(150, 0));
        label_password->setMaximumSize(QSize(300, 50));
        label_password->setFont(font1);
        label_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_password);

        lineEdit_password = new QLineEdit(Login);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setPointSize(12);
        lineEdit_password->setFont(font3);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_password);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButton_login = new QPushButton(Login);
        pushButton_login->setObjectName(QString::fromUtf8("pushButton_login"));
        sizePolicy1.setHeightForWidth(pushButton_login->sizePolicy().hasHeightForWidth());
        pushButton_login->setSizePolicy(sizePolicy1);
        pushButton_login->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setPointSize(20);
        pushButton_login->setFont(font4);

        horizontalLayout_3->addWidget(pushButton_login);

        pushButton_reset = new QPushButton(Login);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));
        sizePolicy1.setHeightForWidth(pushButton_reset->sizePolicy().hasHeightForWidth());
        pushButton_reset->setSizePolicy(sizePolicy1);
        pushButton_reset->setMinimumSize(QSize(0, 0));
        pushButton_reset->setMaximumSize(QSize(16777215, 50));
        pushButton_reset->setFont(font4);

        horizontalLayout_3->addWidget(pushButton_reset);

        horizontalSpacer_8 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 1, 1, 3, 1);

        horizontalSpacer_2 = new QSpacerItem(58, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        label_loginDisplay = new QLabel(Login);
        label_loginDisplay->setObjectName(QString::fromUtf8("label_loginDisplay"));
        label_loginDisplay->setMaximumSize(QSize(16777215, 50));
        label_loginDisplay->setFont(font4);
        label_loginDisplay->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_loginDisplay, 3, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 175, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        label_hello->setText(QCoreApplication::translate("Login", "\346\254\242\350\277\216\350\256\277\351\227\256\345\255\246\347\224\237\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_hostname->setText(QCoreApplication::translate("Login", "\344\270\273\346\234\272\345\220\215\357\274\232", nullptr));
        label_port->setText(QCoreApplication::translate("Login", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_dbname->setText(QCoreApplication::translate("Login", "\346\225\260\346\215\256\345\272\223\345\220\215\357\274\232", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "\346\225\260\346\215\256\345\272\223\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "\346\225\260\346\215\256\345\272\223\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("Login", "\351\207\215\347\275\256", nullptr));
        label_loginDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
