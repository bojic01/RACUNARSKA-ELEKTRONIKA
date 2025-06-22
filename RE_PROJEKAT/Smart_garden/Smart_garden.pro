QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
LIBS += -L/usr/local/lib -lwiringPi
# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    dialog.cpp \
    pomocdialog.cpp \
    secdialog.cpp \
    sijalicadialog.cpp \
    ventilatordialog.cpp \
    zalivanjedialog.cpp

HEADERS += \
    dialog.h \
    pomocdialog.h \
    secdialog.h \
    sijalicadialog.h \
    ventilatordialog.h \
    zalivanjedialog.h

FORMS += \
    dialog.ui \
    pomocdialog.ui \
    secdialog.ui \
    sijalicadialog.ui \
    ventilatordialog.ui \
    zalivanjedialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pomoc.qrc \
    pozadina.qrc \
    sijalica.qrc \
    termostat.qrc \
    ventilator.qrc \
    zalivanje.qrc
