#include <stdio.h>
#include <stdlib.h>

int main()
{
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
