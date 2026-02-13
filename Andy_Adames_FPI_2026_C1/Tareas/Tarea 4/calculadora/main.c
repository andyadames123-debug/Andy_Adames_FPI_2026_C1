#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NUEVO 0
#define SALIR 10
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTA 4
#define RAIZ_CUADRADA 5
#define ERR_Divbyzero 100
#define ERR_OK 0
int sumar(float num1, float num2, float *result);
int dividir(float num1, float num2, float *result);
int multiplicar(float num1, float num2, float *result);
int restar(float num1, float num2,float *result);
int raiz_cuadrada(float num1, float *result);
int main()
{
    int menu = NUEVO;
    int cod_err = ERR_OK;
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;
    do
    {
        printf("\n0-Salir\n1-Sumar\n2-Dividir\n3-Multiplicar\n4-Restar\n5-Raiz cuadrada\n ");
        scanf("%i", &menu);
        if (menu == SUMAR)
        {
            printf("\n Escriba el primer numero a sumar: ");
            scanf("%f", &num1);
            printf("\n Escriba el segundo numero a sumar: ");
            scanf("%f", &num2);
            cod_err = sumar(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                printf("\n=======Error en suma=========");
            }
            else{
                printf("\nSuma de %f y %f es: %f\n", num1, num2, result);
            }
        }
        if (menu == DIVIDIR)
        {
            printf("\n Escriba el numerador: ");
            scanf("%f", &num1);
            printf("\n Escriba el dividor: ");
            scanf("%f", &num2);
            cod_err = dividir(num1, num2, &result);
            if(cod_err != ERR_OK)
            {
                if(cod_err == ERR_Divbyzero)
                {
                    printf("\nError en division por cero");
                }
            }
            else{
                printf("\nLa division de %f y %f es: %f\n", num1, num2, result);
            }
        }
        if (menu == MULTIPLICAR)
        {
            printf("\n Escriba el primer numero a multiplicar: ");
            scanf("%f", &num1);
            printf("Escriba el segundo numero a multiplicar: ");
            scanf("%f", &num2);
            cod_err = multiplicar(num1, num2, &result);
            if (cod_err != ERR_OK)
            {
                printf("\n-----Error en multiplicacion--------\n");
            }
            else{
                printf("\nMultiplicacion de %.2f*%.2f = %.2f\n", num1, num2, result);
            }
        }
        if (menu == RESTA)
        {
            printf("\n Escriba el primer numero para restar: ");
            scanf("%f", &num1);
            printf("\n Escriba el segundo numero para restar: ");
            scanf("%f", &num2);
            cod_err = restar(num1, num2, &result);
            if (cod_err != ERR_OK)
            {
                printf("\n-----Error en resta--------\n");
            }
            else{
                printf("\nResta de %.2f - %.2f = %.2f\n", num1, num2, result);
            }
        }
        if (menu == RAIZ_CUADRADA)
        {
            printf("\n Escriba el numero para sacar raiz cuadrada: ");
            scanf("%f", &num1);
            cod_err = raiz_cuadrada(num1, &result);
            if (cod_err != ERR_OK)
            {
                printf("\n-----Error: No se puede obtener raiz de numero negativo--------\n");
            }
            else{
                printf("\nRaiz cuadrada de %.2f = %.2f\n", num1, result);
            }
        }
    }
    while (menu != SALIR);
    }
    int sumar(float n1, float n2, float *resultado)
{
    *resultado = n1 + n2;
    return ERR_OK;
}
int dividir(float numerador, float denominador, float *resultado)
{
    if(denominador == 0)
    {
        return ERR_Divbyzero;
    }
    else
    {
        *resultado = numerador / denominador;
        return ERR_OK;
    }
}
int multiplicar(float n1, float n2, float *resultado)
{
    *resultado = n1 * n2;
    return ERR_OK;
}
int restar(float n1, float n2, float *resultado)
{
    *resultado = n1 - n2;
    return ERR_OK;
}
int raiz_cuadrada(float num, float *resultado)
{
    if (num < 0)
    {
        return 1;
    }
    else
    {
        *resultado = sqrt(num);
        return ERR_OK;
    }
}
