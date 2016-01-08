#-------------------------------------------------
#
# Project created by QtCreator 2016-01-03T11:24:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IceRayTracer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    renderViewController.cpp \
    model/rayTracer/rayTracer.cpp \
    model/sceneParser/geometryObject.cpp \
    model/sceneParser/parser.cpp \
    model/sceneParser/scene.cpp

HEADERS  += mainwindow.h \
    ui_mainwindow.h \
    renderViewController.h \
    model/rayTracer/rayTracer.h \
    model/sceneParser/geometryObject.h \
    model/sceneParser/parser.h \
    model/sceneParser/scene.h

FORMS    += mainwindow.ui
