#include <QHTTP/httpserver.h>

#include <QtCore/qcoreapplication.h>

int main(int argc, char **argv)
{
    QCoreApplication app(argc, argv);

    QHTTP::HttpServer server;

    return app.exec();
}
