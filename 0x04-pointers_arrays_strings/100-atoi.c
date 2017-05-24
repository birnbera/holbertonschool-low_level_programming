/**
 * _atoi - Convert string 's' to integer
 * @s: String to convert to int, potentially with preceding characters
 *
 * Return: int containing string
 */
int _atoi(char *s)
{
	char c;
	int i = 0, sign = 0;

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
		if (i * 10 > i)
			break;
		i *= 10;
		i -= (c - '0');
		c = *(++s);
	}
	return (i * (sign < 0 ? 1 : -1));
}
