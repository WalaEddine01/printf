#include "main.h"
/**
 * _printf - prints Anything
 * @format: list of args types passed to the function
 * Return: the number of charaters printed
 */
int _printf(const char *format, ...)
{
 
        int i = 0;
        int a = 0;
        char *str;
	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
		        i++;
			switch (format[i])
			{
				case 'c':
					printchar(va_arg(arg, int));
					a++;
					break;
				case 's':
				        str = va_arg(arg, char*);
					a = a + _strlen(str);
					write(1, str, _strlen(str));
					break;
				case 'd':
				case 'i':
				        a += printint(va_arg(arg, int));
					break;
				default:
				  printchar('%');
				  printchar(format[i]);
				  a = a + 2;

			}
			i++;
		}
		else
		{
		  printchar(format[i]);
		  a++;
		  i++;
		}
	}
	va_end(arg);
	return (a);
}
