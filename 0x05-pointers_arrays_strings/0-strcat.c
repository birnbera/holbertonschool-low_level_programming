/**
 * _strcat - concatenate string `src' onto string `dest'
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string `dest'
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		++i;
	while ((dest[i] = src[j]))
		++i, ++j;
	return dest;
}
