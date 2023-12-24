#ifndef ECONOMY_H
#define ECONOMY_H

#include <QDialog>
#include<QMessageBox>


namespace Ui {
class economy;
}

class economy : public QDialog
{
    Q_OBJECT

public:
    explicit economy(QWidget *parent = nullptr);
    ~economy();

private slots:
    void on_conecobtn_clicked();

    void on_backecobtn_clicked();

private:
    Ui::economy *ui;
};

#endif // ECONOMY_H
