#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers from command line
 * @argc: number of arguments
 * @argv: array of argumetns
 *
 * Return: 0 for success, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
