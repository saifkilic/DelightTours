#ifndef CUSTOMINDOOR_H
#define CUSTOMINDOOR_H

#include <QDialog>
#include<QMessageBox>
#include"customoutdoor.h"
namespace Ui {
class customindoor;
}

class customindoor : public QDialog
{
    Q_OBJECT

public:
    explicit customindoor(QWidget *parent = nullptr);
    ~customindoor();

private slots:
    void on_nextbtn_clicked();

private:
    Ui::customindoor *ui;
};

#endif // CUSTOMINDOOR_H
