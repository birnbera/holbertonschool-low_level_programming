/**
 * _strncat - copy at most `n' bytes from `src' to `dest'
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		++i;
	while (n-- && (dest[i++] = src[j++]))
		dest[i] = '\0';
	return (dest);
}
