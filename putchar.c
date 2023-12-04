#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: 1 on succes, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
