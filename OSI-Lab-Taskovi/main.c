#include <stdio.h>
#include <stdlib.h>

void oduzimanje_n_brojeva()
{
	int n;
	printf("Koliko brojeva ima u razlici? ");
	scanf("%d",&n);
	int niz[n];
	printf("Unesite broj od kojeg oduzimamo: ");
	scanf("%d",&niz[0]);
	int razlika = niz[0];
	for(int i = 1; i < n; i++)
	{
		printf("Unesite %d. oduzimac: ",i);
		scanf("%d",&niz[i]);
		razlika -= niz[i];
	}
	printf("Razlika brojeva je: %d\n",razlika);
}

int mnozenje_dva_broja(int a, int b)
{
    return a*b;
}

int sabiranjeNBr(int n);
int dvaBroja (int a, int b);


int oduzimanje2broja(int umanjenik,int umanjilac)
{
    return umanjenik-umanjilac;

}

int main()
{

    printf("5-3=%d\n",oduzimanje2broja(5,3));
	oduzimanje_n_brojeva();
	int suma = sabiranjeNBr(5);
	int proizvod = mnozenje_dva_broja(4,3);
	printf("\n4*3=%d\n", proizvod);
    int a, b;
    printf("unesi dva broja: ");
    scanf("%d %d", &a, &b);
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
