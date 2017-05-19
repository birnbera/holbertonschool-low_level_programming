#include <stdio.h>
#include <math.h>

#define NUM 612852475143

/**
 * main - find and print largest prime factor of NUM
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int n = NUM;
	unsigned long int div = 2;

	while (div < n)
	{
		while (!(n % div))
			n /= div;
		++div;
	}
	printf("%lu\n", n);
	return (0);
}
