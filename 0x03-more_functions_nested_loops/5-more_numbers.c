#include "holberton.h"

/**
 * more_numbers - print 0 to 14, 10 times with newline
 */
void more_numbers(void)
{
	char i, c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 0; c <= 14; ++c)
		{
			if (c > 9)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
