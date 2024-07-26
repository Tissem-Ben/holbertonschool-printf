#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
void get_conv_func(char directive, va_list args, int *count);
void print_char(va_list args, int *count);
void print_string(va_list args, int *count);
void print_pourcentage(va_list args, int *count);
void print_integer(va_list args, int *count);
typedef struct specifier_struct
{
	char *specifier;
	void (*f)(va_list args, int *count);
} specifier_option;
#endif
