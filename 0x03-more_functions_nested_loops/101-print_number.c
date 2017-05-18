#include "holberton.h"

/**
 * print_number - print an integer character by character
 * @n: integer to print
 */
void print_number(int n)
{
	int m = (n < 0 ? -1 : 1);

	if (n * m < 10)
	{
		if (m == -1)
			_putchar('-');
		_putchar(n * m + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 * m + '0');
	}
}
