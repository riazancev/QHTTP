#ifndef QHTTP_HTTPSERVER_H
#define QHTTP_HTTPSERVER_H

#include "global.h"

#include <QtCore/qcompilerdetection.h>
#include <QtCore/qobject.h>

namespace QHTTP {

class HttpServerPrivate;

class QHTTP_API HttpServer : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpServer)

    HttpServerPrivate *d;

public:

    explicit HttpServer(QObject *parent = Q_NULLPTR);
    ~HttpServer();
};

}

#endif // QHTTP_HTTPSERVER_H
