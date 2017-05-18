#include "holberton.h"

/**
 * print_most_numbers - print 0 to 9, except 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
		if (n != '2' && n != '4')
			_putchar(n);
	}
	_putchar('\n');
}
