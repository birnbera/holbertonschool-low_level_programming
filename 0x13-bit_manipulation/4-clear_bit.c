/**
 * clear_bit - clear value of bit in `n' at `index'
 * @n: pointer to number to change
 * @index: index of bit to clear
 *
 * Return: 1 on success, -1 if `index' is out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ~(*n);
	*n |= 1 << index;
	*n = ~(*n);
	return (1);
}
