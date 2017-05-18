#include <stdio.h>

/**
 * main - print 1 to 100 with multiples of 3 and 5 replaced as described below
 *
 * Description: replace multiples of 3 with 'Fizz', multiples of 5 with 'Buzz'
 * and multiples of both 3 and 5 with 'FizzBuzz'
 *
 * Return: 0 always
 */
int main(void)
{
	int i;

	printf("1");
	for (i = 2; i <= 100; ++i)
	{
		if (!(i % 3) && !(i % 5))
			printf(" FizzBuzz");
		else if (!(i % 3))
			printf(" Fizz");
		else if (!(i % 5))
			printf(" Buzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
