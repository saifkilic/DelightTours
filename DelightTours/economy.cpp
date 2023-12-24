#include "economy.h"
#include "ui_economy.h"
#include"preplanned.h"
#include"userdata.h"
#include"bill.h"

economy::economy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::economy)
{
    ui->setupUi(this);
}

economy::~economy()
{
    delete ui;
}



void economy::on_conecobtn_clicked() {
    // Prompt the user for booking confirmation
    int result = QMessageBox::question( this,   "Confirmation",  "Do you want to book the Economy Package for 10000 PKR?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (result == QMessageBox::Yes) { // If user confirms booking
        // ... Perform  necessary booking actions

        // Set the cost of the Economy Package
        quint32 tourPackageCost = 8000;

        // Inform the user of successful booking
        QMessageBox::information(this, "Congratulations", "Your Economy Tour has been booked");

        // Store booking details in global data structure
        UserData::instance().setPackagetype("Pre-planned");
        UserData::instance().setTourCost(tourPackageCost);

        // Proceed to billing
        // Hide current form
        hide();
        bill bil;
        bil.setModal(true);
        bil.exec();

    } else { // If user does not confirm booking
        // Do nothing (placeholder for any alternative actions)
    }
}

void economy::on_backecobtn_clicked() {
    // Hide current form
    hide();
    // Goes back to the previous form
    preplanned back;
    back.setModal(true);
    back.exec();
}
