/********************************************************************************
** Form generated from reading UI file 'customoutdoor.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMOUTDOOR_H
#define UI_CUSTOMOUTDOOR_H

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

class Ui_customoutdoor
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

    void setupUi(QDialog *customoutdoor)
    {
        if (customoutdoor->objectName().isEmpty())
            customoutdoor->setObjectName("customoutdoor");
        customoutdoor->resize(800, 600);
        customoutdoor->setStyleSheet(QString::fromUtf8("#customoutdoor {\n"
"  border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(customoutdoor);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(customoutdoor);
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
        checkBox = new QCheckBox(customoutdoor);
        checkBox->setObjectName("checkBox");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        checkBox->setFont(font1);
        checkBox->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(customoutdoor);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font1);
        checkBox_2->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(customoutdoor);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font1);
        checkBox_3->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(customoutdoor);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font1);
        checkBox_4->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(customoutdoor);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font1);
        checkBox_5->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(customoutdoor);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setFont(font1);
        checkBox_6->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(customoutdoor);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font1);
        checkBox_7->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_7);

        nextbtn = new QPushButton(customoutdoor);
        nextbtn->setObjectName("nextbtn");
        nextbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);"));

        verticalLayout->addWidget(nextbtn);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(customoutdoor);

        QMetaObject::connectSlotsByName(customoutdoor);
    } // setupUi

    void retranslateUi(QDialog *customoutdoor)
    {
        customoutdoor->setWindowTitle(QCoreApplication::translate("customoutdoor", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("customoutdoor", "Select Outdoor Activitites (Maximum Five)", nullptr));
        checkBox->setText(QCoreApplication::translate("customoutdoor", "Jeep safari on Karakoram Highway amidst dramatic passes and glaciers   -----PKR 4500", nullptr));
        checkBox_2->setText(QCoreApplication::translate("customoutdoor", "Camp , stargaze at Shandur Pass, highest polo ground  -----PKR 500", nullptr));
        checkBox_3->setText(QCoreApplication::translate("customoutdoor", "Raft Gilgit or Indus for adrenaline & mountain views    -------PKR 5000", nullptr));
        checkBox_4->setText(QCoreApplication::translate("customoutdoor", "Mountain bike Shimshal Valley's trails and meet its villagers   ------PKR 6000", nullptr));
        checkBox_5->setText(QCoreApplication::translate("customoutdoor", "Hike Naltar Valley's meadows & waterfalls, ride horses, breathe fresh air    ---------PKR 1500", nullptr));
        checkBox_6->setText(QCoreApplication::translate("customoutdoor", "Trek Fairy Meadows' wildflowers & witness Nanga Parbat   ---------PKR 2000", nullptr));
        checkBox_7->setText(QCoreApplication::translate("customoutdoor", "Rock climb Fairy Meadows for various levels and stunning views   ------PKR 1000", nullptr));
        nextbtn->setText(QCoreApplication::translate("customoutdoor", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customoutdoor: public Ui_customoutdoor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMOUTDOOR_H
