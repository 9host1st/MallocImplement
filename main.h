#ifndef _main_h_
#define _main_h_

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <errno.h>
#include <assert.h>
#include <stdarg.h>
#include <string.h>

#define ALIGNMENT 8
#define ALIGN(size) (((size) + (ALIGNMENT - 1)) & ~(ALIGNMENT - 1))
#define SIZE_T_SIZE (ALIGN(sizeof(size_t)));

void _malloc(size_t size);
void _free(void *ptr);

struct block {
	size_t size;
	bool free;
	struct block *next;
}


#endif
