/**
 * leet - convert string into `1337' or `leet' internet speak
 * @s: string to convert
 *
 * Return: pointer to s
 */
char *leet(char *s)
{
	char c, l, uppers[] = "AEOTL", nums[] = "43071";
	int i, j;

	for (i = 0; (c = s[i]); ++i)
	{
		j = 0;
		while ((l = uppers[j]))
		{
			if (c == l || c == l + ('a' - 'A'))
			{
				s[i] = nums[j];
				break;
			}
			++j;
		}
	}
	return (s);
}
