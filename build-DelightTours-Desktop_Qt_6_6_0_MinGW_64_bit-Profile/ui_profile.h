/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_profile
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *phone;
    QLineEdit *members;
    QLineEdit *age;
    QLineEdit *cnic;
    QLineEdit *name;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QPushButton *subbtn;

    void setupUi(QDialog *profile)
    {
        if (profile->objectName().isEmpty())
            profile->setObjectName("profile");
        profile->resize(800, 600);
        profile->setStyleSheet(QString::fromUtf8("#profile{\n"
"border-image:url(:/images/images/background.PNG);\n"
"opacity:0.7;\n"
"\n"
"}"));
        gridLayout = new QGridLayout(profile);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        groupBox = new QGroupBox(profile);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"background-color:transparent;\n"
"border: 5px solid rgb(89, 170, 163);\n"
"border-radius:15px;\n"
"padding:20px 10px;\n"
"color: green;\n"
"}"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: green;"));

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: green;"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        phone = new QLineEdit(groupBox);
        phone->setObjectName("phone");
        phone->setFont(font1);
        phone->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding:5px;\n"
"background-color:transparent;\n"
"border:1px solid rgb(89, 170, 163);\n"
"color: green;  "));

        gridLayout_2->addWidget(phone, 4, 1, 1, 1);

        members = new QLineEdit(groupBox);
        members->setObjectName("members");
        members->setFont(font1);
        members->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding:5px;\n"
"background-color:transparent;\n"
"border:1px solid rgb(89, 170, 163);\n"
"color: green;"));

        gridLayout_2->addWidget(members, 2, 1, 1, 1);

        age = new QLineEdit(groupBox);
        age->setObjectName("age");
        age->setFont(font1);
        age->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding:5px;\n"
"background-color:transparent;\n"
"border:1px solid rgb(89, 170, 163);\n"
"color: green;"));

        gridLayout_2->addWidget(age, 1, 1, 1, 1);

        cnic = new QLineEdit(groupBox);
        cnic->setObjectName("cnic");
        cnic->setFont(font1);
        cnic->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding:5px;\n"
"background-color:transparent;\n"
"border:1px solid rgb(89, 170, 163);\n"
"color: green;"));

        gridLayout_2->addWidget(cnic, 3, 1, 1, 1);

        name = new QLineEdit(groupBox);
        name->setObjectName("name");
        name->setFont(font1);
        name->setStyleSheet(QString::fromUtf8("border-radius:10px;\n"
"padding:5px;\n"
"background-color:transparent;\n"
"border:1px solid rgb(89, 170, 163);\n"
"color: green;"));

        gridLayout_2->addWidget(name, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: green;"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: green;"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: green;"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        subbtn = new QPushButton(groupBox);
        subbtn->setObjectName("subbtn");
        subbtn->setFont(font);
        subbtn->setStyleSheet(QString::fromUtf8("#subbtn{\n"
"padding: 10px;\n"
"border-radius:20px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
"\n"
"}"));

        gridLayout_2->addWidget(subbtn, 5, 0, 1, 2);


        gridLayout->addWidget(groupBox, 1, 1, 1, 1);

#if QT_CONFIG(shortcut)
        label_5->setBuddy(phone);
        label_2->setBuddy(age);
        label_3->setBuddy(members);
        label->setBuddy(name);
        label_4->setBuddy(cnic);
#endif // QT_CONFIG(shortcut)

        retranslateUi(profile);

        QMetaObject::connectSlotsByName(profile);
    } // setupUi

    void retranslateUi(QDialog *profile)
    {
        profile->setWindowTitle(QCoreApplication::translate("profile", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("profile", "Fill Out Your Information", nullptr));
        label_5->setText(QCoreApplication::translate("profile", "Phone No:", nullptr));
        label_2->setText(QCoreApplication::translate("profile", "Age:", nullptr));
        label_3->setText(QCoreApplication::translate("profile", "No Of Members", nullptr));
        label->setText(QCoreApplication::translate("profile", "Name:", nullptr));
        label_4->setText(QCoreApplication::translate("profile", "CNIC No:", nullptr));
        subbtn->setText(QCoreApplication::translate("profile", "Submit Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class profile: public Ui_profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
