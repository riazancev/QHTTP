CONFIG += qt

QT += core
QT -= gui
QT += network

TEMPLATE = lib

CONFIG += shared
CONFIG += dll

TARGET = QHTTP

CONFIG += c++11

CONFIG += exceptions
CONFIG += stl_off
CONFIG += rtti_off

DEFINES += QHTTP_LIBRARY

INCLUDEPATH += include/QHTTP
INCLUDEPATH += src/private/include

CONFIG += depend_includepath

HEADERS += include/QHTTP/global.h

HEADERS += include/QHTTP/httpserver.h

SOURCES += src/httpserver.cpp

HEADERS += src/private/include/httpserver_p.h

SOURCES += src/private/httpserver_p.cpp
