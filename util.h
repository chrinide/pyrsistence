#ifndef _UTIL_H_
#define _UTIL_H_

#include "includes.h"

#ifdef _WIN32
#define PATH_MAX MAX_PATH
#define PATH_SEP '\\'
#else
#define PATH_SEP '/'
#endif


void msgf(const char *, ...);
void serror(const char *);
char *path_combine(const char *, const char *);
int mk_dir(const char *);
void rm_dir(const char *);
int equal_objects(PyObject *, PyObject *);

#endif /* _UTIL_H_ */

