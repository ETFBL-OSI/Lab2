#include <stdio.h>
#include <stdlib.h>

int sabiranjeNBr(int n);
int dvaBroja (int a, int b);

int oduzimanje2broja(int umanjenik,int umanjilac)
{
    return umanjenik-umanjilac;
}

int main()
{

    int a, b;
    printf("unesi dva broja: ");
    scanf("%d %d", &a, &b);

    printf("5-3=%d\n", oduzimanje2broja(5,3));
	int suma = sabiranjeNBr(5);

    printf("rezultat je %d\n", dvaBroja(a, b));
    return 0;
}

int dvaBroja (int a, int b)
{
    return a + b;
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
