/**
 * _memset - set `n' bytes beginning at `s' equal to value `b'
 * @s: pointer to beginning of array
 * @b: ascii value of character to set
 * @n: number of consecutive bytes to set
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;
	return (s);
}
