#include "httpserver.h"

#include "httpserver_p.h"

namespace QHTTP {

HttpServer::HttpServer(QObject *parent) : QObject(parent)
{
    d = new HttpServerPrivate(this);
}

HttpServer::~HttpServer()
{
    delete d;
}

bool HttpServer::listen(const QHostAddress &address, quint16 port)
{
    return d->listen(address, port);
}

void HttpServer::close()
{
    d->close();
}

}
