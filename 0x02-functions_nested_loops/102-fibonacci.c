#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int tmp, count;

	printf("%lu", n1);
	for (count = 1; count < 50; count++)
	{
		printf(", %lu", n2);
		tmp = n1;
		n1 = n2;
		n2 += tmp;
	}
	printf("\n");
	return (0);
}
