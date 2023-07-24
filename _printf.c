#include "main.h"
/**
 * _printf - prints Anything
 * @format: list of args types passed to the function
 * Return: the number of charaters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int a = _strlen(format);
	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case '%':
					write(1, &format[i], 1);
					break;
				case 'c':
					printchar(va_arg(arg, int));
					break;
				case 's':
					printstring(va_arg(arg, char *));
					break;
				case 'd':
				case 'i':
					printint(va_arg(arg, int));
					break;
				default:
					write(1, &format[i], 1);
			}
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
		}
	}
	va_end(arg);
	return (a);
}
