/********************************************************************************
** Form generated from reading UI file 'economy.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECONOMY_H
#define UI_ECONOMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_economy
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *backecobtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *conecobtn;

    void setupUi(QDialog *economy)
    {
        if (economy->objectName().isEmpty())
            economy->setObjectName("economy");
        economy->resize(800, 600);
        economy->setStyleSheet(QString::fromUtf8("#economy {\n"
"   border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout_2 = new QGridLayout(economy);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(economy);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color:#002244"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        widget = new QWidget(economy);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        backecobtn = new QPushButton(widget);
        backecobtn->setObjectName("backecobtn");
        backecobtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(backecobtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        conecobtn = new QPushButton(widget);
        conecobtn->setObjectName("conecobtn");
        conecobtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        horizontalLayout->addWidget(conecobtn);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(economy);

        QMetaObject::connectSlotsByName(economy);
    } // setupUi

    void retranslateUi(QDialog *economy)
    {
        economy->setWindowTitle(QCoreApplication::translate("economy", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("economy", "Features", nullptr));
        label_2->setText(QCoreApplication::translate("economy", "Indoor:\n"
"\n"
"Traditional Music and Dance Performance\n"
"Hunza Food Cooking Class\n"
"Shigar Polo Grounds\n"
"\n"
"Outdoor:\n"
"\n"
"Shangri-La Lake Kayaking\n"
"Karakoram Highway Jeep Safari\n"
"Sightseeing:\n"
"\n"
"Hunza Valley\n"
"Shangri-La Lake\n"
"Altit and Duikar Forts\n"
"\n"
"Econonomy Package willl contain a standard level Van as transport Vehicle", nullptr));
        backecobtn->setText(QCoreApplication::translate("economy", "Back", nullptr));
        conecobtn->setText(QCoreApplication::translate("economy", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class economy: public Ui_economy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECONOMY_H
