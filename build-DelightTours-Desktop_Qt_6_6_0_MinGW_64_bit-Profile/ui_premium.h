/********************************************************************************
** Form generated from reading UI file 'premium.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREMIUM_H
#define UI_PREMIUM_H

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

class Ui_premium
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backbtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *cofirmbtn;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QDialog *premium)
    {
        if (premium->objectName().isEmpty())
            premium->setObjectName("premium");
        premium->resize(800, 600);
        premium->setStyleSheet(QString::fromUtf8("#premium {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(premium);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backbtn = new QPushButton(premium);
        backbtn->setObjectName("backbtn");
        backbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(backbtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cofirmbtn = new QPushButton(premium);
        cofirmbtn->setObjectName("cofirmbtn");
        cofirmbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(cofirmbtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(premium);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setLayoutDirection(Qt::LeftToRight);
        groupBox->setStyleSheet(QString::fromUtf8("color:#002244"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:#002244;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(premium);

        QMetaObject::connectSlotsByName(premium);
    } // setupUi

    void retranslateUi(QDialog *premium)
    {
        premium->setWindowTitle(QCoreApplication::translate("premium", "Dialog", nullptr));
        backbtn->setText(QCoreApplication::translate("premium", "Back", nullptr));
        cofirmbtn->setText(QCoreApplication::translate("premium", "Confirm", nullptr));
        groupBox->setTitle(QCoreApplication::translate("premium", "Features", nullptr));
        label->setText(QCoreApplication::translate("premium", "Indoor:\n"
"\n"
"Hunza Cultural Complex\n"
"Traditional Crafts Workshop\n"
"Serena Hotel \n"
"Gondola Ride \n"
"Altit Fort Escape Room\n"
"Traditional Music and Dance Performance\n"
"\n"
"Outdoor:\n"
"\n"
"Whitewater Rafting on the Indus River\n"
"Trek to Fairy Meadows\n"
"Jeep Safari to Shandur Pass with Polo Match Viewing\n"
"Rock Climbing in Passu\n"
"Sightseeing:\n"
"\n"
"Hunza Valley\n"
"Shandur Pass\n"
"Serena Hotel Gondola Ride\n"
"Altit and Duikar Forts\n"
"\n"
"\n"
"Along with this Premium  Package also consists of :\n"
"\n"
"Premium Quality Traveling Mean\n"
" Premium Quality Foods", nullptr));
    } // retranslateUi

};

namespace Ui {
    class premium: public Ui_premium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREMIUM_H
