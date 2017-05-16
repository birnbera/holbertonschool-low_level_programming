#include <stdio.h>

/**
 * print_to_98 - print all numbers starting at n to 98
 * @n: number to start printing from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
		printf("%d, ", (n < 98 ? n++ : n--));
	printf("98\n");
}
