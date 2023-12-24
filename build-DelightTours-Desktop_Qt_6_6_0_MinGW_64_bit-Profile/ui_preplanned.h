/********************************************************************************
** Form generated from reading UI file 'preplanned.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREPLANNED_H
#define UI_PREPLANNED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_preplanned
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPushButton *prembtn;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QPushButton *normalbtn;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QPushButton *ecobtn;

    void setupUi(QDialog *preplanned)
    {
        if (preplanned->objectName().isEmpty())
            preplanned->setObjectName("preplanned");
        preplanned->resize(800, 600);
        preplanned->setStyleSheet(QString::fromUtf8("#preplanned {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(preplanned);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(preplanned);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color :rgb(89, 170, 163);\n"
"color: white;\n"
"border:2px solid white;\n"
"padding:3px"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        label = new QLabel(preplanned);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QString::fromUtf8("color:green;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(preplanned);
        groupBox->setObjectName("groupBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color:green"));

        verticalLayout->addWidget(groupBox);

        prembtn = new QPushButton(preplanned);
        prembtn->setObjectName("prembtn");
        prembtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(prembtn);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(preplanned);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("color:green"));

        verticalLayout_2->addWidget(groupBox_2);

        normalbtn = new QPushButton(preplanned);
        normalbtn->setObjectName("normalbtn");
        normalbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        verticalLayout_2->addWidget(normalbtn);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_3 = new QGroupBox(preplanned);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font1);
        groupBox_3->setStyleSheet(QString::fromUtf8("color:green"));

        verticalLayout_3->addWidget(groupBox_3);

        ecobtn = new QPushButton(preplanned);
        ecobtn->setObjectName("ecobtn");
        ecobtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        verticalLayout_3->addWidget(ecobtn);


        horizontalLayout->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        retranslateUi(preplanned);

        QMetaObject::connectSlotsByName(preplanned);
    } // setupUi

    void retranslateUi(QDialog *preplanned)
    {
        preplanned->setWindowTitle(QCoreApplication::translate("preplanned", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("preplanned", "<-", nullptr));
        label->setText(QCoreApplication::translate("preplanned", "Pre-Planned Packages", nullptr));
        groupBox->setTitle(QCoreApplication::translate("preplanned", "Premium", nullptr));
        prembtn->setText(QCoreApplication::translate("preplanned", "Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("preplanned", "Normal", nullptr));
        normalbtn->setText(QCoreApplication::translate("preplanned", "Details", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("preplanned", "Economy", nullptr));
        ecobtn->setText(QCoreApplication::translate("preplanned", "Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class preplanned: public Ui_preplanned {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREPLANNED_H
