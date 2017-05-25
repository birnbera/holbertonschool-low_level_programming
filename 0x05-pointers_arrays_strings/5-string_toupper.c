/**
 * string_toupper - convert lowercase letters to uppercase
 * @s: string to convert
 *
 * Return: pointer to `s'
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 'a' - 'A';
		++i;
	}
	return (s);
}
