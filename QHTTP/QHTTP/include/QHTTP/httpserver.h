#ifndef QHTTP_HTTPSERVER_H
#define QHTTP_HTTPSERVER_H

#include "global.h"

#include <QtCore/qcompilerdetection.h>
#include <QtCore/qobject.h>

#include <QtNetwork/qhostaddress.h>

namespace QHTTP {

class HttpClient;

class HttpServerPrivate;

class QHTTP_API HttpServer : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpServer)

    HttpServerPrivate *d;

signals:

    void newConnection(HttpClient *client);

public:

    explicit HttpServer(QObject *parent = Q_NULLPTR);
    ~HttpServer();

public:

    bool listen(const QHostAddress &address = QHostAddress::Any, quint16 port = 0);
    void close();
};

}

#endif // QHTTP_HTTPSERVER_H
