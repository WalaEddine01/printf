#include "main.h"
/**
 * printchar - prints a character
 * @a: character to print
 * Return: void
*/
int printchar(int a)
{
	if (a)
	{
		write(1, &a, 1);
		return (1);
	}
	else
		return (0);
}
/**
 * printstring - prints a a string
 * @s: string to print
 * Return: void
*/
int printstring(char *s)
{
	if (s == 0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, s, _strlen(s));
	return (_strlen(s));
}
/**
 * printint - prints an int
 * @a: int to print
 * Return: void
 */
int printint(int a)
{
	char num_string[10];
	int i = 0;
	int j;

	if (a == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
		i++;
	}
	while (a != 0)
	{
		num_string[i] = '0' + (a % 10);
		a /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &num_string[j], 1);
	}
	return (a);
}
