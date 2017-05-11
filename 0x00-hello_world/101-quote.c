#include <unistd.h>

#define quote "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"

/**
 * main - use system call to output quote to stderr
 *
 * Return: 1 always
 */
int main(void)
{
	write(STDERR_FILENO, quote, sizeof(quote) - 1);
	return (1);
}
