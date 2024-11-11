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

int main()
{
	oduzimanje_n_brojeva();
	return 0;
}
