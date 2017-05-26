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
	int i, j, k, tmp, carry, len1, len2;

/* Get length of `n1' */
	for (i = 0; n1[i]; ++i)
		;
	len1 = i;
/* Get length of `n2' */
	for (i = 0; n2[i]; ++i)
		;
	len2 = i;
/* While there's still room in `r' accumulate from `n1' and `n2' */
	for (carry = 0, i = 0; i < size_r - 1; ++i)
	{
		k = carry;
		if (len1)
			k += n1[--len1] - '0';
		if (len2)
			k += n2[--len2] - '0';
		if (!len1 && !len2 && !k)
		{
			r[i] = '\0';
			break;
		}
		carry = k / 10;
       		r[i] = k % 10 + '0';
       		r[i + 1] = '\0';
       	}
/* If at end of `r' and carry not `0' or not at end of `n1' or `n2', */
/* `r' is too small                                                  */
	if (carry || len1 || len2)
		return (0x0);
	for (i = 0; r[i]; ++i)
		;
	--i;
	for (j = 0; j < i; ++j, --i)
	{
		tmp = r[j];
		r[j] = r[i];
		r[i] = tmp;
	}
	return (r);
}
