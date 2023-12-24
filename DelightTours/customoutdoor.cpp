#include "customoutdoor.h"
#include "ui_customoutdoor.h"
#include"userdata.h"

customoutdoor::customoutdoor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customoutdoor)
{
    ui->setupUi(this);
}

customoutdoor::~customoutdoor()
{
    delete ui;
}

void customoutdoor::on_nextbtn_clicked()
{
    // Array to store activity costs
    int activityCosts[7] = { 4500, 500, 5000, 6000, 1500, 2000, 1000 };

    // Counter to track the number of selected activities
    int counter = 0;

    // Variable to store the total cost of indoor activities
    quint16 totalcostoutdoor = 0;

    // Calculate individual activity cost based on selection
    if (ui->checkBox->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[0];
    }

    if (ui->checkBox_2->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[1];
    }

    if (ui->checkBox_3->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[2];
    }

    if (ui->checkBox_4->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[3];
    }

    if (ui->checkBox_5->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[4];
    }

    if ( ui->checkBox_6->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[5];
    }

    if ( ui->checkBox_7->isChecked()) {
        counter++;
        totalcostoutdoor +=activityCosts[6];
    }

    // Check if the user has selected more than 5 activities
    if (counter > 5) {
        QMessageBox::warning(this, "Sorry", "You can only select up to 5 options");
    } else {

           // Store the calculated total cost of indoor activities
           UserData::instance().setOutdoorCost(totalcostoutdoor);

            // Hide the current window
            hide();
            // Show custom sightseeing form
            customsightseeing ss;
            ss.setModal(true);
            ss.exec();


        }


}

