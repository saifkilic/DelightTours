#include "bill.h"
#include "ui_bill.h"
#include "userdata.h"
#include<QMessageBox>
#include<QApplication>

bill::bill(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bill)
{
    ui->setupUi(this);

    displayBill(); // Call immediately to display bill on opening
}

bill::~bill() {
    delete ui;
}

void bill::displayBill() {

    //Store currency string as a variable to show it with amount
    QString currency = "Pkr";
    // Retrieve user data from the global UserData instance
    QString name = UserData::instance().name();
    int hotelCost = UserData::instance().hotelCost();
    int tourCost = UserData::instance().tourCost();
    QString packagetype = UserData::instance().packagetype();

    // Display's billing information based on package type
    if (packagetype == "Pre-planned") {

        // Set text for name, hotel cost, and tour cost
        ui->line1->setText(name);
        ui->line2->setText(currency + "  " +QString::number(hotelCost));
        ui->line3->setText(currency + "  " +QString::number(tourCost));

        // Calculate and display total cost
        int totalCost = hotelCost + tourCost;
        ui->line4->setText(currency + "  " +QString::number(totalCost));
    }
    else {
        // Retrieve individual activity costs
        int indoor = UserData::instance().indoorCost();
        int outdoor = UserData::instance().outdoorCost();
        int sightseeing = UserData::instance().sightseeingCost();

        // Calculate total tour cost
        int tourtotal = indoor + outdoor + sightseeing;

        // Set text for name, hotel cost, and calculated tour cost
        ui->line1->setText(name);
        ui->line2->setText(currency + "  " +QString::number(hotelCost));
        ui->line3->setText(currency + "  " +QString::number(tourtotal));

        // Calculate and display total cost
        int totalCost = hotelCost + tourtotal;
        ui->line4->setText(currency + "  " +QString::number(totalCost));
    }
}

void bill::on_pushButton_clicked()
{
    QMessageBox::information(this,"Congratulatons","Your Bill has been payed");

    // Exit the application
    QApplication::quit();
}

