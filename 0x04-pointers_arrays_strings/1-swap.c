/**
 * swap_int - swap the values of two int variables
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
