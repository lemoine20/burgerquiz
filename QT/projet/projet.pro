#-------------------------------------------------
#
# Project created by QtCreator 2018-06-01T11:37:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets sql

TARGET = projet
TEMPLATE = app
LIBS += -lmysqlcppconn

SOURCES += main.cpp\
        mainwindow.cpp \
    connection.cpp

HEADERS  += mainwindow.h \
    connection.h

FORMS    += mainwindow.ui
