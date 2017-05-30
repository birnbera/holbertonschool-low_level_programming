#include <stdio.h>

/**
 * print_diagsums - print sum of left and right diagonals of matrix `a'
 * @a: matrix of ints
 * @size: size of `a'
 */
void print_diagsums(int *a, int size)
{
	int i, j, suml = 0, sumr = 0;

	for (i = 0; i < size; ++i)
		suml += (a + i * size)[i];
	for (j = 0; j < size; ++j)
		sumr += (a + j * size)[--i];
	printf("%d, %d\n", suml, sumr);
}
