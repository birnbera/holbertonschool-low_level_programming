/**
 * reverse_array - reverse array `a' of length `n'
 * @a: array to reverse
 * @n: length of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < --n; ++i)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
