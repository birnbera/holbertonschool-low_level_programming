/**
 * _pow_recursion - compute `x' raised to `y' recursively
 * @x: base integer
 * @y: power integer
 *
 * Return: x^y or 0 if `y' is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
