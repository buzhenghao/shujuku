QT  += core gui widgets
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

SOURCES += \
    main.cpp \
    qwidgetdraw.cpp \
    ecgdraw.cpp \
    layout.cpp \
    tcpserver.cpp \
    socketdraw.cpp

HEADERS += \
    qwidgetdraw.h \
    ecgdata.h \
    ecgdraw.h \
    layout.h \
    tcpserver.h \
    socketdraw.h \
    ecgdata1.h
