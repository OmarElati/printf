#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * struct convert - convert
 * @sym: char
 * @f: int
 */
struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert convert_t;



int _printf(const char *format, ...);
int _putchar(char c);
int get_func(const char s, va_list ap);


int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list args);
int print(const char *format, convert_t funcs[], va_list args);


#endif
