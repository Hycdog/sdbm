/********************************************************************************
** Form generated from reading UI file 'ui_popup_noicon.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_POPUP_NOICON_H
#define UI_UI_POPUP_NOICON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Dialog_popup
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_text;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_Y;
    QFrame *line;
    QPushButton *pushButton_N;

    void setupUi(QDialog *Dialog_popup)
    {
        if (Dialog_popup->objectName().isEmpty())
            Dialog_popup->setObjectName(QString::fromUtf8("Dialog_popup"));
        Dialog_popup->resize(249, 186);
        gridLayout = new QGridLayout(Dialog_popup);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_text = new QLabel(Dialog_popup);
        label_text->setObjectName(QString::fromUtf8("label_text"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_text->sizePolicy().hasHeightForWidth());
        label_text->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(15);
        font.setBold(false);
        font.setWeight(50);
        label_text->setFont(font);
        label_text->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_text);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        pushButton_Y = new QPushButton(Dialog_popup);
        pushButton_Y->setObjectName(QString::fromUtf8("pushButton_Y"));
        QFont font1;
        font1.setPointSize(12);
        pushButton_Y->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_Y);

        line = new QFrame(Dialog_popup);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        pushButton_N = new QPushButton(Dialog_popup);
        pushButton_N->setObjectName(QString::fromUtf8("pushButton_N"));
        pushButton_N->setFont(font1);

        horizontalLayout_2->addWidget(pushButton_N);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(Dialog_popup);

        QMetaObject::connectSlotsByName(Dialog_popup);
    } // setupUi

    void retranslateUi(QDialog *Dialog_popup)
    {
        Dialog_popup->setWindowTitle(QCoreApplication::translate("Dialog_popup", "Dialog", nullptr));
        label_text->setText(QCoreApplication::translate("Dialog_popup", "?", nullptr));
        pushButton_Y->setText(QCoreApplication::translate("Dialog_popup", "\347\241\256\350\256\244", nullptr));
        pushButton_N->setText(QCoreApplication::translate("Dialog_popup", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_popup: public Ui_Dialog_popup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_POPUP_NOICON_H
