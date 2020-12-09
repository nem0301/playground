#ifndef __KERNEL_H__
#define __KERNEL_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char filename[256];
    char *kernel_code;
} kernel_code_t;

const char *
kernel_code_load(const char *filename);

#endif //__KERNEL_H__