#include "main.h"
/**
 * printchar - prints a character
 * @a: character to print
 * Return: void
*/
void printchar(int a)
{
	if (a == 0)
	{
		write(1, "", 1);
		return;
	}
	write(1, &a, 1);
}
/**
 * printstring - prints a a string
 * @s: string to print
 * Return: void
*/
void printstring(char *s)
{
	if (s == 0)
	{
		write(1, "(null)", 6);
		return;
	}
	write(1, s, strlen(s));
}
/**
 * printint - prints an int
 * @a: int to print
 * Return: void
 */
void printint(int a)
{
	char num_string[10];
	int i = 0;
	int j;

	if (a == 0)
	{
		write(1, "0", 1);
		return;
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
}
