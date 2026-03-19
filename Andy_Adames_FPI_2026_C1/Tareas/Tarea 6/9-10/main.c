#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
}alumno;
void modifica(FILE *);

void main(void)
{
    FILE *ar;
    if((ar = fopen("adt.dat", "r+")) !=NULL)
        modifica(ar);
    else
        printf("\nEl archivo no se puede abrir");
    fclose(ar);
}
void modifica(FILE *ap)
{
    int d;
    alumno alu;
    printf("\nIngrese el numero de registro que desea modificar: ");

    fseek(ap, (d-1) *sizeof(alumno), 0);

    fread(&alu, sizeof(alumno), 1, ap);
    printf("\nIngrese el promedio correcto del alumno: ");
    scanf("%f", &alu.promedio);


    fwrite(&alu, sizeof(alumno), 1, ap);
}
