#include <stdio.h>
#include <string.h>

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
} producto;

void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void)
{
    producto INV[100];
    int TAM, OPE;

    do
    {
        printf("Ingrese el numero de productos: ");
        scanf("%d", &TAM);
    }
    while (TAM > 100 || TAM < 1);

    Lectura(INV, TAM);

    printf("\nIngrese operacion a realizar. \n\t1 - Ventas \n\t2 - Reabastecimiento \n\t3 - Nuevos Productos \n\t4 - Inventario \n\t0 - Salir: ");
    scanf("%d", &OPE);

    while (OPE)
    {
        switch (OPE)
        {
            case 1: Ventas(INV, TAM);
                break;
            case 2: Reabastecimiento(INV, TAM);
                break;
            case 3: Nuevos_Productos(INV, &TAM);
                break;
            case 4: Inventario(INV, TAM);
                break;
        }
        printf("\nIngrese operacion a realizar. \n\t1 - Ventas \n\t2 - Reabastecimiento \n\t3 - Nuevos Productos \n\t4 - Inventario \n\t0 - Salir: ");
        scanf("%d", &OPE);
    }
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese informacion del producto %d", I+1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        while((getchar()) != '\n');
        printf("\tNombre:");
        gets(A[I].nombre);
        printf("\tPrecio:");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;

    printf("\nIngrese clave del producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;

    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
            I++;
        if ((I == T) || (A[I].clave > CLA))
            printf("\nLa clave del producto es incorrecta");
        else
        {
            if (A[I].existencia >= CAN)
            {
                A[I].existencia -= CAN;
                PAR = A[I].precio * CAN;
                TOT += PAR;
            }
            else
            {
                printf("\nNo existe en inventario la cantidad solicitada. Solo hay %d", A[I].existencia);
                printf("\nLos lleva 1 - Si  0 - No?: ");
                scanf("%d", &RES);
                if (RES)
                {
                    PAR = A[I].precio * A[I].existencia;
                    A[I].existencia = 0;
                    TOT += PAR;
                }
            }
        }
        printf("\nIngrese clave del producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
    printf("\nTotal de la venta: %.2f", TOT);
}
