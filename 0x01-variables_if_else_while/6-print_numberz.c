#include <stdio.h>

/**
 * main - print numberz 0 to 9
 *
 * Return: 0 always
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
