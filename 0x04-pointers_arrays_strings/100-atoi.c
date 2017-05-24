/**
 * _atoi - Convert string 's' to integer
 * @s: String to convert to int, potentially with preceding characters
 *
 * Return: int containing string
 */
int _atoi(char *s)
{
	char c;
	int i = 0, sign = 0, tmp;

	while ((c = *s) > '\0' && (c < '0' || c > '9'))
	{
		if (c == '-')
			--sign;
		else if (c == '+')
			++sign;
		++s;
	}
	while (c >= '0' && c <= '9')
	{
		tmp = i;
		i *= 10;
		i -= (c - '0');
		if (i > tmp)
			return (0);
		c = *(++s);
	}
	return (i * (sign < 0 ? 1 : -1));
}
