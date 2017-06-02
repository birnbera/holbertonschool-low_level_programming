#include "holberton.h"

/**
 * _puts_recursion - print a string recursively
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if ('\0' == *s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
