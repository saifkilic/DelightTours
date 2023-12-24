#include "profile.h"
#include "ui_profile.h"
#include <QMessageBox>
#include <QRegularExpression>
#include "userdata.h"
#include "bill.h"
#include <QSettings>


profile::profile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    ui->name->setClearButtonEnabled(true);
    ui->age->setClearButtonEnabled(true);
    ui->phone->setClearButtonEnabled(true);
    ui->cnic->setClearButtonEnabled(true);
    ui->members->setClearButtonEnabled(true);

}

profile::~profile() {
    QObject::~QObject();
    delete ui;
}

void profile::on_subbtn_clicked() {

    // Get Input From User
    QString name = ui->name->text();
    QString age = ui->age->text();
    QString members = ui->members->text();
    QString cnic = ui->cnic->text();
    QString phone = ui->phone->text();

    // Define regular expressions for input validation
    QRegularExpression ageRegex("^\\d+$"); // Match digits only for age
    QRegularExpression phoneRegex("^\\+92\\d{3}-\\d{7}$"); // Match specific phone format
    QRegularExpression cnicRegex("^\\d{5}-\\d{7}-\\d{1}$"); // Match specific CNIC format

    // Check for required fields
    if (name.isEmpty() || members.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in all required fields!");
        return;
    }

    // Validate age format
    if (!ageRegex.match(age).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid age format! Please enter digits only.");
        return;
    }

    // Validate phone number format
    if (!phoneRegex.match(phone).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid phone number format! Please follow the required format.");
        return;
    }

    // Validate CNIC format
    if (!cnicRegex.match(cnic).hasMatch()) {
        QMessageBox::warning(this, "Error", "Invalid CNIC format! Please follow the required format.");
        return;
    }

    // Store the name in a global data structure
    UserData::instance().setName(name);

    // Hide the current form and display the hotel choice form
    hide();
    hotelchoice hc;
    hc.setModal(true);
    hc.exec();


}
