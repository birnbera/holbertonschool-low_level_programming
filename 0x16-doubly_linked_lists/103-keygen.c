#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - takes commandline arg of username and produces corresponding key
 * @argc: number of commandline args
 * @argv: array of commandline args
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	size_t i, j;
	int rnd;
	char *h, *uname, pw[7], a;

	h = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
		exit(1);
	uname = argv[1];
	j = (strlen(uname) ^ 0x3b) & 0x3f;
	pw[0] = h[j];

	for (j = i = 0; uname[i]; i++)
		j += uname[i];
	pw[1] = h[(j ^ 0x4f) & 0x3f];

	for (j = 1, i = 0; uname[i]; i++)
		j *= uname[i];
	pw[2] = h[(j ^ 0x55) & 0x3f];

	for (a = uname[0], i = 0; i < strlen(uname); i++)
		if (uname[i] > a)
			a = uname[i];
	srand(a ^ 0xe);
	j = rand();
	pw[3] = h[j & 0x3f];

	for (j = i = 0; uname[i]; i++)
		j += (uname[i] * uname[i]);
	pw[4] = h[(j ^ 0xef) & 0x3f];

	for (a = uname[0]; a > 0; a--)
		rnd = rand();
	pw[5] = h[(rnd ^ 0xe5) & 0x3f];

	pw[6] = '\0';
	printf("%s", pw);
	return (0);
}
