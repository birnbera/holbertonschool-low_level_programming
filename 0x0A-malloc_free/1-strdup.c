#include <stdlib.h>

/**
 * _strdup - copy `str' and return pointer
 * @str: string to copy
 *
 * Return: pointer to copy of `str', or NULL on failure
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (str);

	int i, j;
	char *dup;

	for (i = 0; str[i]; ++i)
		;
	dup = (char *) malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (dup);
	for (j = 0; j <= i; ++j)
		dup[j] = str[j];
	return (dup);
}
