#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, Pri = 0, seg =1,sig;
    printf("\t %d \t %d", Pri,seg);
    for (I=3; I<= 500; I++)
    {
        sig = Pri =seg;
        Pri = seg;
        seg =sig;
        printf("\t %d", sig);
    }

    return 0;
}
