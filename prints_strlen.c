#include "main.h"

/**
 * _strlen - prints length of a string
 * @str: string pointer
 * 
 * Return: 1 if successful
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlen - applied for constant pointer str
 * @str: pointer to char
 *
 * Return: 1
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
