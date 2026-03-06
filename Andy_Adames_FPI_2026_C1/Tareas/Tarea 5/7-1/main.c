#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1, p2, p3 = '$';
    
    printf("\nIngrese un caracter: ");
    p1 = getchar();
    putchar(p1);
    printf("\n");
    
    while ((getchar()) != '\n');  // limpia el buffer
    
    printf("\nEl caracter p3 es: ");
    putchar(p3);
    printf("\n");
    
    printf("\nIngrese otro caracter: ");
    while ((getchar()) != '\n');  // limpia el buffer
    scanf("%c", &p2);
    printf("%c\n", p2);
    
    return 0;
}