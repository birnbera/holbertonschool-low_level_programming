/**
 * _atoi - Convert string 's' to integer
 * @s: String to convert to int, potentially with preceding characters
 *
 * Return: int containing string
 */
int _atoi(char *s)
{
	char c;
	int plus = 0, minus = 0, i = 0, sign;

	while ((c = *s) > '\0' && (c < '0' || c > '9'))
	{
		if (c == '-')
			++minus;
		else if (c == '+')
			++plus;
		++s;
	}
	sign = (plus >= minus ? -1 : 1);
	while (c >= '0' && c <= '9')
	{
		i *= 10;
		i -= (c - '0');
		c = *(++s);
	}
	return (i * sign);
}
