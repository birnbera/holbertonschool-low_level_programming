#include <stdio.h>

/**
 * main - print all combinations of 2 2 digit numbers separated by commas
 *
 * Return: 0 always
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	while (a <= 98)
	{
		while (b <= 99)
		{
			putchar('0' + a / 10);
			putchar('0' + a % 10);
			putchar(' ');
			putchar('0' + b / 10);
			putchar('0' + b % 10);
			if (b != 99 || a != 98)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');
	return (0);
}
