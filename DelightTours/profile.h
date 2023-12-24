#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include "hotelchoice.h"

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(QWidget *parent = nullptr);
    ~profile();

private slots:
    void on_subbtn_clicked();

private:
    Ui::profile *ui;

    // Add pointers to your Line Edit widgets

};

#endif // PROFILE_H
