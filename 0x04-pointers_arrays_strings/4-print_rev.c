#include "holberton.h"

/**
 * print_rev - print string in reverse with new line
 * @s: string to reverse
 */
void print_rev(char *s)
{
	int len;

	for (len = 1; *s; len++)
		++s;
	while (len--)
		_putchar(*s--);
	_putchar('\n');
}
