#include <stdio.h>

#define NUM 612852475143

/**
 * main - find and print largest prime factor of NUM
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned long int i;
	unsigned long int n = NUM;
	unsigned long int div = n - (n % 2 == 0);

	while (div > 0)
	{
		if (n % div == 0 && div % 60 != 0)
		{
			for (i = 3; div % i != 0 && i < div; i += 2)
				;
			if (i == div)
			{
				printf("%lu\n", div);
				break;
			}
		}
		div -= 2;
	}
	return (0);
}
