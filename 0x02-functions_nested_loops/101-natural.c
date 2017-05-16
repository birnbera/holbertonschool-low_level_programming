#include <stdio.h>
#define MAX 1024

/**
 * main - print sum of multiples of 3 or 5 below 1024
 *
 * Return: 0 always
 */
int main(void)
{
	int s = 0, i;

	for (i = 1; i < MAX; i++)
		s += (!(i % 3 && i % 5) ? i : 0);
	printf("%d\n", s);
	return (0);
}
