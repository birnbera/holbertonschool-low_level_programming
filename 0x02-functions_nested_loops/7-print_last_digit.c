#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: number to get last digit of
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int r;

	r = (n < 0 ? -1 * n : n);
	r %= 10;
	_putchar(r + '0');
	return (n % 10);
}
