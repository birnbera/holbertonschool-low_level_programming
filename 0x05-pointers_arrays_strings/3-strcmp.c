/**
 * _strcmp - Compares two null-terminated byte strings lexicographically
 * @s1: first string
 * @s2: second string
 *
 * Description: The sign of the result is the sign of the difference between
 * the values of the first pair of characters that differ in the strings
 * being compared.
 *
 * Return: Negative difference if `s1' is before `s2'; 0 if equal; positive
 * difference if `s2' is before `s1'
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		++i;
	return (s1[i] - s2[i]);
}
