#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chard = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			/* Move to the char after '%'*/
			format++;

			switch (*format)
			{
				case 'c':
					/*Handle %c - character*/
					{
						char c = (char)va_arg(args, int);
						write(1, &c, 1);
						printed_chars++;
					}
					break;

				case 's':
					/*Handle %s - string*/
					{
						char *str = va_arg(args, char *);
						while (*str != '\0')
						{
							write(1, str, 1);
							str++;
							printed_chars++;
						}
					}
					break;

				case '%':
					/*Handle %% - percent sign*/
					write(1, "%", 1);
					printed_chars++;
					break;

				default
					/*Ignore unsupported format specifiers*/
					break;
			}
		} else 
		{
			/*Regular character, not a format specifier*/
			write(1, format, 1);
			printed_chars++;
		}

		/*Move to the next character in teh format string*/
		format++;
	}

	va_end(args);

	return (printed_chars);
}
