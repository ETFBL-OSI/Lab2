#include <stdio.h>
#include <stdlib.h>

int oduzimanje (int n)
{
    int suma = n;
    for(int i = n; i>=0; i--)
    {
        suma-= i;
    }
    return suma;
}

int main()
{
    int n;
    printf("Unesite koliko brojeva zelite da oduzimate: ");
    scanf("%d", &n);
    int rez = oduzimanje(n);
    printf("Rezultat oduzimanja: %d", rez);
    return 0;
}
