QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    charcos_de_muerte.cpp \
    enemigo.cpp \
    fantasmas.cpp \
    main.cpp \
    mainwindow.cpp \
    maps.cpp \
    movimiento.cpp \
    obstaculos.cpp \
    personaje.cpp \
    salida.cpp

HEADERS += \
    charcos_de_muerte.h \
    enemigo.h \
    fantasmas.h \
    mainwindow.h \
    movimiento.h \
    obstaculos.h \
    personaje.h \
    salida.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Imagenes.qrc

DISTFILES +=
