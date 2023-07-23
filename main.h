#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
void printchar(int a);
void printstring(char *s);
void printint(int a);
void printfloat(double b);
int _strlen(const char *s);


#endif /*MAIN_H*/
