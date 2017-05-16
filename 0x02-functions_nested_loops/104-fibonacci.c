#include <stdio.h>
#define FIB_MAX 98
#define MAXVAL 100000000000

void print_in_parts(unsigned long int, unsigned long int);

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

	print_in_parts(n1a, n1b);
	for (count = 1; count < FIB_MAX; count++)
	{
		printf(", ");
		print_in_parts(n2a, n2b);
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

void print_in_parts(unsigned long int a, unsigned long int b)
{
	if (a)
		printf("%lu%lu", a, b);
	else
		printf("%lu", b);
}
