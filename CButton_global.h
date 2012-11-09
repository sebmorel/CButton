#ifndef CBUTTON_GLOBAL_H
#define CBUTTON_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CBUTTON_LIBRARY)
#  define CBUTTONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CBUTTONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CBUTTON_GLOBAL_H
