#include "main.h"
/**
 * _printf - prints Anything
 * @format: list of args types passed to the function
 * Return: the number of charaters printed
 */
int _printf(const char *format, ...)
{
  /*int a = _strlen(format), i = 0;*/ 
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
				  /*printstring(va_arg(arg, char *));*/
				        str = va_arg(arg, char*);
					a = a + _strlen(str);
					write(1, str, _strlen(str));
					break;
					/*case '%':
					write(1, &format[i], 1);
					break;*/

				case 'd':
				case 'i':
				  /*printint(va_arg(arg, int));*/
				        a += printint(va_arg(arg, int));
					break;
				default:
				  printchar('%');
				  printchar(format[i]);
				  a = a + 2;
				  /*write(1, &format[i], 1);*/
			}
			i++;
		}
		else
		{
		  /*write(1, &format[i], 1);
		    i++;*/
		  
		  printchar(format[i]);
		  a++;
		  i++;
		}
	}
	va_end(arg);
	return (a);
}
