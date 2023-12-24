#ifndef BILL_H
#define BILL_H

#include <QDialog>


namespace Ui {
class bill;
}

class bill : public QDialog
{
    Q_OBJECT

public:
    explicit bill(QWidget *parent = nullptr);
    ~bill();

  // Add this line

private slots:
    void on_pushButton_clicked();

private:
    Ui::bill *ui;
    void displayBill();
};

#endif // BILL_H
