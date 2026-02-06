#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I = 2, Cam =1;
    long SSE = 0;
    while (I<=2500)
    {
        SSE = SSE + I;
        printf("\t %d", I);
        if (Cam)
        {
            I +=5;
            Cam--;
        }
        else{
            I +=3;
            Cam++;
        }
    }
    printf("\nLa suma de laa serie es: %1d", SSE);
    return 0;
}
