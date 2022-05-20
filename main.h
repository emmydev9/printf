#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _putchar(char c);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
int (*get(const char *s, int index))(va_list, char *, unsigned int);
int env(const char *s, int index);
int print_buf(char *buf, unsigned int nbuf);
int _printf(const char *format, ...);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i);

#endif
