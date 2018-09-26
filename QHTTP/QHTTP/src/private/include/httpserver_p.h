#ifndef QHTTP_HTTPSERVER_PRIVATE_H
#define QHTTP_HTTPSERVER_PRIVATE_H

#include <QtCore/qobject.h>

#include <QtNetwork/qtcpserver.h>

namespace QHTTP {

class HttpServer;

class HttpServerPrivate : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpServerPrivate)

    HttpServer *q;

    QTcpServer *mServer;

private slots:

    void newConnection();

public:

    explicit HttpServerPrivate(HttpServer *q, QObject *parent = Q_NULLPTR);
    ~HttpServerPrivate();

public:

    bool listen(const QHostAddress &address = QHostAddress::Any, quint16 port = 0);
    void close();
};

}

#endif // QHTTP_HTTPSERVER_PRIVATE_H
