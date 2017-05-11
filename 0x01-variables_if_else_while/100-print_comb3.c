#include <stdio.h>

/**
 * main - print all combinations of two digits
 *
 * Return: 0 always
 */
int main(void)
{
	int a = 0;
	int b = a + 1;

	while (a <= 8)
	{
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a < 8)
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
