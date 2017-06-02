/**
 * is_prime_number - tests whether `n' is prime
 * @n: number to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int m;

	if (n <= 1)
		return (0);
	if (!(n % 2))
		return (0);
	m = is_prime_number(n - 2);
	return(m & is_prime_number(n - 4) == 0);
}
