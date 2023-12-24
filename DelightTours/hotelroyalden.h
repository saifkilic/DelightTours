#ifndef HOTELROYALDEN_H
#define HOTELROYALDEN_H

#include <QDialog>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>

namespace Ui {
class hotelroyalden;
}

class hotelroyalden : public QDialog
{
    Q_OBJECT

public:
    explicit hotelroyalden(QWidget *parent = nullptr);
    ~hotelroyalden();

private slots:
    void on_bookbtnroyal_clicked();

    void on_backbtnroyal_clicked();

private:
    Ui::hotelroyalden *ui;
    int hotelcost;
};

#endif // HOTELROYALDEN_H
