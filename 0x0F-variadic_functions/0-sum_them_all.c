#include <stdarg.h>

/**
 * sum_them_all - sum `n' int arguments
 * @n: number of variable arguments
 *
 * Return: sum of `n' arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int c = n;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (c--)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
