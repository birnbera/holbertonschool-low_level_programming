/**
 * _strlen_recursion - compute length of string recursively
 * @s: string to compute length
 *
 * Return: length of `s'
 */
int _strlen_recursion(char *s)
{
	if ('\0' == *s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
