/********************************************************************************
** Form generated from reading UI file 'hotelchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELCHOICE_H
#define UI_HOTELCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelchoice
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QPushButton *hotel1;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QPushButton *hotel2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_3;

    void setupUi(QDialog *hotelchoice)
    {
        if (hotelchoice->objectName().isEmpty())
            hotelchoice->setObjectName("hotelchoice");
        hotelchoice->resize(800, 600);
        hotelchoice->setStyleSheet(QString::fromUtf8("#hotelchoice{\n"
"border-image:url(:/images/images/background.PNG);\n"
"}"));
        layoutWidget = new QWidget(hotelchoice);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 240, 241, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"\n"
"border-image:url(:/images/images/Hotel1.jpeg);\n"
"border-radius: 10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"font-weight:bolder;\n"
"\n"
"}"));

        verticalLayout->addWidget(groupBox);

        hotel1 = new QPushButton(layoutWidget);
        hotel1->setObjectName("hotel1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        hotel1->setFont(font1);
        hotel1->setStyleSheet(QString::fromUtf8("#hotel1{\n"
"border-radius:10px;\n"
"border:2px solid green;\n"
"padding: 10px;\n"
"background-color :white;\n"
"color:green;\n"
"\n"
"}"));

        verticalLayout->addWidget(hotel1);

        layoutWidget1 = new QWidget(hotelchoice);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(280, 240, 251, 271));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"border-image:url(:/images/images/Hotel2.jpeg);\n"
"border-radius: 10px;\n"
"border:2px solid white;\n"
"color:green;}"));

        verticalLayout_2->addWidget(groupBox_2);

        hotel2 = new QPushButton(layoutWidget1);
        hotel2->setObjectName("hotel2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(16);
        font2.setBold(true);
        hotel2->setFont(font2);
        hotel2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding: 10px;\n"
"background-color :white;\n"
"color: green;\n"
"border:2px solid green;\n"
""));

        verticalLayout_2->addWidget(hotel2);

        layoutWidget2 = new QWidget(hotelchoice);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(540, 240, 241, 271));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(layoutWidget2);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setFont(font);
        groupBox_3->setStyleSheet(QString::fromUtf8("#groupBox_3{\n"
"border-image:url(:/images/images/Hotel3.jpeg);\n"
"border-radius: 10px;\n"
"border:2px solid white;\n"
"color:green;}"));

        verticalLayout_3->addWidget(groupBox_3);

        pushButton_3 = new QPushButton(layoutWidget2);
        pushButton_3->setObjectName("pushButton_3");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(16);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding: 10px;\n"
"background-color :white;\n"
"color: green;\n"
"border:2px solid green;\n"
""));

        verticalLayout_3->addWidget(pushButton_3);


        retranslateUi(hotelchoice);

        QMetaObject::connectSlotsByName(hotelchoice);
    } // setupUi

    void retranslateUi(QDialog *hotelchoice)
    {
        hotelchoice->setWindowTitle(QCoreApplication::translate("hotelchoice", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hotelchoice", "Hotel Rosemary", nullptr));
        hotel1->setText(QCoreApplication::translate("hotelchoice", "Details", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("hotelchoice", "Royal Den", nullptr));
        hotel2->setText(QCoreApplication::translate("hotelchoice", "Details", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("hotelchoice", "Hotel Platium", nullptr));
        pushButton_3->setText(QCoreApplication::translate("hotelchoice", "Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelchoice: public Ui_hotelchoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELCHOICE_H
