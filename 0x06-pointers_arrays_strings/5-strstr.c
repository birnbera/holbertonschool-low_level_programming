/**
 * _strstr - locate first occurrence of `needle' in `haystack'
 * @haystack: string to search
 * @needle: string to search for
 *
 * Return: pointer to beginning of substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; ++i)
	{
		for (j = 0; needle[j]; ++j)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (0);
}
