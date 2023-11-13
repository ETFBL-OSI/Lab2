#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Unesite n: ");
    int n;
    scanf("%d", &n);

    printf("\n\n");

    printf("Unesite brojeve:\n");
    int rez=0;

    for(int i = 0; i<n; i++)
    {
        int a;
        scanf("%d", &a);
        rez*= a;
    }

    printf("\n\nZbir n unesenih brojeva je: %d\n\n\n", rez);

    return 0;
}
