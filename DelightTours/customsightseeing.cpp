#include "customsightseeing.h"
#include "ui_customsightseeing.h"
#include"bill.h"
#include"userdata.h"

customsightseeing::customsightseeing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::customsightseeing)
{
    ui->setupUi(this);
}

customsightseeing::~customsightseeing()
{
    delete ui;
}

void customsightseeing::on_nextbtn_clicked()
{
    // Array to store activity costs
    int activityCosts[7] = { 7500, 100, 900, 5000, 15000, 750, 5000 };

    // Counter to track the number of selected activities
    int counter = 0;

    // Variable to store the total cost of indoor activities
    quint16 totalcostsightseeing = 0;

    // Calculate individual activity cost based on selection
    if (ui->checkBox->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[0];
    }

    if (ui->checkBox_2->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[1];
    }

    if (ui->checkBox_3->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[2];
    }

    if (ui->checkBox_4->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[3];
    }

    if (ui->checkBox_5->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[4];
    }

    if ( ui->checkBox_6->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[5];
    }

    if ( ui->checkBox_7->isChecked()) {
        counter++;
        totalcostsightseeing +=activityCosts[6];
    }

    // Check if the user has selected more than 5 activities
    if (counter > 5) {
        QMessageBox::warning(this, "Sorry", "You can only select up to 5 options");
    } else {

           // Store the calculated total cost of indoor activities
           UserData::instance().setSightseeingCost(totalcostsightseeing);

           //hides this form
            hide();
           //shows the next from
            bill bil;
            bil.setModal(true);
            bil.exec();
        }
}

