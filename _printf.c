#include "main.h"
/**
 * _printf - prints Anything
 * @format: list of args types passed to the function
 * Return: the number of charaters printed
 * Description: this function prints anything
 */
int _printf(const char *format, ...)
{
	int a, b, i;
	va_list arg;
	char *s;

	i = 0;
	a = strlen(format);
	va_start(arg, format);
	while(format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					b = va_arg(arg, int);
					write(1, &b, 1);
					break;
				case 's':
					s = va_arg(arg, char *);
					write(1, s, strlen(s));
					break;
				case '%':
					write(1, &format[i], 1);
					break;
				default:
					i++;
					continue;
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
