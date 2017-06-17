#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print value of variables of char, int, float or char * types
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	int i = 0;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			s = va_arg(ap, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			break;
		default:
			continue;
		}
		if (format[i])
			printf(", ");
	}
	putchar('\n');
}
