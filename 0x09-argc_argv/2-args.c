#include <stdio.h>

/**
 * main - print all arguments to main
 * @argc: number of args
 * @argv: array of pointers to command line args
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
