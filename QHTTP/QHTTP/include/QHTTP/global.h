#ifndef QHTTP_GLOBAL_H
#define QHTTP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QHTTP_LIBRARY)
#  define QHTTP_API Q_DECL_EXPORT
#else
#  define QHTTP_API Q_DECL_IMPORT
#endif

#endif // QHTTP_GLOBAL_H
