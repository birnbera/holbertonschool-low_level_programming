#include "holberton.h"

/**
 * _abs - compute absolute value of integer
 *
 * Return: absolute value of integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
