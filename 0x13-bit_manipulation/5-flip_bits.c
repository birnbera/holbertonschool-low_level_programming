/**
 * flip_bits - compute number of bits that differ between `n' and `m'
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b = 0;

	n = n ^ m;
	while (n)
	{
		n &= (n - 1);
		++b;
	}
	return (b);
}
