#ifndef PREPLANNED_H
#define PREPLANNED_H

#include <QDialog>

namespace Ui {
class preplanned;
}

class preplanned : public QDialog
{
    Q_OBJECT

public:
    explicit preplanned(QWidget *parent = nullptr);
    ~preplanned();

private slots:
    void on_prembtn_clicked();

    void on_normalbtn_clicked();

    void on_ecobtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::preplanned *ui;
};

#endif // PREPLANNED_H
