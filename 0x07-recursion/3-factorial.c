/**
 * factorial - compute factorial of `n' recursively
 * @n: number to get factorial of
 *
 * Return: n-factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
