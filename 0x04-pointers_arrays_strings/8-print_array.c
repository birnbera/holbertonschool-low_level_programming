#include <stdio.h>

/**
 * print_array - Print 'n' elements of array, 'a'
 * @a: Array to print
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", *a++);
		while (--n > 0)
			printf(", %d", *a++);
	}
	printf("\n");
}
