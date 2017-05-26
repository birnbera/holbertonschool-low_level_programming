/**
 * _strncpy - copy at most `n' characters from `src' into `dest'
 * @dest: destination string
 * @src: source string
 * @n: number of characters
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((dest[i] = src[i]) && n)
		++i, --n;
	while (n--)
		dest[++i] = '\0';
	return (dest);
}
