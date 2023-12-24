#ifndef GUILDTESERO_H
#define GUILDTESERO_H

#include <QDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include"global.h"

namespace Ui {
class guildtesero;
}

class guildtesero : public QDialog
{
    Q_OBJECT

public:
    explicit guildtesero(QWidget *parent = nullptr);
    ~guildtesero();

private slots:
    void on_gtbook_clicked();

    void on_gtback_clicked();


private:
    Ui::guildtesero *ui;
};

#endif // GUILDTESERO_H
