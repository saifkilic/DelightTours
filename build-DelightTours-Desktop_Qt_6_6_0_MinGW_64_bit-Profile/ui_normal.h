/********************************************************************************
** Form generated from reading UI file 'normal.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORMAL_H
#define UI_NORMAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_normal
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QPushButton *connormbtn;
    QPushButton *backnormbtn;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *normal)
    {
        if (normal->objectName().isEmpty())
            normal->setObjectName("normal");
        normal->resize(800, 600);
        normal->setStyleSheet(QString::fromUtf8("#normal {\n"
"   border-image:url(:/images/images/background.PNG);\n"
"}"));
        gridLayout_2 = new QGridLayout(normal);
        gridLayout_2->setObjectName("gridLayout_2");
        groupBox = new QGroupBox(normal);
        groupBox->setObjectName("groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(16);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color:#002244;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        widget = new QWidget(normal);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        connormbtn = new QPushButton(widget);
        connormbtn->setObjectName("connormbtn");
        connormbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        gridLayout_3->addWidget(connormbtn, 0, 2, 1, 1);

        backnormbtn = new QPushButton(widget);
        backnormbtn->setObjectName("backnormbtn");
        backnormbtn->setStyleSheet(QString::fromUtf8("padding: 10px;\n"
"border-radius:10px;\n"
"background-color: rgb(89, 170, 163);\n"
"color:rgb(255, 255, 255);\n"
""));

        gridLayout_3->addWidget(backnormbtn, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(normal);

        QMetaObject::connectSlotsByName(normal);
    } // setupUi

    void retranslateUi(QDialog *normal)
    {
        normal->setWindowTitle(QCoreApplication::translate("normal", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("normal", "Features", nullptr));
        label->setText(QCoreApplication::translate("normal", "\n"
"\n"
"Indoor:\n"
"\n"
"Hunza Cultural Complex and Traditional Crafts Workshop\n"
"Traditional Music and Dance Performance\n"
"\n"
"Outdoor:\n"
"\n"
"Naltar Valley Horseback Riding \n"
"Hunza Valley Shopping\n"
"Whitewater Rafting on the Indus River \n"
"Rock Climbing in Passu\n"
"Karakoram Highway Jeep Safari\n"
"\n"
"Sightseeing:\n"
"\n"
"Hunza Valley\n"
"Naltar Valley\n"
"Altit and Duikar Forts\n"
"Karakoram Highway\n"
"\n"
"Normal Package will  contain a standard Travel Car", nullptr));
        connormbtn->setText(QCoreApplication::translate("normal", "Confirm", nullptr));
        backnormbtn->setText(QCoreApplication::translate("normal", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class normal: public Ui_normal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORMAL_H
