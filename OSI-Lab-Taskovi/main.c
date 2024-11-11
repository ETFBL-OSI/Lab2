#include <stdio.h>
#include <stdlib.h>

int mnozenje_dva_broja(int a, int b)
{
    return a*b;
}
int oduzimanje2broja(int umanjenik,int umanjilac)
{
    return umanjenik-umanjilac;

}
int main()
{
    printf("5-3=%d\n",oduzimanje2broja(5,3));
    return 0;
}
