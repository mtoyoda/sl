#ifdef WIN32

#include "scandir.h"

#include <memory.h>
#include <string.h>
#include <windows.h>

int alphasort(const struct dirent **lhs, const struct dirent **rhs)
{
    return strcmp((*lhs)->d_name, (*rhs)->d_name);
}

struct dirlist
{
    struct dirent *entry;
    struct dirlist *next;
};

int scandir(const char *dirp, struct dirent ***namelist, filter_t filter, compar_t compar)
{
    int count = 0;
    HANDLE find = INVALID_HANDLE_VALUE;
    WIN32_FIND_DATAA data;
    
    struct dirlist node;
    struct dirlist *cur = &node;
    struct dirlist *ptr = &node;

    struct dirent** results = NULL;
    struct dirent** resultptr = NULL;

    ZeroMemory(&data, sizeof(data));
    ZeroMemory(&node, sizeof(node));

    find = FindFirstFileA(dirp, &data);
    if (INVALID_HANDLE_VALUE == find) {
        return 0;
    }

    do
    {
        struct dirent temp;
        ZeroMemory(&temp, sizeof(temp));
        strcpy(temp.d_name, data.cFileName);
        if (filter && !filter(&temp)) {
            continue;
        }

        if (!(cur->entry = malloc(sizeof(struct dirent)))) {
            break;
        }

        CopyMemory(cur->entry, &temp, sizeof(temp));
        if (!(cur->next = calloc(sizeof(struct dirlist), 1))) {
            break;
        }

        cur = cur->next;
        ++count;
    } while (FindNextFileA(find, &data));

    results = malloc(count * sizeof(struct dirent*));
    if (!results) {
        goto Error;
    }

    resultptr = results;
    do
    {
        *resultptr++ = ptr->entry;
        ptr->entry = NULL;
    } while (ptr = ptr->next);

    *namelist = results;
    results = NULL;

Error:
    free(results);

    ptr = node.next;
    while (ptr) {
        struct dirlist * tofree = ptr;
        ptr = ptr->next;

        free(tofree->entry);
        free(tofree);
    }

    return count;
}

#endif