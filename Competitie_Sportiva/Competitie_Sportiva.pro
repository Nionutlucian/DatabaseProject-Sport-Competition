#-------------------------------------------------
#
# Project created by QtCreator 2018-01-29T09:39:35
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Competitie_Sportiva
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    adaugare_participant.cpp \
    participant.cpp \
    participantdao.cpp \
    gestionarecompetitie.cpp \
    adaugare_club.cpp \
    clubsportivdao.cpp \
    clubsportiv.cpp \
    adaugare_categorie.cpp \
    categorie.cpp \
    categoriedao.cpp \
    clasament.cpp \
    simulare_window.cpp

HEADERS += \
        mainwindow.h \
    adaugare_participant.h \
    participant.h \
    participantdao.h \
    gestionarecompetitie.h \
    adaugare_club.h \
    clubsportivdao.h \
    clubsportiv.h \
    adaugare_categorie.h \
    categorie.h \
    categoriedao.h \
    clasament.h \
    simulare_window.h

FORMS += \
        mainwindow.ui \
    adaugare_participant.ui \
    gestionarecompetitie.ui \
    adaugare_club.ui \
    adaugare_categorie.ui \
    clasament.ui \
    simulare_window.ui
