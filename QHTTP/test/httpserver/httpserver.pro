CONFIG += qt

QT += core
QT -= gui
QT += network
QT += testlib

TEMPLATE = app

CONFIG += console
CONFIG += testcase

DEFINES += QHTTP_LIBRARY

INCLUDEPATH += ../../QHTTP/include/QHTTP
INCLUDEPATH += ../../QHTTP/src/private/include

CONFIG += depend_includepath

HEADERS += ../../QHTTP/include/QHTTP/global.h

HEADERS += ../../QHTTP/include/QHTTP/httpclient.h
HEADERS += ../../QHTTP/include/QHTTP/httpserver.h

SOURCES += ../../QHTTP/src/httpclient.cpp
SOURCES += ../../QHTTP/src/httpserver.cpp

HEADERS += ../../QHTTP/src/private/include/httpclient_p.h
HEADERS += ../../QHTTP/src/private/include/httpserver_p.h

SOURCES += ../../QHTTP/src/private/httpclient_p.cpp
SOURCES += ../../QHTTP/src/private/httpserver_p.cpp

SOURCES += tst_httpserver.cpp
