QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bill.cpp \
    customindoor.cpp \
    customoutdoor.cpp \
    customsightseeing.cpp \
    economy.cpp \
    guildtesero.cpp \
    hotelchoice.cpp \
    hotelrosemary.cpp \
    hotelroyalden.cpp \
    main.cpp \
    mainwindow.cpp \
    normal.cpp \
    premium.cpp \
    preplanned.cpp \
    profile.cpp \
    tourplan.cpp

HEADERS += \
    bill.h \
    customindoor.h \
    customoutdoor.h \
    customsightseeing.h \
    economy.h \
    guildtesero.h \
    hotelchoice.h \
    hotelrosemary.h \
    hotelroyalden.h \
    mainwindow.h \
    normal.h \
    premium.h \
    preplanned.h \
    profile.h \
    tourplan.h \
    userdata.h

FORMS += \
    bill.ui \
    customindoor.ui \
    customoutdoor.ui \
    customsightseeing.ui \
    economy.ui \
    guildtesero.ui \
    hotelchoice.ui \
    hotelrosemary.ui \
    hotelroyalden.ui \
    mainwindow.ui \
    normal.ui \
    premium.ui \
    preplanned.ui \
    profile.ui \
    tourplan.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
