#include <stdlib.h>

/**
 * argstostr - concatenate strings pointed to by `av'
 * @ac: number of strings
 * @av: array of strings
 *
 * Return: point to new string, or NULL if failure
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);
	int i, j, k, totalbytes = 0;

	for (i = 0; i < ac; ++i)
	{
		for (j = 0; *(*(av + i) + j); ++j)
			;
		totalbytes += j;
		++totalbytes; /* space for newline */
	}
	++totalbytes; /* space for string terminator */

	char *p = malloc(totalbytes * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; ++i, ++k)
	{
		for (j = 0; *(*(av + i) + j); ++j, ++k)
			*(p + k) = *(*(av + i) + j);
		*(p + k) = '\n';
	}
	*(p + k + 1) = '\0';
	return (p);
}
