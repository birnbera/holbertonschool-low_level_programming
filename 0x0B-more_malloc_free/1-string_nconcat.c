#include <stdlib.h>

/**
 * string_nconcat - concatenate `s1' and the first `n' bytes of `s2'
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from `s2'
 *
 * Return: pointer to concatenated strings, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	n = (n > j ? j : n);
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1 && s1[i]; ++i)
		p[i] = s1[i];
	for (j = 0; s2 && j < n; ++j)
		p[i + j] = s2[j];
	p[i + j] = '\0';
	return (p);
}
