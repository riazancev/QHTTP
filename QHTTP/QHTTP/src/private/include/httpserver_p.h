#ifndef QHTTP_HTTPSERVER_PRIVATE_H
#define QHTTP_HTTPSERVER_PRIVATE_H

#include <QtCore/qobject.h>

namespace QHTTP {

class HttpServer;

class HttpServerPrivate : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpServerPrivate)

    HttpServer *q;

public:

    explicit HttpServerPrivate(HttpServer *q, QObject *parent = Q_NULLPTR);
    ~HttpServerPrivate();
};

}

#endif // QHTTP_HTTPSERVER_PRIVATE_H
