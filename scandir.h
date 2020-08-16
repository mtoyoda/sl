#ifndef SCANDIR_H_
#define SCANDIR_H_

#ifdef WIN32

#include <windows.h>

struct dirent
{
	char d_name[MAX_PATH];
};

typedef int(*filter_t)(const struct dirent*);
typedef int(*compar_t)(const struct dirent**, const struct dirent**);

int alphasort(const struct dirent**, const struct dirent**);

int scandir(const char *dirp, struct dirent ***namelist, filter_t filter, compar_t compar);

#else

#include <dirent.h>

#endif

#endif  // SCANDIR_H_
