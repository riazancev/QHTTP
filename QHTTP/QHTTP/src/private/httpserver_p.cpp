#include "httpserver_p.h"

#include "httpclient_p.h"

#include "httpclient.h"
#include "httpserver.h"

#include <QtNetwork/qhostaddress.h>
#include <QtNetwork/qtcpsocket.h>

namespace QHTTP {

HttpServerPrivate::~HttpServerPrivate()
{

}

HttpServerPrivate::HttpServerPrivate(QTcpServer *server, HttpServer *q, QObject *parent) : QObject(parent)
{
    this->q = q;

    mServer = server;
    connect(mServer, &QTcpServer::newConnection, this, &HttpServerPrivate::newConnection);
}

HttpServerPrivate::HttpServerPrivate(HttpServer *q, QObject *parent) : QObject(parent)
{
    this->q = q;

    mServer = new QTcpServer(this);
    connect(mServer, &QTcpServer::newConnection, this, &HttpServerPrivate::newConnection);
}

void HttpServerPrivate::newConnection()
{
    QTcpSocket *socket = mServer->nextPendingConnection();

    HttpClientPrivate *client = new HttpClientPrivate(socket);
    socket->setParent(client);

    emit q->newConnection(new HttpClient(client, this));
}

bool HttpServerPrivate::listen(const QHostAddress &address, quint16 port)
{
    return mServer->listen(address, port);
}

void HttpServerPrivate::close()
{
    mServer->close();
}

}
