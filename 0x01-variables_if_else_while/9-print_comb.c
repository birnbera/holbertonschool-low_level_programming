#include <stdio.h>

/**
 * main - print all single digit numbers separated by a comma
 *
 * Return: 0 always
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
