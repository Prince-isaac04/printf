#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int cat_number(long num, int count);
int _output(char c);
int cr_handler(va_list set);
int dr_handler(va_list set);
int put_handle(va_list set);
int _printf(const char *format, ...);
int (*pick(char str))(va_list set);




#endif
