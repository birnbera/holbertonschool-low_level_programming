#include <stdio.h>

/**
 * print_buffer - print content of buffer `b', `size' bytes total
 * @b: character buffer
 * @size: number of bytes total
 */
void print_buffer(char *b, int size)
{
	int i, j, k;
	char c;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x:", i);
		for (j = 0; j < 5; ++j)
		{
			printf(" ");
			for (k = j; k < j + 2; ++k)
			{
				if (i + j + k < size)
					printf("%02x", b[i + j + k]);
				else
					printf("  ");
			}
		}
		printf(" ");
		for (j = 0; j < 10; ++j)
		{
			if (i + j < size)
			{
				c = b[i + j];
				putchar((c >= ' ' && c <= '~' ? c : '.'));
			}
			else
				putchar(' ');
		}
		putchar('\n');
	}
}
