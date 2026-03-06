#include <stdio.h>
#include <string.h>


    struct alumno
    {
        int matricula;
        char nombre[20];
        char carrera[20];
        float promedio;
        char direcciones[20];
    };
int main()
{
    char nom[20], car[20], dir[20];
    int mat;
    float pro;

    printf("\nIngrese l maatricula del alumno 2: ");
    scanf("%d",&a2.matricula);
    fflush(stdin);
    printf("Ingrese el nombre del alumno 2: ");
    gets(a2,nombre);

    printf("Ingrese la carrera del alumno 2: ");
    gets(a2.carrera);

    printf("Ingrese el promedio del alumno 2: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);
    printf("Ingrese la direccion del alumno 2: ");
    gets(a2.direccion);

    scanf("%d", &mat);
    a3.matricula = mat;
    fflush(stdin);
    printf("Ingrese el nombre del alumno 3: ");
    gets(nom);


    return 0;
}
