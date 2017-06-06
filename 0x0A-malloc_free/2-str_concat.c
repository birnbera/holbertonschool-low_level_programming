#include <stdlib.h>

/**
 * str_concat - concatenate `s1' and `s2' and return pointer to new string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated strings, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;

	char *p = malloc((i + j + 1) * sizeof(char));

	if (p == NULL)
		return (p);
	*(p + i + j) = '\0';
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	return (p - i - j);
}
