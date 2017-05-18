#include "holberton.h"

/**
 * print_numbers - print numbers 0 to 9
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
		_putchar(n);
	_putchar('\n');
}
