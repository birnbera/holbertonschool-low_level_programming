/**
 * _strlen - compute length of string `s'
 * @s: string to get length of
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * _is_palindrome - compares `s' to itself from beginning to end
 * @s: original string
 * @t: end of original string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int _is_palindrome(char *s, char *t)
{
	if (*s != *t)
		return (0);
	if (s >= t)
		return (1);
	return (_is_palindrome(++s, --t));
}
/**
 * is_palindrome - tests if `s' is palindrome
 * @s: string to test
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l = _strlen(s) - 1;

	return (_is_palindrome(s, s + l));
}
