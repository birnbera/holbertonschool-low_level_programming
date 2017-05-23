#include "holberton.h"

/**
 * puts2 - Print every other character of 'str'
 * @str: String to print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
	{
		if (!(i % 2))
			_putchar(*(str + i));
	}
	_putchar('\n');
}
