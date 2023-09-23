#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>


#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format..
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int result_print(const char *fmt, int *i,
		va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int printable(char c);
int append_hexadecimal(char ascii, char input[], int m);
int if_digit(char c);
long int convert_number_size(long int n, int size);

/* Functions to print numbers */
int cat_binary(va_list types, char buffer[],
		int width, int precision, int flags, int size);
long int convert_size_unsigned(unsigned long int m, int size);
int handle_char_insert(char c, char input[],
		int flags, int width, int precribe, int size);
int number_print(int negative, int ins, char buff[],
		int width, int precision, int size, int flags);
int write_number(int ins, char buff[],
		int flags, int prec, int width,
		int length, char extra_c, char pad);
int write_unsigned(int negative, int ins,
		char buffer[],
		int flags, int width, int precision, int size);
int cat_pointer(char buffer[], int ind, int length,
		int width, char pad, char extra, int flags, int padd_start);
int putchar(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int cat_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int cat_percent(va_list types, char buffer[],
		int width, int precision, int size, int flags);
int cat_int(va_list types, char buffer[],
		int width, int precision, int flags, int size);

int cat_binary(va_list types, char buffer[],
		int width, int precision, int flags, int size);
int cat_unsigned(va_list types, char buff[],
		int flags, int width, int precision, int size);
int print_octa(va_list types, char buff[],
		int flags, int width, int precision, int size);
int print_hexadecimals(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int cat_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexas(va_list types, char map_to[], char buffer[],
		int flags, char flag_ch, int width, int precision, int size);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size);
void show_buffer(char buffer[], int *buff_ind);
int _printfinput(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);

#endif
