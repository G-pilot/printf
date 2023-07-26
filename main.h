#ifndef MAIN_H
#define MAIN_H

/* C standard library header files */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*SIZES*/
#define S_LONG 2
#define S_SHORT 1

/** function prototypes */
void rot13_encrypt(char *str);
int _printf(const char *format, ...);
int put_str(char *string);
int put_int(int integer);
int _putchar(char c);


#endif
