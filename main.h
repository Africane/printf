#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlen(const char *str);
int print_37(void);

#endif /* MAIN_H */
