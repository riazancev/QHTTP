#ifndef QHTTP_HTTPCLIENT_PRIVATE_H
#define QHTTP_HTTPCLIENT_PRIVATE_H

#include <QtCore/qobject.h>

#include <QtNetwork/qtcpsocket.h>

namespace QHTTP {

class HttpClient;

class HttpClientPrivate : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpClientPrivate)

    HttpClient *q;

    QTcpSocket *mSocket;

    friend class HttpClient;

private slots:

    void readyRead();
    void error(QAbstractSocket::SocketError);
    void disconnected();

public:

    explicit HttpClientPrivate(HttpClient *q, QObject *parent = Q_NULLPTR);
    explicit HttpClientPrivate(QTcpSocket *socket, QObject *parent = Q_NULLPTR);

    ~HttpClientPrivate();
};

}

#endif // QHTTP_HTTPCLIENT_PRIVATE_H
