#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t f1(size_t);
size_t f2(char *);
size_t f3(char *);
int f4(char *);
size_t f5(char *);
int f6(char);

int main(int argc, char *argv[])
{
	char *uname, pw[7];
	char *hash = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+\
4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
		exit (1);
	uname = argv[1];
	pw[0] = hash[f1(strlen(uname))];
	pw[1] = hash[f2(uname)];
	pw[2] = hash[f3(uname)];
	pw[3] = hash[f4(uname)];
	pw[4] = hash[f5(uname)];
	pw[5] = hash[f6(uname[0])];
	pw[6] = '\0';
	printf("%s", pw);
	return (0);
}

size_t f1(size_t len)
{
	return ((len ^ 0x3b) & 0x3f);
}

size_t f2(char *uname)
{
	size_t i = 0;

	while (*uname)
	{
		i += *uname;
		uname++;
	}
	return ((i ^ 0x4f) & 0x3f);
}

size_t f3(char *uname)
{
	size_t i = 1;

	while (*uname)
	{
		i *= *uname;
		uname++;
	}
	return ((i ^ 0x55) & 0x3f);
}

int f4(char *uname)
{
	char a;
	size_t i;

	for (a = uname[0], i = 0; i < strlen(uname); i++)
	{
		if (uname[i] > a)
			a = uname[i];
	}
	srand(a ^ 0xe);
	return (rand() & 0x3f);
}

size_t f5(char *uname)
{
	size_t i = 0;

	while (*uname)
	{
		i += *uname * *uname;
		uname++;
	}
	return ((i ^ 0xef) & 0x3f);
}

int f6(char first)
{
	int rnd;

	while (first > 0)
	{
		rnd = rand();
		first--;
	}
	return ((rnd ^ 0xe5) & 0x3f);
}
