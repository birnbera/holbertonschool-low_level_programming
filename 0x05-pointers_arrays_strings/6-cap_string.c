#define IN  0
#define OUT 1

/**
 * cap_string - capitalize all words of string `s'
 * @s: string to capitalize
 *
 * Description: Capitalize all words; words can be separated by
 * whitespace, `,', `;', `.', `!', `?', `"', `(', `)', `{', and `}'.
 *
 * Return: Pointer to `s'.
 */
char *cap_string(char *s)
{
	char c, seps[] = "\t\n !?(){},.;\"";
	int new_word = OUT, i, j;

	for (i = 0; (c = s[i]); ++i)
	{
		if (c >= 'a' && c <= 'z' && new_word)
		{
			new_word = IN;
			s[i] = c - ('a' - 'A');
		}
		else if (new_word &&
			 ((c >= 'A' && c <= 'Z') ||
			  (c >= '0' && c <= '9')))
			new_word = IN;
		else
		{
			for (j = 0; seps[j]; ++j)
			{
				if (c == seps[j])
				{
					new_word = OUT;
					break;
				}
			}
		}
	}
	return (s);
}
