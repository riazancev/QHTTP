#include "httpclient.h"

#include "httpclient_p.h"

namespace QHTTP {

HttpClient::HttpClient(QObject *parent) : QObject(parent)
{
    d = new HttpClientPrivate(this);
}

HttpClient::HttpClient(HttpClientPrivate *d, QObject *parent) : QObject(parent)
{
    this->d = d;
    d->q = this;
}

HttpClient::~HttpClient()
{
    delete d;
}

}
