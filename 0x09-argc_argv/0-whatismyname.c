#include <stdio.h>

/**
 * main - print name of program followed by new line
 * @argc: number of arguments to program
 * @argv: array of pointers to each command line argument
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)(argc);
	printf("%s\n", argv[0]);
	return (0);
}
