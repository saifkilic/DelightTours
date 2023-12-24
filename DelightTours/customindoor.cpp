#include "customindoor.h"
#include "ui_customindoor.h"
#include"userdata.h"


    customindoor::customindoor(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::customindoor)
    {
        ui->setupUi(this);
    }

    customindoor::~customindoor()
    {
        delete ui;
    }

    void customindoor::on_nextbtn_clicked()
    {
        // Array to store individual activity costs
        int activityCosts[7] = { 500, 750, 1200, 600, 2000, 2000, 100 };

        // Counter to track the number of selected activities
        int counter = 0;

        // Variable to store the total cost of indoor activities
        quint16 totalcostindoor = 0;

        // Calculate individual activity cost based on selection
        if (ui->checkBox->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[0];
        }

        if (ui->checkBox_2->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[1];
        }

        if (ui->checkBox_3->isChecked()) {
            counter++;
          totalcostindoor +=activityCosts[2];
        }

        if (ui->checkBox_4->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[3];
        }

        if (ui->checkBox_5->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[4];
        }

        if ( ui->checkBox_6->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[5];
        }

        if ( ui->checkBox_7->isChecked()) {
            counter++;
            totalcostindoor +=activityCosts[6];
        }

        //Checks and ensures that user selects maximum 5 activities
        if (counter > 5) {
            QMessageBox::warning(this, "Sorry", "You can only select up to 5 options");
        } else {

        // Set package type to "Custom"
        UserData::instance().setPackagetype("Custom");
        // Store the calculated total cost of indoor activities
        UserData::instance().setIndoorCost(totalcostindoor);

        // Proceed to outdoor activity selection
        //hides this form
        hide();
        //opens the new form
        customoutdoor co;
        co.setModal(true);
        co.exec();
        }

}


