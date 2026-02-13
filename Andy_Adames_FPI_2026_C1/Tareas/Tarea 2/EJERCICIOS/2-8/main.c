#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matricula, carrera, semestre;
    float promedio;

    printf("Ingrese matrícula: ");
    scanf("%d", &matricula);
    printf("Ingrese carrera (1-Industrial 2-Telemática 3-Computación 4-Mecánica): ");
    scanf("%d", &carrera);
    printf("Ingrese semestre: ");
    scanf("%d", &semestre);
    printf("Ingrese promedio: ");
    scanf("%f", &promedio);

    switch(carrera)
    {
        case 1:
            if (semestre >= 6 && promedio >= 8.5)
                printf("\nMatrícula: %d | Carrera: %d | Promedio: %5.2f\n", matricula, carrera, promedio);
            else
                printf("\nNo cumple los requisitos\n");
            break;
        case 2:
            if (semestre >= 5 && promedio >= 9.0)
                printf("\nMatrícula: %d | Carrera: %d | Promedio: %5.2f\n", matricula, carrera, promedio);
            else
                printf("\nNo cumple los requisitos\n");
            break;
        case 3:
            if (semestre >= 6 && promedio >= 8.8)
                printf("\nMatrícula: %d | Carrera: %d | Promedio: %5.2f\n", matricula, carrera, promedio);
            else
                printf("\nNo cumple los requisitos\n");
            break;
        case 4:
            if (semestre >= 7 && promedio >= 9.0)
                printf("\nMatrícula: %d | Carrera: %d | Promedio: %5.2f\n", matricula, carrera, promedio);
            else
                printf("\nNo cumple los requisitos\n");
            break;
        default:
            printf("\nError en la carrera\n");
            break;
    }

    return 0;
}
