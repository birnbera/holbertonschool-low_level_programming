#include "holberton.h"

/**
 * _isalpha - checks if character is alphabetic
 * @c: character to check
 *
 * Return: 1 if character is letter (upper or lower), 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
