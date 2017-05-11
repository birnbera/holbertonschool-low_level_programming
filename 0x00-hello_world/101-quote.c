#include <stdio.h>

/**
 * main - print quote to stderr
 *
 * Return: 1 to indicate output to stderr
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quote, 1, sizeof(quote), stderr);
	return (1);
}
