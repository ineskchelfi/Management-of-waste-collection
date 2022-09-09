#-------------------------------------------------
#
# Project created by QtCreator 2022-01-27T13:33:32
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Ineskchelfi
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    secdialog.cpp \
    admindialog.cpp \
    utilisateur.cpp \
    camions_de_collecte.cpp \
    conteneurs_dechets.cpp

HEADERS  += mainwindow.h \
    secdialog.h \
    admindialog.h \
    utilisateur.h \
    camions_de_collecte.h \
    conteneurs_dechets.h

FORMS    += mainwindow.ui \
    secdialog.ui \
    admindialog.ui \
    admindialog2.ui
