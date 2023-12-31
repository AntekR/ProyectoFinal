QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gamepause.cpp \
    main.cpp \
    juego.cpp \
    arma.cpp \
    rick.cpp \
    morty.cpp \
    personaje.cpp \
    nivel.cpp \
    scenes.cpp

HEADERS += \
    gamepause.h \
    juego.h \
    arma.h \
    rick.h \
    morty.h \
    personaje.h \
    nivel.h \
    scenes.h

FORMS += \
    juego.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc
