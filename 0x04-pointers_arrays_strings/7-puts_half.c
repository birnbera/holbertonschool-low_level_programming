#include "holberton.h"

/**
 * puts_half - Print the second half of string 'str'
 * @str: String to print
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; *(str + i); i++)
		;
	j = (i + (i % 2)) / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
