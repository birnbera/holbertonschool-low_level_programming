/**
 * _strchr - locate character `c' in string `s'
 * @s: string to search
 * @c: character to search for
 *
 * Return: if `c' found, pointer to `s'; else, NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		++s;
	}
	return (0);
}
