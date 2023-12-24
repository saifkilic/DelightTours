#include "mainwindow.h"
#include "profile.h"
#include"hotelrosemary.h"
#include"hotelroyalden.h"
#include"guildtesero.h"
#include"userdata.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
