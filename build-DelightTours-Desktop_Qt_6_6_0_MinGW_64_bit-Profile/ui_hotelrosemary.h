/********************************************************************************
** Form generated from reading UI file 'hotelrosemary.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELROSEMARY_H
#define UI_HOTELROSEMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelrosemary
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *bookbtn;
    QLabel *label_7;
    QDateEdit *checkout;
    QLabel *label_2;
    QDateEdit *checkin;
    QComboBox *roomno;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backbtn;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;

    void setupUi(QDialog *hotelrosemary)
    {
        if (hotelrosemary->objectName().isEmpty())
            hotelrosemary->setObjectName("hotelrosemary");
        hotelrosemary->resize(800, 600);
        hotelrosemary->setStyleSheet(QString::fromUtf8("\n"
"#hotelrosemary {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}\n"
"\n"
"#hotelrosemary::before {\n"
"    content: \"\";\n"
"    position: absolute;\n"
"    top: 0;\n"
"    left: 0;\n"
"    width: 100%;\n"
"    height: 100%;\n"
"    background-color: rgba(0, 0, 0, 0.5); /* Adjust opacity as needed */\n"
"}"));
        gridLayout_2 = new QGridLayout(hotelrosemary);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox_2 = new QGroupBox(hotelrosemary);
        groupBox_2->setObjectName("groupBox_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("#groupBox_2{\n"
"background-color :rgb(89, 170, 163);\n"
"color:green;;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));

        verticalLayout_2->addWidget(label_5);


        verticalLayout_3->addLayout(verticalLayout_2);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(hotelrosemary);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color :rgb(89, 170, 163);\n"
"color:green;\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        bookbtn = new QPushButton(groupBox);
        bookbtn->setObjectName("bookbtn");
        bookbtn->setStyleSheet(QString::fromUtf8("#bookbtn{\n"
"border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
"background-color:green;\n"
"padding:5px\n"
"}"));

        gridLayout->addWidget(bookbtn, 3, 2, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color:green"));

        gridLayout->addWidget(label_7, 2, 0, 1, 2);

        checkout = new QDateEdit(groupBox);
        checkout->setObjectName("checkout");
        checkout->setFont(font1);
        checkout->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;"));

        gridLayout->addWidget(checkout, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:green;"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        checkin = new QDateEdit(groupBox);
        checkin->setObjectName("checkin");
        checkin->setFont(font1);
        checkin->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;"));

        gridLayout->addWidget(checkin, 1, 2, 1, 1);

        roomno = new QComboBox(groupBox);
        roomno->setObjectName("roomno");
        roomno->setFont(font1);
        roomno->setStyleSheet(QString::fromUtf8("#roomno{\n"
"border-radius:10px;\n"
"border:2px solid green;\n"
"color: green;\n"
"background-color:transparent;\n"
"\n"
"}"));

        gridLayout->addWidget(roomno, 0, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:green;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(hotelrosemary);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border-image:url(:/images/images/Hotel1-1.jpeg);\n"
"}"));

        horizontalLayout->addWidget(widget);

        widget_2 = new QWidget(hotelrosemary);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"\n"
"border-image:url(:/images/images/Hotel1-2.jpeg);\n"
"}"));

        horizontalLayout->addWidget(widget_2);

        widget_3 = new QWidget(hotelrosemary);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"\n"
"border-image:url(:/images/images/Hotel1-3.jpeg);\n"
"}"));

        horizontalLayout->addWidget(widget_3);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        backbtn = new QPushButton(hotelrosemary);
        backbtn->setObjectName("backbtn");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Black")});
        font2.setPointSize(12);
        font2.setBold(true);
        backbtn->setFont(font2);
        backbtn->setStyleSheet(QString::fromUtf8("#backbtn{\n"
"border-radius: 10px;\n"
"background-color :rgb(89, 170, 163);\n"
"color: white;\n"
"border:2px solid white;\n"
"}"));

        horizontalLayout_2->addWidget(backbtn);

        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_4 = new QWidget(hotelrosemary);
        widget_4->setObjectName("widget_4");

        horizontalLayout_2->addWidget(widget_4);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_7->setBuddy(checkout);
        label_2->setBuddy(checkin);
        label->setBuddy(roomno);
#endif // QT_CONFIG(shortcut)

        retranslateUi(hotelrosemary);

        QMetaObject::connectSlotsByName(hotelrosemary);
    } // setupUi

    void retranslateUi(QDialog *hotelrosemary)
    {
        hotelrosemary->setWindowTitle(QCoreApplication::translate("hotelrosemary", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("hotelrosemary", "About Us", nullptr));
        label_5->setText(QCoreApplication::translate("hotelrosemary", " Well-maintained rooms with comfortable beds, ample storage space, and clean linens\n"
"Modern bathrooms with hot showers, clean towels, and basic toiletries\n"
"Depending on the season, ensure comfortable temperature control\n"
"Stay connected with friends and family back home\n"
"We offer comfortable accommodations at a reasonable price of PKR 12000 for one night stay.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hotelrosemary", "Want to Book a Room?", nullptr));
        bookbtn->setText(QCoreApplication::translate("hotelrosemary", "Book", nullptr));
        label_7->setText(QCoreApplication::translate("hotelrosemary", "Check-Out Date", nullptr));
        label_2->setText(QCoreApplication::translate("hotelrosemary", "Check-In Date", nullptr));
        label->setText(QCoreApplication::translate("hotelrosemary", "Room No", nullptr));
        backbtn->setText(QCoreApplication::translate("hotelrosemary", "<-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelrosemary: public Ui_hotelrosemary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELROSEMARY_H
