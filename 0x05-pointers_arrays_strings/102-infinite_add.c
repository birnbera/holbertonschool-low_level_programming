/**
 * get_hi - get highest index character array `s'
 * @s: character array to check
 *
 * Return: highest index
 */
int get_hi(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		;
	return (i);
}

/**
 * rev_str - reverse string `s' in place
 * @s: string to reverse
 * @hi: highest index (below '\0') in `s'
 */
void rev_str(char *s, int hi)
{
	int lo, tmp;

	for (lo = 0; lo < hi; ++lo, --hi)
	{
		tmp = s[lo];
		s[lo] = s[hi];
		s[hi] = tmp;
	}
}

/**
 * infinite_add - add `n1' and `n2' as though they were numbers
 * @n1: character string representing `n1'
 * @n2: character string representing `n2'
 * @r: uninitialized array of length `size_r' to hold result
 * @size_r: size of array `r'
 *
 * Description: Add unbounded numbers `n1' and `n2' and place result
 * in `r'. Assume positive numbers or `0' and that input strings will
 * be composed only of digits and will not be empty.
 *
 * Return: pointer to `r' or null pointer if result is too large for `r'
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, res, carry, len1, len2;

	len1 = get_hi(n1);
	len2 = get_hi(n2);
	for (carry = 0, i = 0; i < size_r - 1; ++i)
	{
		res = carry;
		if (len1 != 0)
			res += n1[--len1] - '0';
		if (len2 != 0)
			res += n2[--len2] - '0';
		if (len1 == 0 && len2 == 0 && res == 0)
		{
			r[i] = '\0';
			break;
		}
		carry = res / 10;
		r[i] = res % 10 + '0';
		r[i + 1] = '\0';
	}
	if (carry || len1 || len2)
		return (0x0);
	i = get_hi(r);
	rev_str(r, --i);
	return (r);
}
