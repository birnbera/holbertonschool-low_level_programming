#include "holberton.h"

/**
 * print_alphabet - print alphabet in lowercase followed by newline
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
