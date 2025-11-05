#include <stdio.h>
int main()
{

    int N; // definimos nuestra variable
    printf("Ingresa un numero entero: \n");
    scanf("%d", &N); // Direccionamos el valor a nuestra variable

    printf(" Serie alternante de los signos <3  :\n");

    // se repite mientras se cumple que i sea menor o igual a N
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        { // operador residuo verifica si es par
            printf("%d", -i);
        }
        else
        {
            printf("%d", i);
        }

        if (i < N)
        {
            printf(", "); // solo si i es menor que N imprimirá comas
        }
    }

    printf("\n");

    return 0;
}