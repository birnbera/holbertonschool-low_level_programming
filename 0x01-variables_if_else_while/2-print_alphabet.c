#include <stdio.h>

/**
 * main - print a to z followed by newline
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'a';

	while (putchar(c++) < 'z')
		;
	putchar('\n');
	return (0);
}
