#include "holberton.h"

/**
 * print_triangle - print a triangle using '#' of height *size*
 * @size: height of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = size - i; j > 0; --j)
				_putchar(' ');
			for (k = 0; k < i; ++k)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
