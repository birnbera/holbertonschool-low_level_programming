#include "holberton.h"

/**
 * times_table - print times table up to 9 * 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; _putchar('\n'), i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			n = i * j;
			_putchar(' ');
			_putchar((n / 10 ? n / 10 + '0' : ' '));
       			_putchar(n % 10 + '0');
			if (j < 9)
				_putchar(',');
		}
	}
}
