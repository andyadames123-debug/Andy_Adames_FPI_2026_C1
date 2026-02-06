#include <stdio.h>
#include <stdio.h>

int main() {
    float calificacion;

    printf("Ingrese la calificación del estudiante: ");
    scanf("%f", &calificacion);

    if (calificacion >= 6) {
        printf("\nAPROBADO");
    }

    return 0;
}
