#-------------------------------------------------
#
# Project created by QtCreator 2016-02-28T07:46:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Windows
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
    ../header/curl.h
    ../header/curlbuild.h
    ../header/curlrules.h
    ../header/curlver.h
    ../header/easy.h
    ../header/mprintf.h
    ../header/multi.h
    ../header/stdcheaders.h
    ../header/typecheck-gcc.h
    ../header/curl.h

FORMS    += mainwindow.ui
