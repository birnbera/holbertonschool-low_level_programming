#include "holberton.h"

/**
 * print_number - print an integer as a string char by char
 * @n: int to print
 */
void print_number(int n)
{
	int sign = (n < 0 ? -1 : 1);
	if (!(n / 10))
	{
		if (sign < 0)
			_putchar('-');
		_putchar(n * sign + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 * sign + '0');
	}
}
