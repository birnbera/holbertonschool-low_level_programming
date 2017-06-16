#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print `n' variable int arguments separated by `separator'
 * @separator: separator between ints
 * @n: number of variable arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int c = n;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	if (c--)
		printf("%d", va_arg(ap, int));
	while (c-- > 0)
		printf("%s%d", separator, va_arg(ap, int));
	putchar('\n');
	va_end(ap);
}
