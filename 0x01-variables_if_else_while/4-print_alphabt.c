#include <stdio.h>

/**
 * main - print 'a' to 'z' except no 'q' or 'e'
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
