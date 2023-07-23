#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UNUSED(x) void(x)
#define BUFF_SIZE 1024

int _printf(const char *format, ...);
ssize_t write(int fd, const void *buf size_t count);
void *malloc(size_t size);
void free(void *ptr);
void va_start(va_list ap, last_arg);
void va_end(va_list ap);
void va_copy(va_list dest, va_list src);
type va_arg(va_list ap, type);

#endif
