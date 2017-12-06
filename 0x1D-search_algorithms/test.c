#include <stdio.h>
#include <math.h>


int main(void)
{
	double sq = sqrt(1000);
	int i;

	for (i = sq; i < 1000; i += sq)
		printf("%f %d\n", sq, i);
	return (0);
}
