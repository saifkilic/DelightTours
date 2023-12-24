#ifndef NORMAL_H
#define NORMAL_H

#include <QDialog>
#include<QMessageBox>


namespace Ui {
class normal;
}

class normal : public QDialog
{
    Q_OBJECT

public:
    explicit normal(QWidget *parent = nullptr);
    ~normal();

private slots:
    void on_connormbtn_clicked();

    void on_backnormbtn_clicked();

private:
    Ui::normal *ui;
};

#endif // NORMAL_H
