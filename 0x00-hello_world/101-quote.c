#include <stdio.h>

/**
 * main - write quote to stderr using fwrite
 *
 * Return: 1 always
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quote, 1, sizeof(quote), stderr); /* stderr is a file under linux */
	return (1);
}
