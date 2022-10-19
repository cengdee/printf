#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_X(va_list X);
int print_S(va_list S);
int print_b(va_list b);
int print_c(va_list c);
int print_d(va_list i);
int print_i(va_list i);
int print_o(va_list o);
int print_p(va_list p);
int print_r(va_list r);
int print_R(va_list R);
int print_s(va_list s);
int print_u(va_list u);
int print_x(va_list x);

#endif
