#include "httpclient_p.h"

namespace QHTTP {

HttpClientPrivate::~HttpClientPrivate()
{

}

HttpClientPrivate::HttpClientPrivate(HttpClient *q, QObject *parent) : QObject(parent)
{
    this->q = q;

    mSocket = new QTcpSocket(this);

    typedef void (QTcpSocket::*T)(QAbstractSocket::SocketError);

    connect(mSocket, &QTcpSocket::readyRead, this, &HttpClientPrivate::readyRead);
    connect(mSocket, static_cast<T>(&QTcpSocket::error), this, &HttpClientPrivate::error);
    connect(mSocket, &QTcpSocket::disconnected, this, &HttpClientPrivate::disconnected);
}

HttpClientPrivate::HttpClientPrivate(QTcpSocket *socket, QObject *parent) : QObject(parent)
{
    this->q = Q_NULLPTR;

    mSocket = socket;

    typedef void (QTcpSocket::*T)(QAbstractSocket::SocketError);

    connect(mSocket, &QTcpSocket::readyRead, this, &HttpClientPrivate::readyRead);
    connect(mSocket, static_cast<T>(&QTcpSocket::error), this, &HttpClientPrivate::error);
    connect(mSocket, &QTcpSocket::disconnected, this, &HttpClientPrivate::disconnected);
}

void HttpClientPrivate::readyRead()
{

}

void HttpClientPrivate::error(QAbstractSocket::SocketError)
{

}

void HttpClientPrivate::disconnected()
{

}

}
