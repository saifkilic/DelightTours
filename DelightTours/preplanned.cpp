#include "preplanned.h"
#include "ui_preplanned.h"
#include"premium.h"
#include"normal.h"
#include"economy.h"
#include"tourplan.h"

preplanned::preplanned(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::preplanned)
{
    ui->setupUi(this);
}

preplanned::~preplanned()
{
    delete ui;
}

void preplanned::on_prembtn_clicked()
{
     //Hides current form
    hide();
    //shows the next form
    premium pre;
    pre.setModal(true);
    pre.exec();

}


void preplanned::on_normalbtn_clicked()
{
     //Hides current form
    hide();
    //shows the next form
    normal nor;
    nor.setModal(true);
    nor.exec();

}


void preplanned::on_ecobtn_clicked()
{
    //Hides current form
    hide();
    //shows the next form
    economy ec;
    ec.setModal(true);
    ec.exec();

}


void preplanned::on_pushButton_clicked()
{
    //Goes back to previous form
    hide();
    tourplan tp;
    tp.setModal(true);
    tp.exec();
}

