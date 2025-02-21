
#ifndef sodium_version_H
#define sodium_version_H

#include "export.h"

#define SODIUM_VERSION_STRING "1.0.12"

#define SODIUM_LIBRARY_VERSION_MAJOR 9
#define SODIUM_LIBRARY_VERSION_MINOR 4
#define SODIUM_LIBRARY_MINIMAL 1

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
const char *sodium_version_string(void);

SODIUM_EXPORT
int         sodium_library_version_major(void);

SODIUM_EXPORT
int         sodium_library_version_minor(void);

SODIUM_EXPORT
int         sodium_library_minimal(void);

#ifdef __cplusplus
}
#endif

#endif
