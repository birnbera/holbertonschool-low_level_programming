/**
 * _strspn - get prefix bytes from `s' consisting of characters from `accept'
 * @s: string to check
 * @accept: characters to check for
 *
 * Return: number of bytes from `s' made only from `accept' characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
			{
				++n;
				break;
			}
		}
		if (!(accept[j]))
			return (n);
	}
	return (n);
}
