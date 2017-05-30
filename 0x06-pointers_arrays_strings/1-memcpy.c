/**
 * _memcpy - copy `n' bytes from `src' into `dest'
 * @dest: pointer to beginning of `dest' array
 * @src: pointer to beginnin of `src' array
 * @n: number of bytes to copy
 *
 * Return: point to `dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		dest[i] = src[i];
	return (dest);
}
