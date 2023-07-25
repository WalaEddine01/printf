#include "main.h"
/**
 * _printf - prints Anything
 * @format: list of args types passed to the function
 * Return: the number of charaters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, a = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0' || (format[i] != 'c' && format[i] != 's'
		&& format[i] != '%' && format[i] != 'd' && format[i] != 'i'))
				{
				a = a + printchar('%');
				continue;
				return (-1);
				}
			switch (format[i])
			{
				case '%':
					a = a + printchar('%');
					break;
				case 'c':
					a = a + printchar(va_arg(arg, int));
					break;
				case 's':
					a = a + printstring(va_arg(arg, char *));
					break;
				case 'd':
				case 'i':
					a = a + printint(va_arg(arg, int));
					break;
				default:
					a = a + printchar(format[i]);
					break;
			}
		}
		else
			a = a + printchar(format[i]);
		i++;
	}
	va_end(arg);
	return (a);
}
