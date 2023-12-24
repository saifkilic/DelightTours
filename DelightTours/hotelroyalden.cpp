#include "hotelroyalden.h"
#include "ui_hotelroyalden.h"
#include "tourplan.h"
#include "hotelchoice.h"
#include <QDate>
#include"userdata.h"
#include"bill.h"
#include<QSettings>


hotelroyalden::hotelroyalden(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hotelroyalden)
{
    ui->setupUi(this);
     hotelcost=0;

    // Populate room numbers in the dropdown
    for (int i = 235; i <= 250; i++) {
        ui->royalroom->addItem(QString::number(i));
    }
}


hotelroyalden::~hotelroyalden()
{
    delete ui;
}

void hotelroyalden::on_bookbtnroyal_clicked() {
   //Get Input from user
    QString roomNumber = ui->royalroom->currentText();
    QString checkInDate = ui->royaldate->text();
    QString checkOutDate = ui->royaldate2->text();

    // Ensure the "royalden.txt" file exists for storing booking information
    QFile check("royalden.txt");
    if (!check.exists()) {
        if (!check.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Failed to create file.");
            return;
        }
        check.close();
    }

    // Check room availability by reading the file
    QFile file("royalden.txt");
    bool roomAvailable = true;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        while (!file.atEnd()) {
            QString line = file.readLine();
            QStringList parts = line.split(',');

            // Check if the room is already booked during the requested dates
            if (parts[0] == roomNumber &&
                ((checkInDate > parts[1] && checkInDate < parts[2]) ||
                 (checkOutDate > parts[1] && checkOutDate < parts[2]))) {
                roomAvailable = false;
                break;
            }
        }
        file.close();
    } else {
        QMessageBox::warning(this, "Error", "Failed to open file.");
        return;
    }

    // Proceed with booking if the room is available
    if (roomAvailable) {
        // Calculate the number of days between check-in and check-out dates
        QDate checkIn = QDate::fromString(checkInDate, "MM/dd/yyyy");
        QDate checkOut = QDate::fromString(checkOutDate, "MM/dd/yyyy");
        int days = qAbs(checkOut.daysTo(checkIn));

        // Calculate the hotel cost
        int hotelcost = 26000 * days;

        // Append the booking information to the "royalden.txt" file
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            file.write(roomNumber.toUtf8() + "," + checkInDate.toUtf8() + "," + checkOutDate.toUtf8() + "\n");
            file.flush();
            file.close();

            // Store the hotel cost in a global data structure
            UserData::instance().setHotelCost(hotelcost);

            // Show confirmation message and proceed to tour plan
            QMessageBox::information(this, "Congratulations", "Room " + roomNumber + " is booked for you from " + checkInDate + " to " + checkOutDate + ". Total cost: " + QString::number(hotelcost));


            //Hides Current form and shows next one
            hide();
            tourplan tp;
            tp.setModal(true);
            tp.exec();
        } else {
            QMessageBox::warning(this, "Error", "Failed to write to file.");
            return;
        }
    } else {
        // Inform the user if the room is unavailable
        QMessageBox::information(this, "Room Availability", "Room " + roomNumber + " is already booked for those dates.");
    }
}

// Handle back button click to return to the hotel choice form
void hotelroyalden::on_backbtnroyal_clicked() {
    hide();
    hotelchoice hc;
    hc.setModal(true);
    hc.exec();
}




