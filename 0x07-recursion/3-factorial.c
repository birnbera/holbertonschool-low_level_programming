/**
 * factorial - compute factorial of `n' recursively
 * @n: number to get factorial of
 *
 * Return: n-factorial
 */
int factorial(int n)
{
	if (0 > n)
		return (-1);
	if (0 == n)
		return (1);
	return(n * factorial(n - 1));
}
