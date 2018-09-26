#ifndef APPLICATION_H
#define APPLICATION_H

#include <QHTTP/httpserver.h>
#include <QHTTP/httpclient.h>

#include <QtCore/qcoreapplication.h>

class Application : public QCoreApplication
{
    Q_OBJECT
    Q_DISABLE_COPY(Application)

    QHTTP::HttpServer *mServer;

private slots:

    void newConnection(QHTTP::HttpClient *client);

public:

    explicit Application(int &argc, char **argv);
    ~Application();
};

#endif // APPLICATION_H
