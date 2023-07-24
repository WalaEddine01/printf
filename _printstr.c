#include "main.h"
/**
 * _printstr - print string to stdout.
 * @str: pointer to string.
 * Return: a string.
 */
int _printstr(char *str)
{
  int len = 0;
  if (str == NULL)
    {
      printchar('\0');
    }
  else
    {
      len = len + _strlen(str);
      write(1, str, _strlen(str));
    }
  return len;
}
