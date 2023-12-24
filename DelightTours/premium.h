#ifndef PREMIUM_H
#define PREMIUM_H

#include <QDialog>
#include<QMessageBox>


namespace Ui {
class premium;
}

class premium : public QDialog
{
    Q_OBJECT

public:
    explicit premium(QWidget *parent = nullptr);
    ~premium();

private slots:

     void on_backbtn_clicked();

    void on_cofirmbtn_clicked();

private:
    Ui::premium *ui;
};

#endif // PREMIUM_H
