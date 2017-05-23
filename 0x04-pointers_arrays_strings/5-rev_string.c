/**
 * rev_string - Reverse a string in place
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; *(s + i); i++)
		;
	j = 0;
	--i;
	while (j <= i)
	{
		tmp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = tmp;
		++j;
		--i;
	}
}
