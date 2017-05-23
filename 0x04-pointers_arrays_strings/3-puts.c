#include "holberton.h"

/**
 * _puts - print string followed by new line
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
