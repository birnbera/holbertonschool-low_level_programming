#include "holberton.h"

/**
 * _print_binary - recursively print rightmost bit of non-zero number
 * in its binary representation.
 * @n: number to print
 */
void _print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	_print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - print the binary representation of a number `n'
 * @n: number to represent
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		_print_binary(n);
}
