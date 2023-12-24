#include "guildtesero.h"
#include "ui_guildtesero.h"
#include "tourplan.h"
#include "hotelchoice.h"
#include"userdata.h"
#include"bill.h"
#include<QSettings>

guildtesero::guildtesero(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guildtesero)
{
    ui->setupUi(this);

    // Populate room numbers in the dropdown
    for (int i = 20; i <= 60; i++) {
        ui->gtrooms->addItem(QString::number(i));
    }
}

guildtesero::~guildtesero()
{
    delete ui;
}

void guildtesero::on_gtbook_clicked() {
    //Get Input From User
    QString roomNumberH3 = ui->gtrooms->currentText();
    QString checkInDateH3 = ui->gtdate->text();
    QString checkOutDateH3 = ui->gtdate2->text();

    bool roomAvailable = true; // Flag to indicate room availability

    // Ensure the "guildtesero.txt" file exists for storing booking information
    QFile check("guildtesero.txt");
    if (!check.exists()) {
        if (!check.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Failed to create file.");
            return;
        }
        check.close();
    }

    // Check room availability by reading the file
    QFile file("guildtesero.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Failed to open file.");
        return;
    }

    // Iterate through file lines to check for existing bookings
    while (!file.atEnd() && roomAvailable) {
        QString line = file.readLine();
        QStringList parts = line.split(',');

        // If the requested room is already booked for the given dates, mark as unavailable
        if (parts[0] == roomNumberH3 &&
            ((checkInDateH3 > parts[1] && checkInDateH3 < parts[2]) ||
             (checkOutDateH3 > parts[1] && checkOutDateH3 < parts[2]))) {
            roomAvailable = false;
            break;
        }
    }

    file.close();

    // Proceed with booking if the room is available
    if (roomAvailable) {
        // Calculate the number of days between check-in and check-out dates
        QDate checkIn = QDate::fromString(checkInDateH3, "MM/dd/yyyy");
        QDate checkOut = QDate::fromString(checkOutDateH3, "MM/dd/yyyy");
        int days = qAbs(checkOut.daysTo(checkIn));

        // Calculate the hotel cost
        quint32 hotelcost = 65000 * days;

        // Append booking details to guildtesero.txt
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            file.write(roomNumberH3.toUtf8() + "," + checkInDateH3.toUtf8() + "," + checkOutDateH3.toUtf8() + "\n");
            file.flush();
            file.close();

            // Store the hotel cost in a global data structure
            UserData::instance().setHotelCost(hotelcost);

            // Display confirmation message and proceed to tour plan
            QMessageBox::information(this, "Congratulations", "Room " + roomNumberH3 + " is booked for you from " + checkInDateH3 + " to " + checkOutDateH3 + ". Total cost: " + QString::number(hotelcost));

            //Hides Current form and shows next one
            hide();
            tourplan tp;
            tp.setModal(true);
            tp.exec();

        }
        else {
            QMessageBox::warning(this, "Error", "Failed to write to file.");
            return;
        }
    }
    else {
        // Inform user about room unavailability
        QMessageBox::information(this, "Room Availability", "Room " + roomNumberH3 + " is already booked for those dates.");
    }
}

// Handle back button click to return to the hotel choice form
void guildtesero::on_gtback_clicked() {
    hide();
    hotelchoice hc;
    hc.setModal(true);
    hc.exec();
}



