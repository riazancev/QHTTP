#include "httpserver_p.h"

#include "httpserver.h"

namespace QHTTP {

HttpServerPrivate::HttpServerPrivate(HttpServer *q, QObject *parent) : QObject(parent)
{
    this->q = q;
}

HttpServerPrivate::~HttpServerPrivate()
{

}

}
