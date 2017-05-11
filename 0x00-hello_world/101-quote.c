#include <stdlib.h>

/**
 * main - use system call to output quote to stderr
 *
 * Return: 1 always
 */
int main(void)
{
	system("echo \"and that piece of art is useful\\\" - Dora Korpar, 2015-10-19\" >&2");
	return (1);
}
