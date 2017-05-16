#include "holberton.h"

/**
 * print_alphabet_x10 - print lowercase alphabet + newline x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char i, c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
	}
}
