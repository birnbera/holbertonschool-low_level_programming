/**
 * get_endianness - Checks endianness of processor
 *
 * Return: 0 if cpu is beg endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1, *p;

	p = &i;
	return (*((char *) p));
}
