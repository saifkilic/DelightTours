#ifndef CUSTOMSIGHTSEEING_H
#define CUSTOMSIGHTSEEING_H

#include <QDialog>
#include<QMessageBox>

namespace Ui {
class customsightseeing;
}

class customsightseeing : public QDialog
{
    Q_OBJECT

public:
    explicit customsightseeing(QWidget *parent = nullptr);
    ~customsightseeing();

private slots:
    void on_nextbtn_clicked();

private:
    Ui::customsightseeing *ui;
};

#endif // CUSTOMSIGHTSEEING_H
