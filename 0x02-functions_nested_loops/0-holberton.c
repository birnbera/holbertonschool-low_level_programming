#include "holberton.h"

int main(void)
{
	char hbtn[] = "Holberton\n";
	int i = 0;
	char c;

	while ((c = hbtn[i++]) != '\0')
		_putchar(c);
	return (0);
}
