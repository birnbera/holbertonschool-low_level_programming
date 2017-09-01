/**
 * hash_djb2 - function to compute hash of `str` using djb2 algorithm.
 * @str: string to hash
 *
 * Return: value of 64 bit hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
