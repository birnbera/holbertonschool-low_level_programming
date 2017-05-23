/**
 * _strlen - return length of string 's'
 * @s: string to check
 *
 * Return: length of 's'
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *(s++) != '\0'; len++)
		;
	return (len);
}
