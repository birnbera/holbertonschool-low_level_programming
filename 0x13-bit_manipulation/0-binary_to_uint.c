/**
 * binary_to_uint - convert string representation of binary number to uint
 * @b: string to convert
 *
 * Return: the converted number, or 0 if `b' is NULL or contains
 * symbols besides 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (n);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n *= 2;
		n += *b - '0';
		++b;
	}
	return (n);
}
