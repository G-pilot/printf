#ifndef MAIN_H
#define MAIN_H

#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
ssize_t write(int fd, const void *buf size_t count);
void *malloc(size_t size);
void free(void *ptr);
void va_start(va_list ap, last_arg);
void va_end(va_list ap);
void va_copy(va_list dest, va_list src);
type va_arg(va_list ap, type);

#endif
