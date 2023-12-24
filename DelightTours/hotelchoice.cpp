#include "hotelchoice.h"
#include "ui_hotelchoice.h"
#include"hotelrosemary.h"
#include"hotelroyalden.h"
#include"guildtesero.h"
hotelchoice::hotelchoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hotelchoice)
{
    ui->setupUi(this);
}

hotelchoice::~hotelchoice()
{
    delete ui;
}



void hotelchoice::on_hotel1_clicked()
{
    //hides courrent form and shows the hotel detailed page
    hide();
    hotelrosemary hr;
    hr.setModal(true);
    hr.exec();

}


void hotelchoice::on_hotel2_clicked()
{
     //hides courrent form and shows the hotel detailed page
    hide();
    hotelroyalden rd;
    rd.setModal(true);
    rd.exec();

}


void hotelchoice::on_pushButton_3_clicked()
{
     //hides courrent form and shows the hotel detailed page
    hide();
    guildtesero gt;
    gt.setModal(true);
    gt.exec();

}

