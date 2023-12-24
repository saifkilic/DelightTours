#include "tourplan.h"
#include "ui_tourplan.h"
#include"preplanned.h"
#include"customindoor.h"

tourplan::tourplan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tourplan)
{
    ui->setupUi(this);
}

tourplan::~tourplan()
{
    delete ui;
}

void tourplan::on_pppack_clicked() {
     // Hide the current tour plan window and opens the pre-planned packages
    hide();
    preplanned pp;
    pp.setModal(true);
    pp.exec();
}

void tourplan::on_cuspack_clicked() {
    // Hide the current tour plan window and opens the custom
    hide();
    customindoor ci;
    ci.setModal(true);
    ci.exec();

}
