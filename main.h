#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int printchar(int a);
int printstring(char *s);
int printint(int a);
int _strlen(const char *s);

#endif /*MAIN_H*/
