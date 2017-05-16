#include "holberton.h"

/**
 * print_times_table - print n x n times table
 * @n: size of times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, k, r;

		for (i = 0; i <= n; _putchar('\n'), i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				r = i * j;
				_putchar(' ');
				k = 100;
				while (!(r / k % 10) && k >= 10)
				{
					_putchar(' ');
					k /= 10;
				}
				while (k >= 1)
				{
					_putchar(r / k % 10 + '0');
					k /= 10;
				}
			}
		}
	}
}
