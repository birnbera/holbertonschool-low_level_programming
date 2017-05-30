/**
 * _strpbrk - locate first occurence of characters from `accept' in `s'
 * @s: string to search
 * @accept: characters to search for
 *
 * Return: pointer to first byte from `s' matching `accept', or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
