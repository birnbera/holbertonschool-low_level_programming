/**
 * set_bit - set value of bit in `n' at index `index' to 1.
 * @n: pointer to number to set
 * @index: index to set
 *
 * Return: 1 if it is possible with `index', or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
