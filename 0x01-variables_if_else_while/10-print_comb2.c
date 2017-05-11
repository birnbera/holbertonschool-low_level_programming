#include <stdio.h>

/**
 * main - print all double digit numbers separated by a comma
 *
 * Return: 0 always
 */
int main(void)
{
	int a = '0';
	int b = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (b != '9' || a != '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		b = '0';
		a++;
	}
       	putchar('\n');
	return (0);
}
