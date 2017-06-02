/**
 * _sqrt_inner - recursively compute square root of perfect square
 * @n: number to get root of
 * @i: guess
 *
 * Return: sqrt(n) if n is a perfect square, or the root of square below `n'
 */
int _sqrt_inner(int n, int i)
{
	if (i * i > n)
		return (i - 1);
	return (_sqrt_inner(n, i + 1));
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
	m = _sqrt_inner(n, 1);
	if (m * m == n)
		return (m);
	return (-1);
}
