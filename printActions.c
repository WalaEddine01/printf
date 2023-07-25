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
	{
		write(1, "\0", 1);
		return (-1);
	}
}
/**
 * printstring - prints a a string
 * @s: string to print
 * Return: void
*/
int printstring(char *s)
{
	if (s == NULL)
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
	char num_string[12];
	int i = 0, j;

	if (a == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (a == INT_MAX)
	{
		write(1, "2147483647", 10);
		return (10);
	}
	if (a == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (a < 0)
	{
		write(1, "-", 1);
		a *= -1;
	}
	while (a != 0)
	{
		num_string[i] = '0' + (a % 10);
		a /= 10;
		i++;
	}
	num_string[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &num_string[j], 1);
	}
	return (i);
}
