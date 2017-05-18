#include "holberton.h"

/**
 * print_diagonal - draw a diagonal line using '\' of length n
 * @n: length of diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			j = i;
			while (j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
