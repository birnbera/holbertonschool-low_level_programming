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
	printf("%02x", *((unsigned char *) (main)));
	for (i = 1; i < nbytes; ++i)
		printf(" %02x", *((unsigned char *) (main + i)));
	printf("\n");
	exit(EXIT_SUCCESS);
}
