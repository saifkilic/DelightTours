#include "premium.h"
#include "ui_premium.h"
#include"preplanned.h"
#include"userdata.h"
#include"bill.h"


premium::premium(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::premium)
{
    ui->setupUi(this);
}

premium::~premium()
{
    delete ui;
}
void premium::on_backbtn_clicked()
{
    // Hide's current form
    hide();
    //Shows Previous form
    preplanned back;
    back.setModal(true);
    back.exec();
}


void premium::on_cofirmbtn_clicked()
{
    // Prompt the user for booking confirmation
    int result = QMessageBox::question(this, "Confirmation", "Do you want to book the premium Package for 32000 PKR?", QMessageBox::Yes | QMessageBox::No);

    if (result == QMessageBox::Yes) { // If user confirms booking
        // Perform booking actions

        quint32 tourPackageCost = 32000;

        // Display confirmation message
        QMessageBox::information(this, "Congratulations", "Your Premium Tour has been booked");

        // Store booking details in global data structure
        UserData::instance().setPackagetype("Pre-planned");
        UserData::instance().setTourCost(tourPackageCost);

        // Hides Current form
        hide();
        //Displays the next form
        bill bil;
        bil.setModal(true);
        bil.exec();

    } else { // If user does not confirm booking
        // Handle actions for canceled booking (placeholder)
    }
}

