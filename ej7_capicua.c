#include <stdio.h>

int main () {
    int inicio, final;

    printf ("Ingrese un numero de inicio: ");
    scanf("%d",&inicio);
    printf("Ingrese el numero final: ");
    scanf("%d", &final);

    printf("Los numeros capicua entre %d y %d:\n", inicio, final);

    for (int n = inicio; n <= final; n++) {
        int copia = n;
        int invertido = 0;
        int temp = n;


        while (temp > 0){
            invertido = invertido * 10 + temp % 10;
            temp = temp / 10;
        }

        if (copia == invertido ){
            printf("%d ", copia);
        }

    }
    return 0;
}