#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
