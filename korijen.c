#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	int n;
	float korijen;

	printf("Unesite zeljeni broj:");
	scanf("%d", &n);

	korijen = sqrt(n);
	printf("%f", korijen);

	return 0;
}