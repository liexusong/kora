#ifndef __MM_H
#define __MM_H

void *kr_malloc(size_t size);
void *kr_realloc(void *ptr, size_t size);
void kr_free(void *ptr);

#endif
