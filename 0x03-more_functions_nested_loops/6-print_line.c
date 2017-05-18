#include "holberton.h"

/**
 * print_line - print a line using '_' n-times
 * @n: number of times to print '_'
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
		_putchar('_');
	_putchar('\n');
}
