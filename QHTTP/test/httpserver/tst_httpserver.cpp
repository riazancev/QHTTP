#include <QtNetwork/qtcpserver.h>
#include <QtNetwork/qtcpsocket.h>

#include <QtTest/qsignalspy.h>
#include <QtTest/qtest.h>
#include <QtTest/qtestcase.h>

#include "httpclient.h"
#include "httpserver.h"

#include "httpserver_p.h"

class HttpServerTest : public QObject
{
    Q_OBJECT

private slots:

    void testConnection();
};

class MyTcpServer : public QTcpServer
{
    Q_OBJECT

public:

    MyTcpServer(QObject *parent = Q_NULLPTR) : QTcpServer(parent) { }

    virtual QTcpSocket *nextPendingConnection() { return new QTcpSocket(); }
};

void HttpServerTest::testConnection()
{
    using namespace QHTTP;

    qRegisterMetaType<HttpClient *>();

    HttpServer *httpServer = new HttpServer();
    QTcpServer *tcpServer = new MyTcpServer();

    new HttpServerPrivate(tcpServer, httpServer);

    QSignalSpy spy(httpServer, &HttpServer::newConnection);

    emit tcpServer->newConnection();

    QCOMPARE(spy.count(), 1);
}

QTEST_APPLESS_MAIN(HttpServerTest)

#include "tst_httpserver.moc"
