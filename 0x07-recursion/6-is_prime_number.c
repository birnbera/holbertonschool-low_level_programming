/**
 * is_prime - recursively perform trial division
 * @n: number to test
 * @div: current divisor
 *
 * Return: 0 if cleanly divides, is_prime(n, div + 2) otherwise
 */
int is_prime(int n, int div)
{
	if (div == n)
		return (div);
	if (n % div == 0)
		return (0);
	return (is_prime(n, div + 2));
}

/**
 * is_prime_number - tests whether `n' is prime
 * @n: number to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (!(n % 2))
		return (0);
	if (is_prime(n, 3))
		return (1);
	return (0);
}
