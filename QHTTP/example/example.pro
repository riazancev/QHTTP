CONFIG += qt

QT += core
QT -= gui
QT += network

TEMPLATE = app
CONFIG += console

TARGET = example

CONFIG += exceptions

CONFIG += c++11

CONFIG += stl_off
CONFIG += rtti_off

CONFIG(debug, debug|release) LIBS += -L../QHTTP/debug -lQHTTP
CONFIG(release, debug|release) LIBS += -L../QHTTP/release -lQHTTP

INCLUDEPATH += ../QHTTP/include

CONFIG += depend_includepath

SOURCES += main.cpp
