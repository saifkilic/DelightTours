#include "homepage.h"
#include "ui_homepage.h"

homepage::homepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::homepage)
{
    ui->setupUi(this);
}

homepage::~homepage()
{
    delete ui;
}



void homepage::on_startbtn_clicked()
{
    //Shows the next page where user will enter his information


