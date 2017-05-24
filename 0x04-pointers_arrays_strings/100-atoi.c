/**
 * _atoi - Convert string 's' to integer
 * @s: String to convert to int, potentially with preceding characters
 *
 * Return: int containing string
 */
int _atoi(char *s)
{
	char c;
	int i = 0, sign = 1, tmp;

	while ((c = *s) > '\0' && (c < '0' || c > '9'))
	{
		if (c == '-')
			sign *= -1;
		++s;
	}
	while (c >= '0' && c <= '9')
	{
		tmp = i;
		i *= 10;
		i -= (c - '0');
		if (i > tmp)
			return (tmp * -sign);
		c = *(++s);
	}
	return (i * -sign);
}
