#include "normal.h"
#include "ui_normal.h"
#include "preplanned.h"
#include "userdata.h"
#include "bill.h"

normal::normal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::normal)
{
    ui->setupUi(this);
}

normal::~normal()
{
    delete ui;
}

void normal::on_connormbtn_clicked()
{

    // Prompt the user for booking confirmation
    int result = QMessageBox::question(this, "Confirmation", "Do you want to book the Normal Package for 20000 PKR?", QMessageBox::Yes | QMessageBox::No);

    if (result == QMessageBox::Yes) { // If user confirms booking

        // Set the cost of the Normal Package
        quint32 tourPackageCost = 18000;

        // Display confirmation message
        QMessageBox::information(this, "Congratulations", "Your Normal Tour has been booked");

        // Store booking details in global data structure
        UserData::instance().setPackagetype("Pre-planned");
        UserData::instance().setTourCost(tourPackageCost);

        // Proceed to billing
         // Hide current form
        hide();
        //Displays the next form
        bill bil;
        bil.setModal(true);
        bil.exec();

    } else { // If user does not confirm booking
        // ... Perform any necessary actions for canceled booking (placeholder)
    }
}

void normal::on_backnormbtn_clicked(){
    //Hides the current form
    hide();
    //Display's the previous form
    preplanned back;
    back.setModal(true);
    back.exec();
}
