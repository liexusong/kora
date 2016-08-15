#include <stdlib.h>

void *
kr_malloc(size_t size)
{
    void *ret;

    ret = malloc(size);
    if (!ret) {
        return NULL;
    }

    return ret;
}

void *
kr_realloc(void *ptr, size_t size)
{
    void *ret;

    ret = realloc(ptr, size);
    if (!ret) {
        return NULL;
    }

    return ret;
}

void
kr_free(void *ptr)
{
    if (ptr) {
        free(ptr);
    }
}
