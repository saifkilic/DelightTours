/********************************************************************************
** Form generated from reading UI file 'customindoor.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMINDOOR_H
#define UI_CUSTOMINDOOR_H

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

class Ui_customindoor
{
public:
    QGridLayout *gridLayout;
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
    QLabel *label;

    void setupUi(QDialog *customindoor)
    {
        if (customindoor->objectName().isEmpty())
            customindoor->setObjectName("customindoor");
        customindoor->resize(803, 600);
        customindoor->setStyleSheet(QString::fromUtf8("#customindoor {\n"
"   border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout = new QGridLayout(customindoor);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        checkBox = new QCheckBox(customindoor);
        checkBox->setObjectName("checkBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(customindoor);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font);
        checkBox_2->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(customindoor);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font);
        checkBox_3->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(customindoor);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font);
        checkBox_4->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(customindoor);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font);
        checkBox_5->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_6 = new QCheckBox(customindoor);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setFont(font);
        checkBox_6->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(customindoor);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font);
        checkBox_7->setStyleSheet(QString::fromUtf8("color:#002244;"));

        verticalLayout->addWidget(checkBox_7);

        nextbtn = new QPushButton(customindoor);
        nextbtn->setObjectName("nextbtn");
        nextbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(nextbtn);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label = new QLabel(customindoor);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        font1.setBold(true);
        label->setFont(font1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color:#002244"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(customindoor);

        QMetaObject::connectSlotsByName(customindoor);
    } // setupUi

    void retranslateUi(QDialog *customindoor)
    {
        customindoor->setWindowTitle(QCoreApplication::translate("customindoor", "Dialog", nullptr));
        checkBox->setText(QCoreApplication::translate("customindoor", "Hunza Cultural Complex: Immerse in Hunza's heritage with exhibits and workshops   ---PKR 500", nullptr));
        checkBox_2->setText(QCoreApplication::translate("customindoor", "Altit Fort Museum: Step back in time and learn about Hunza royalty and Silk Road trade  --- PKR 750", nullptr));
        checkBox_3->setText(QCoreApplication::translate("customindoor", "Local Handicraft Center: Discover and support local artisans  ---PKR 1200", nullptr));
        checkBox_4->setText(QCoreApplication::translate("customindoor", "Traditional Music & Dance Show: Immerse in local culture with music and dance   ---PKR 600", nullptr));
        checkBox_5->setText(QCoreApplication::translate("customindoor", "Gilgit Serena Hotel Afternoon Tea: Experience elegance and chai at Serena Hotel --PKR 2000", nullptr));
        checkBox_6->setText(QCoreApplication::translate("customindoor", "Hunza Food Cooking Class: Master Hunza cuisine and enjoy your creations  --PKR 2000", nullptr));
        checkBox_7->setText(QCoreApplication::translate("customindoor", "Shigar Polo Grounds: Witness the unique Shigar polo game played on horseback    ---PKR 100", nullptr));
        nextbtn->setText(QCoreApplication::translate("customindoor", "Next", nullptr));
        label->setText(QCoreApplication::translate("customindoor", "Select Indoor Activitites (Maximum Five)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customindoor: public Ui_customindoor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMINDOOR_H
