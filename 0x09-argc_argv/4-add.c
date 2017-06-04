#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sum over command line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, c, sum = 0;

	if (argc == 1)
	{
		puts("Error");
		return (1);
	}
	while (--argc)
	{
		++argv;
		for (i = 0; (c = *(*argv + i)) != '\0'; ++i)
		{
			if (!(isdigit(c)))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(*argv);
	}
	printf("%d\n", sum);
	return (0);
}
