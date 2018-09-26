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

}
