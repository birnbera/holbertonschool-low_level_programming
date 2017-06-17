#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print `n' variable string arguments separated by `separator`
 * @separator: separator between string arguments
 * @n: number of variable string arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int c = n;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(ap, n);
	if (c)
	{
		s = va_arg(ap, char *);
		printf("%s", (s ? s : "(nil)"));
		--c;
	}
	while (c > 0)
	{
		s = va_arg(ap, char *);
		printf("%s%s", separator, (s ? s : "(nil)"));
		--c;
	}
	putchar('\n');
	va_end(ap);
}
