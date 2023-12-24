#include "hotelrosemary.h"
#include "ui_hotelrosemary.h"
#include "tourplan.h"
#include "hotelchoice.h"
#include <QDate>
#include"userdata.h"
#include"bill.h"
#include<QSettings>

hotelrosemary::hotelrosemary(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hotelrosemary)
{
    ui->setupUi(this);

    // Populate room numbers in the dropdown
    for (int i = 101; i < 110; i++) {
        ui->roomno->addItem(QString::number(i));
    }
}

hotelrosemary::~hotelrosemary()
{
    delete ui;
}
bool roomAvailable = true;

void hotelrosemary::on_bookbtn_clicked() {

     //Gets input from user
    QString roomNumber = ui->roomno->currentText();
    QString checkInDate = ui->checkin->text();
    QString checkOutDate = ui->checkout->text();

    // Ensure the "available_rooms.txt" file exists
    QFile check("available_rooms.txt");
    if (!check.exists()) {
        if (!check.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QMessageBox::warning(this, "Error", "Failed to create file.");
            return;
        }
        check.close();
    }

    // Check room availability by reading the file
    QFile file("available_rooms.txt");
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
        quint32 hotelcost = 12000 * days;

        // Append the booking information to the "available_rooms.txt" file
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            file.write(roomNumber.toUtf8() + "," + checkInDate.toUtf8() + "," + checkOutDate.toUtf8() + "\n");
            file.flush();
            file.close();

            // Show confirmation message and proceed to tour plan
            QMessageBox::information(this, "Congratulations", "Room " + roomNumber + " is booked for you from " + checkInDate + " to " + checkOutDate + ". Total cost: " + QString::number(hotelcost));
            UserData::instance().setHotelCost(hotelcost);

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
    void hotelrosemary::on_backbtn_clicked() {
        hide();
        hotelchoice hc;
        hc.setModal(true);
        hc.exec();
    }


