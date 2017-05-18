#include "holberton.h"

void print_numbers_no_nl(void);

/**
 * more_numbers - print 0 to 14, 10 times with newline
 */
void more_numbers(void)
{
	char i, c;

	for (i = 0; i < 10; ++i)
	{
		print_numbers_no_nl();
		for (c = 10; c <= 14; ++c)
		{
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}

/**
 * print_numbers_no_nl - print 0 to 9, without newline
 */
void print_numbers_no_nl(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		_putchar(c);
}
