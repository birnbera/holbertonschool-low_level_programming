#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of `main' function up to specified number of bytes
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: EXIT_SUCCESS, or 1 if failure
 */
int main(int argc, char *argv[])
{
	short nbytes, i;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		puts("Error");
		exit(2);
	}
	if (nbytes == 0)
	{
		putchar('\n');
		exit(EXIT_SUCCESS);
	}
	printf("%02x", *((unsigned char *) (main)));
	for (i = 1; i < nbytes; ++i)
		printf(" %02x", *((unsigned char *) (main + i)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
