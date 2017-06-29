/**
 * get_bit - compute value of bit in `n' at `index'
 * @n: number to compute bit value of
 * @index: index to check
 *
 * Return: value of bit at `index' or -1 if index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
