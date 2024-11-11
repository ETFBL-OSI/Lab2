#include <stdio.h>
#include <stdlib.h>

int sabiranjeNBr(int n);

int main()
{
    printf("Hello world!\n");
	
	int suma = sabiranjeNBr(5);
	
    return 0;
}

int sabiranjeNBr(int n)
{
	int suma = 0;
	int p;
	
	printf("Unesite brojeve:");
	for(int i = 0; i < n; i++)
	{
		printf("\n[%d] ", suma);
		scanf("%d", &p);
		suma += p;
	}
	
	printf("\nKonacno [%d] ", suma);
	
	return suma;
}