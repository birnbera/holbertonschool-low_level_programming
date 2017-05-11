#include <stdio.h>

/**
 * main - print all possible combination of 3 digits, no repeats
 *
 * Return: 0 always
 */
int main(void)
{
	int a = 0;
	int b = a + 1;
	int c = b + 1;

	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (c != 9 || b != 8 || a != 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
	putchar('\n');
	return (0);
}
