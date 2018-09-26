#ifndef QHTTP_HTTPCLIENT_H
#define QHTTP_HTTPCLIENT_H

#include "global.h"

#include <QtCore/qcompilerdetection.h>
#include <QtCore/qobject.h>

namespace QHTTP {

class HttpClientPrivate;

class QHTTP_API HttpClient : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(HttpClient)

    HttpClientPrivate *d;

public:

    explicit HttpClient(QObject *parent = Q_NULLPTR);
    explicit HttpClient(HttpClientPrivate *d, QObject *parent = Q_NULLPTR);

    ~HttpClient();
};

}

#endif // QHTTP_HTTPCLIENT_H
