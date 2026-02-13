#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =5;
    int *p;

    p = &a;

    printf("\nValor de p{%p}", p);
    printf("\nValor de a{%i}", *p);
    return 0;
}
