#include "application.h"

#include <QtCore/qdebug.h>

#include <QtNetwork/qhostaddress.h>

Application::~Application()
{

}

Application::Application(int &argc, char **argv) : QCoreApplication(argc, argv)
{
    mServer = new QHTTP::HttpServer(this);
    connect(mServer, &QHTTP::HttpServer::newConnection, this, &Application::newConnection);

    mServer->listen(QHostAddress("127.0.0.1"), 8080);
}

void Application::newConnection(QHTTP::HttpClient *client)
{
    qDebug() << "new connection";
    client->deleteLater();
}
