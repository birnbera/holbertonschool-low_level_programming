#include "holberton.h"

/**
 * _print_rev_recursion - print string in reverse recursively
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	if ('\0' == *s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
