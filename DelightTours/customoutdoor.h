#ifndef CUSTOMOUTDOOR_H
#define CUSTOMOUTDOOR_H

#include <QDialog>
#include<QMessageBox>
#include"customsightseeing.h"

namespace Ui {
class customoutdoor;
}

class customoutdoor : public QDialog
{
    Q_OBJECT

public:
    explicit customoutdoor(QWidget *parent = nullptr);
    ~customoutdoor();

private slots:
    void on_nextbtn_clicked();

private:
    Ui::customoutdoor *ui;
};

#endif // CUSTOMOUTDOOR_H
