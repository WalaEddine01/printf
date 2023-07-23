#include "main.h"
/**
 * printchar - prints a character
 * @a: character to print
 * Return: void
*/
void printchar(int a)
{
	write(1, &a, 1);
}
/**
 * printstring - prints a a string
 * @s: string to print
 * Return: void
*/
void printstring(char *s)
{
	write(1, s, strlen(s));
}
/**
 * printint - prints an int
 * @a: int to print
 * Return: void
*/
void printint(int a)
{
	char c;
	char max[] = "2147483647";
	char min[] = "-2147483648";
	int i = 0, temp = a, b = 1;
	if (a == INT_MAX)
	{
		write(1, max, sizeof(max) - 1);
		return;
	}
	if (a == INT_MAX)
	{
		write(1, min, sizeof(min) - 1);
		return;
	}
	if (a >= 0 && a <= 9)
	{
		c = a + '0';
		write(1, &c, 1);
		return;
	}
	if (a <= -1 && a >= -9)
	{
		write(1, "-", 1);
		a = -a;
		c = a + '0';
		write(1, &c, 1);
		return;
	}
	if (a >= 10)
	{
		while (temp > 0)
		{
			temp = temp / 10;
			i++;
		}
		while (i > 0)
		{
			b = b * 10;
			i--;
		}
		while (b > 1)
		{
			b = b / 10;
			c = a / b;
			c = c + '0';
			write(1, &c, 1);
			a = a % b;
		}
		return;
	}
	if (a < -9)
	{
		while (temp < 0)
		{
			temp = temp / 10;
			i++;
		}
		while (i > 0)
		{
			b = b * 10;
			i--;
		}
		write(1, "-", 1);
		while (b > 1)
		{
			b = b / 10;
			c = a / b;
			c = -c;
			c = c + '0';
			write(1, &c, 1);
			a = a % b;
		}
		return;
	}
}
/**
 * printfloat - prints a float number
 * @b: float to print
 * Return: void
*/
/*void printfloat(double b)
{
	return;
}*/
