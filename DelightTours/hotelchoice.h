#ifndef HOTELCHOICE_H
#define HOTELCHOICE_H

#include <QDialog>
#include"hotelrosemary.h"

namespace Ui {
class hotelchoice;
}

class hotelchoice : public QDialog
{
    Q_OBJECT

public:
    explicit hotelchoice(QWidget *parent = nullptr);
    ~hotelchoice();

private slots:
    void on_hotel1_clicked();

    void on_hotel2_clicked();

    void on_pushButton_3_clicked();
signals:
    void sendHotelCost(quint32 hotelCost);

private:
    Ui::hotelchoice *ui;
};

#endif // HOTELCHOICE_H
