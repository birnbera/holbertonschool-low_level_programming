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
	int num1, num2, result;
	int (*op_func)(int, int);
	char *operator;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		puts("Error");
		exit(100);
	}
	op_func = get_op_func(operator);
	if (op_func == NULL)
	{
		puts("Error");
		exit(99);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
