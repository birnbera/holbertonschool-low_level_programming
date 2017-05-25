#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 2772
#define SIZE 85

/**
 * main - create valid password for 101-crackme
 *
 * Return: 0 always
 */
int main(void)
{
	char pw[85], c;
	int i = 0, sum = 0, diff;

	srand(time(NULL));
LOOP:
	while (sum < NUM - 126)
	{
		c = rand() % ('~' - '!') + '!';
		if (c == '`' || c == '"' || c == '$' || c == '\\')
			continue;
		pw[i++] = c;
		sum += c;
	}
	diff = NUM - sum;
	if (diff < '!')
	{
		--i;
		sum -= c;
		goto LOOP;
	}
	else
		pw[i++] = (char) diff;
	sum += diff;
	pw[i] = '\0';
	printf("%s", pw);
	return (0);
}
