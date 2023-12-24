/********************************************************************************
** Form generated from reading UI file 'guildtesero.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUILDTESERO_H
#define UI_GUILDTESERO_H

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

class Ui_guildtesero
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *gtback;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QDateEdit *gtdate;
    QLabel *label_2;
    QLabel *label_3;
    QDateEdit *gtdate2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *gtbook;
    QComboBox *gtrooms;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QWidget *widget_2;
    QWidget *widget_3;

    void setupUi(QDialog *guildtesero)
    {
        if (guildtesero->objectName().isEmpty())
            guildtesero->setObjectName("guildtesero");
        guildtesero->resize(800, 600);
        guildtesero->setStyleSheet(QString::fromUtf8("#guildtesero {\n"
"    border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout_2 = new QGridLayout(guildtesero);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gtback = new QPushButton(guildtesero);
        gtback->setObjectName("gtback");
        gtback->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background-color :rgb(89, 170, 163);\n"
"color: white;\n"
"border:2px solid white;"));

        horizontalLayout_2->addWidget(gtback);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(guildtesero);
        groupBox_2->setObjectName("groupBox_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color :rgb(89, 170, 163);\n"
"color:green;\n"
""));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color:white;"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(guildtesero);
        groupBox->setObjectName("groupBox");
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("background-color :rgb(89, 170, 163);\n"
"color:green;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gtdate = new QDateEdit(groupBox);
        gtdate->setObjectName("gtdate");
        gtdate->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout->addWidget(gtdate, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 2, 0, 1, 2);

        gtdate2 = new QDateEdit(groupBox);
        gtdate2->setObjectName("gtdate2");
        gtdate2->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color:green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout->addWidget(gtdate2, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gtbook = new QPushButton(groupBox);
        gtbook->setObjectName("gtbook");
        gtbook->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid white;\n"
"color:white;\n"
"background-color:green;\n"
"padding:5px"));

        horizontalLayout->addWidget(gtbook);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);

        gtrooms = new QComboBox(groupBox);
        gtrooms->setObjectName("gtrooms");
        gtrooms->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"border:2px solid green;\n"
"color: green;\n"
"background-color:transparent;\n"
"padding:5px;"));

        gridLayout->addWidget(gtrooms, 0, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 3, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        widget = new QWidget(guildtesero);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"\n"
"border-image:url(:/images/images/Hotel3-1.jpeg);\n"
"}"));

        horizontalLayout_3->addWidget(widget);

        widget_2 = new QWidget(guildtesero);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2{\n"
"\n"
"border-image:url(:/images/images/Hotel3-2.jpeg);\n"
"}"));

        horizontalLayout_3->addWidget(widget_2);

        widget_3 = new QWidget(guildtesero);
        widget_3->setObjectName("widget_3");
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3{\n"
"\n"
"border-image:url(:/images/images/Hotel3-3.jpeg);\n"
"}"));

        horizontalLayout_3->addWidget(widget_3);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 2);

#if QT_CONFIG(shortcut)
        label->setBuddy(gtrooms);
        label_2->setBuddy(gtdate);
        label_3->setBuddy(gtdate2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(guildtesero);

        QMetaObject::connectSlotsByName(guildtesero);
    } // setupUi

    void retranslateUi(QDialog *guildtesero)
    {
        guildtesero->setWindowTitle(QCoreApplication::translate("guildtesero", "Dialog", nullptr));
        gtback->setText(QCoreApplication::translate("guildtesero", "<-", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("guildtesero", "About Us", nullptr));
        label_6->setText(QCoreApplication::translate("guildtesero", "High-quality furnishings, plush bedding, and panoramic mountain views\n"
"Marble bathrooms with rainfall showers, spa bathtubs, and premium toiletries\n"
" Cater to your every need with personalized attention\n"
"Relax and rejuvenate with massages, body treatments, and a sauna or steam room\n"
"We offer the highest level of comfort and service, at a price of PKR 65000 for one night stay.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("guildtesero", "Want To Book a Room?", nullptr));
        label->setText(QCoreApplication::translate("guildtesero", "Room No", nullptr));
        label_2->setText(QCoreApplication::translate("guildtesero", "CheckIn Date", nullptr));
        label_3->setText(QCoreApplication::translate("guildtesero", "CheckOut Date", nullptr));
        gtbook->setText(QCoreApplication::translate("guildtesero", "Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class guildtesero: public Ui_guildtesero {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUILDTESERO_H
