
#include <stdio.h>

int main()
{
    int N, a; // Nombramos nuestras variables
    // a es el contador de for y N es el numero de calificaciones ingresadas por el usuario.

    char apellido[23]; // arreglo 1 para los datos del estudiante

    // alamcena la calificación máxima y mínima
    float max;
    float min;

    float n;

    char nombre[23]; // arreglo 2 para los datos del estudiante

    float suma;

    printf("Calificaciones que desea Ingresar:\n");
    scanf("%d", &N);

    printf("Ingrese el nombre del  estudiante:\n");
    scanf("%s", nombre);

    printf("Ingrese el apellido del  estudiante:\n");

    scanf("%s", apellido);

    suma = 0; // Indicializamos la suma =0 para evitar alteraciones al resultado

    for (a = 1; a <= N; a++)
    { // el ciclo se cumplira mientras a sea menor e igual que N

        printf("Ingrese la calificacion:\n");

        scanf("%f", &n);

        suma = suma + n;

        if (a == 1)
        { // reitera que se repite en cuanto el usuario ingrese una calificación
            // con ello el programa tiene definido con quien comenzará a compararar datos
            max = n;

            min = n;
        }
        else
        {

            if (n > max)
            { // estos valores cambiarámn en cuanto se ingresen valores más pequeños o más grandes según las comparaciones

                max = n;
            }
            else
            {

                if (n < min)
                {

                    min = n;
                }
            }
        }
    }

    printf("El promedio de las calificaciones es <3 :%f\n", suma / N);

    printf("La calificación Míninma fue:%f\n", min);

    printf("La calificación Máxima fue:%f\n", max);

    return 0;
}