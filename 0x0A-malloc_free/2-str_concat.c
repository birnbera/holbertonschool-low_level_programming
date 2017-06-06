#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate `s1' and `s2' and return pointer to new string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated strings, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *p;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	p = malloc((i + j + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	k = 0;
	for (i = 0; s1 && s1[i]; ++i, ++k)
		p[k] = s1[i];
	for (j = 0; s2 && s2[j]; ++j, ++k)
		p[k] = s2[j];
	p[k] = '\0';
	return (p);
}
