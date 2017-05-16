#include <stdio.h>
#define FIB_MAX 98
#define MAXVAL 100000000000

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0 always
 */
int main(void)
{
	int count;
	unsigned long int n1a, n1b, n2a, n2b, tmpa, tmpb;

	n1a = n2a = tmpa = tmpb = 0;
	n1b = 1;
	n2b = 2;

	if (n1a)
		printf("%lu%0*lu", n1a, 11, n1b);
	else
		printf("%lu", n1b);

	for (count = 1; count < FIB_MAX; count++)
	{
		printf(", ");
		if (n2a)
			printf("%lu%0*lu", n2a, 11, n2b);
		else
			printf("%lu", n2b);
		tmpa = n1a;
		tmpb = n1b;
		n1a = n2a;
		n1b = n2b;
		n2a += tmpa;
		n2b += tmpb;
		n2a += n2b / MAXVAL;
		n2b %= MAXVAL;
	}
	printf("\n");
	return (0);
}
