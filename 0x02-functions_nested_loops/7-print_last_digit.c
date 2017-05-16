#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	n = (n < 0 ? -1 * n : n) % 10;
	_putchar(n + '0');
	return (n);
}
