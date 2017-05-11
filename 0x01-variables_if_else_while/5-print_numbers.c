#include <stdio.h>

/**
 * main - print digits 0 to 9
 *
 * Return: 0 always
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
