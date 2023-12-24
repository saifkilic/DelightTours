/********************************************************************************
** Form generated from reading UI file 'customsightseeing.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMSIGHTSEEING_H
#define UI_CUSTOMSIGHTSEEING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customsightseeing
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QPushButton *nextbtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *customsightseeing)
    {
        if (customsightseeing->objectName().isEmpty())
            customsightseeing->setObjectName("customsightseeing");
        customsightseeing->resize(800, 600);
        customsightseeing->setStyleSheet(QString::fromUtf8("#customsightseeing {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(customsightseeing);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(customsightseeing);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(22);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:#002244;"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox = new QCheckBox(customsightseeing);
        checkBox->setObjectName("checkBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(customsightseeing);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font1);
        checkBox_2->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(customsightseeing);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font1);
        checkBox_3->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(customsightseeing);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font1);
        checkBox_4->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(customsightseeing);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font1);
        checkBox_5->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(customsightseeing);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setFont(font1);
        checkBox_6->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(customsightseeing);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font1);
        checkBox_7->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_7);

        nextbtn = new QPushButton(customsightseeing);
        nextbtn->setObjectName("nextbtn");
        nextbtn->setFont(font1);
        nextbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);"));

        verticalLayout->addWidget(nextbtn);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(customsightseeing);

        QMetaObject::connectSlotsByName(customsightseeing);
    } // setupUi

    void retranslateUi(QDialog *customsightseeing)
    {
        customsightseeing->setWindowTitle(QCoreApplication::translate("customsightseeing", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("customsightseeing", "Select Sightseeing Activitites (Maximum Five)", nullptr));
        checkBox->setText(QCoreApplication::translate("customsightseeing", "Shangri-La Lake: Jeep safari to a pristine glacial lake.  ----PKR 7500 (including food)", nullptr));
        checkBox_2->setText(QCoreApplication::translate("customsightseeing", "Kargah Buddha: See a 7th-century rock-carved statue.   -----PKR 100", nullptr));
        checkBox_3->setText(QCoreApplication::translate("customsightseeing", "Altit & Duikar Forts: Explore  Altit Fort and admire the views.   ----PKR 900 (including guide)", nullptr));
        checkBox_4->setText(QCoreApplication::translate("customsightseeing", "Naltar Valley: Ride horses or relax in the scenery.  ----PKR 5000 (including horse rides and food)", nullptr));
        checkBox_5->setText(QCoreApplication::translate("customsightseeing", "Karakoram Highway: Wind through mountain passes on this world's highest road  ---PKR 15000 ", nullptr));
        checkBox_6->setText(QCoreApplication::translate("customsightseeing", "Fairy Meadows: Hike to meadows and see Nanga Parbat.  ---PKR 750", nullptr));
        checkBox_7->setText(QCoreApplication::translate("customsightseeing", "Hunza Valley: Journey through the picturesque Hunza Valley  ---PKR 5000", nullptr));
        nextbtn->setText(QCoreApplication::translate("customsightseeing", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customsightseeing: public Ui_customsightseeing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMSIGHTSEEING_H
