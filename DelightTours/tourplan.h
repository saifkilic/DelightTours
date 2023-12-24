#ifndef TOURPLAN_H
#define TOURPLAN_H

#include <QDialog>

namespace Ui {
class tourplan;
}

class tourplan : public QDialog
{
    Q_OBJECT

public:
    explicit tourplan(QWidget *parent = nullptr);
    ~tourplan();

private slots:
    void on_pppack_clicked();

    void on_cuspack_clicked();

private:
    Ui::tourplan *ui;
};

#endif // TOURPLAN_H
