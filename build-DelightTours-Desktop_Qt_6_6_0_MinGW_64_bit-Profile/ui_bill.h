/********************************************************************************
** Form generated from reading UI file 'bill.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILL_H
#define UI_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_bill
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *line4;
    QLabel *line2;
    QLabel *line1;
    QLabel *line3;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *bill)
    {
        if (bill->objectName().isEmpty())
            bill->setObjectName("bill");
        bill->resize(800, 600);
        bill->setStyleSheet(QString::fromUtf8("#bill {\n"
"    border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout_2 = new QGridLayout(bill);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(bill);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{border: 5px solid rgb(89, 170, 163);\n"
"color:green;\n"
"border-radius:15px;\n"
"padding:20px 10px;}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color:green;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:green;"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        line4 = new QLabel(groupBox);
        line4->setObjectName("line4");
        line4->setFont(font1);
        line4->setStyleSheet(QString::fromUtf8("color:green;"));
        line4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(line4, 3, 1, 1, 1);

        line2 = new QLabel(groupBox);
        line2->setObjectName("line2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        line2->setFont(font2);
        line2->setStyleSheet(QString::fromUtf8("color:green;"));
        line2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(line2, 1, 1, 1, 1);

        line1 = new QLabel(groupBox);
        line1->setObjectName("line1");
        line1->setFont(font1);
        line1->setStyleSheet(QString::fromUtf8("color:green;"));
        line1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(line1, 0, 1, 1, 1);

        line3 = new QLabel(groupBox);
        line3->setObjectName("line3");
        line3->setFont(font1);
        line3->setStyleSheet(QString::fromUtf8("color:green;"));
        line3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(line3, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color:green;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color:green;"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(bill);

        QMetaObject::connectSlotsByName(bill);
    } // setupUi

    void retranslateUi(QDialog *bill)
    {
        bill->setWindowTitle(QCoreApplication::translate("bill", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("bill", "Bill", nullptr));
        label->setText(QCoreApplication::translate("bill", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("bill", "Total Cost:", nullptr));
        pushButton->setText(QCoreApplication::translate("bill", "Pay", nullptr));
        line4->setText(QString());
        line2->setText(QString());
        line1->setText(QString());
        line3->setText(QString());
        label_2->setText(QCoreApplication::translate("bill", "Hotel Cost:", nullptr));
        label_3->setText(QCoreApplication::translate("bill", "Tour Cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bill: public Ui_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
