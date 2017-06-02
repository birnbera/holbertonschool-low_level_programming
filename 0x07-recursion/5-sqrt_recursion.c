/**
 * _sqrt_inner - recursively compute square root of perfect square
 * @n: number to get root of
 *
 * Return: sqrt(n) if n is a perfect square, or the root of square below `n'
 */
int _sqrt_inner(int n)
{
	int m;

	if (n == 1)
		return (1);
	m = _sqrt_inner(n - 1);
	if (n % m)
		return (m);
       	return (n / m);
}

/**
 * _sqrt_recursion - compute natural square root of `n'
 * @n: number to get square root of
 *
 * Return: sqrt(n) if n has a natural square root, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	int m;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	m = _sqrt_inner(n);

	if (m * m == n)
		return (m);
	else
		return (-1);
}
