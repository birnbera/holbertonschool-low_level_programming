#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to get last digit of
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	n %= 10;
	n = (n < 0 ? -1 * n : n);
	_putchar(n + '0');
	return (n);
}
