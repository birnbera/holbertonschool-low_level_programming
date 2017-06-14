#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - return result of desired calculation from command line options
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: EXIT_SUCCESS on success, 98 for wrong number of arugments,
 * 99 for invalid operation, 99 for division/modulus by 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		puts("Error");
		exit(100);
	}
	result = get_op_func(argv[2])(a, b);
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
