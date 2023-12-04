#include "main.h"

/**
 * printf_char - prints a character
 * @val: arguments
 *
 * Return: 1 on success
 */

int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
