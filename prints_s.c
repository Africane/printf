i#include "main.h"

/**
 * printf_string - prints a string
 * @val: argument
 *
 * Return: length of a string
 */

int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	length = _strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
		return (length);
	} else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
		{
			_putchar(str[i]);
			return (length);
		}
	}
}
