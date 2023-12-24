#ifndef HOTELROSEMARY_H
#define HOTELROSEMARY_H

#include <QDialog>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
namespace Ui {
class hotelrosemary;
}

class hotelrosemary : public QDialog
{
    Q_OBJECT

public:
    explicit hotelrosemary(QWidget *parent = nullptr);
    ~hotelrosemary();

private slots:
    void on_bookbtn_clicked();

    void on_backbtn_clicked();
private:
    Ui::hotelrosemary *ui;
};

#endif // HOTELROSEMARY_H
