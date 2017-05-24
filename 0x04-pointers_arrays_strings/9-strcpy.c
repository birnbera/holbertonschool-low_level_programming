/**
 * _strcpy - Copy string 'src' to string 'dest'
 * @dest: Destination string pointer
 * @src: Source string pointer
 *
 * Return: point to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while ((*(dest + i) = *(src + i)))
		i++;
	return (dest);
}
