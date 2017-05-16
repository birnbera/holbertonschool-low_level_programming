#include <stdio.h>

/**
 * main - print sum of even valued fibonacci numbers below 4,000,001
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int tmp, sum = 0;

	while (n1 <= 4000000)
	{
		sum += (n1 % 2 ? 0 : n1);
		tmp = n1;
		n1 = n2;
		n2 += tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
