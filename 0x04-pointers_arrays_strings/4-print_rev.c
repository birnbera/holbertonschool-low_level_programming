#include "holberton.h"

/**
 * print_rev - print string in reverse with new line
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;
	--i;
	while (i >= 0)
	{
		_putchar(*(s + i));
		--i;
	}
	_putchar('\n');
}
