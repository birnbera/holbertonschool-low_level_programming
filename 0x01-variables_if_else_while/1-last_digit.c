#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - get random int and compare last digit to 0, 5 and 6
 *
 * Return: 0 always
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and", n, n % 10);
	if (n % 10  == 0)
		printf(" is 0\n");
	else if (n % 10 > 5)
		printf(" is greater than 5\n");
	else
		printf(" is less than 6 and not 0\n");
	return (0);
}
