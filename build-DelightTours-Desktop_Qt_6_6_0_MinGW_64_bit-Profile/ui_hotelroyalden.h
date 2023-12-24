/********************************************************************************
** Form generated from reading UI file 'hotelroyalden.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTELROYALDEN_H
#define UI_HOTELROYALDEN_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hotelroyalden
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *backbtnroyal;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QPushButton *bookbtnroyal;
    QDateEdit *royaldate;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QDateEdit *royaldate2;
    QComboBox *royalroom;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *hotelroyalden)
    {
        if (hotelroyalden->objectName().isEmpty())
            hotelroyalden->setObjectName("hotelroyalden");
        hotelroyalden->resize(800, 600);
        hotelroyalden->setStyleSheet(QString::fromUtf8("#hotelroyalden {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(hotelroyalden);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        backbtnroyal = new QPushButton(hotelroyalden);
        backbtnroyal->setObjectName("backbtnroyal");
        QFont font;
        font.setPointSize(14);
        backbtnroyal->setFont(font);
        backbtnroyal->setStyleSheet(QString::fromUtf8("#backbtnroyal{\n"
"border-radius: 10px;\n"
"background-color :rgb(89, 170, 163);\n"
"color: white;\n"
"border:2px solid white;\n"
"}"));

        horizontalLayout->addWidget(backbtnroyal);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        widget = new QWidget(hotelroyalden);
        widget->setObjectName("widget");

        horizontalLayout->addWidget(widget);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(hotelroyalden);
        groupBox->setObjectName("groupBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("color:green;\n"
"background-color :rgb(89, 170, 163);"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_2 = new QWidget(hotelroyalden);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"\n"
"border-image:url(:/images/images/Hotel2-1.jpeg);\n"
"}"));

        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(hotelroyalden);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"\n"
"border-image:url(:/images/images/Hotel2-2.jpeg);\n"
"}"));

        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(hotelroyalden);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4{\n"
"\n"
"border-image:url(:/images/images/Hotel2-3.jpeg);\n"
"}"));

        horizontalLayout_2->addWidget(widget_4);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(hotelroyalden);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("color:green;\n"
"background-color :rgb(89, 170, 163);"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setFont(font2);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setFont(font2);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        bookbtnroyal = new QPushButton(groupBox_2);
        bookbtnroyal->setObjectName("bookbtnroyal");
        bookbtnroyal->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
"background-color:green;\n"
"padding:5px"));

        gridLayout_2->addWidget(bookbtnroyal, 3, 2, 1, 1);

        royaldate = new QDateEdit(groupBox_2);
        royaldate->setObjectName("royaldate");
        royaldate->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout_2->addWidget(royaldate, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        royaldate2 = new QDateEdit(groupBox_2);
        royaldate2->setObjectName("royaldate2");
        royaldate2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout_2->addWidget(royaldate2, 2, 1, 1, 1);

        royalroom = new QComboBox(groupBox_2);
        royalroom->setObjectName("royalroom");
        royalroom->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color: green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout_2->addWidget(royalroom, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 3, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(royaldate2);
        label_2->setBuddy(royaldate);
        label->setBuddy(royalroom);
#endif // QT_CONFIG(shortcut)

        retranslateUi(hotelroyalden);

        QMetaObject::connectSlotsByName(hotelroyalden);
    } // setupUi

    void retranslateUi(QDialog *hotelroyalden)
    {
        hotelroyalden->setWindowTitle(QCoreApplication::translate("hotelroyalden", "Dialog", nullptr));
        backbtnroyal->setText(QCoreApplication::translate("hotelroyalden", "<-", nullptr));
        groupBox->setTitle(QCoreApplication::translate("hotelroyalden", "About Us", nullptr));
        label_5->setText(QCoreApplication::translate("hotelroyalden", "Luxury mattresses, plush pillows, and high-quality linens for a restful sleep\n"
"Enjoy spaciousness and potentially breathtaking mountain views\n"
"Upscale restaurant with gourmet cuisine and impeccable service\n"
"Order meals and drinks directly to your room for ultimate convenience\n"
"We offer opportunities to connect with the local culture at a price of PKR 26000 for one night stay.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("hotelroyalden", "Want To Book A Room?", nullptr));
        label_3->setText(QCoreApplication::translate("hotelroyalden", "CheckOut Date", nullptr));
        label_2->setText(QCoreApplication::translate("hotelroyalden", "CheckIn Date", nullptr));
        label->setText(QCoreApplication::translate("hotelroyalden", "Room No", nullptr));
        bookbtnroyal->setText(QCoreApplication::translate("hotelroyalden", "Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hotelroyalden: public Ui_hotelroyalden {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTELROYALDEN_H
