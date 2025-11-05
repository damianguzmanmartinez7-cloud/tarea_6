#include <stdio.h>

int main()
{
    int numero, n, digito;  // nombramos las variables
    int par = 0, Impar = 0; // iniciamos el contador

    // hacemos dos arreglos, con un máximo de 10 digitos por número
    int digpar[20], digImpar[20];

    // guarda los numeros clasificandolos a el arreglo que pertenezcan
    int ip = 0, iI = 0;

    printf("Escribe un número entero: ");
    scanf("%d", &numero);
    n = numero;
    if (n < 0)
        n = -n;

    if (n == 0)
    {
        printf("Numero de entrada : %d\nPares: (0)\nImpares: ()\nTotal pares = 1, impares = 0\n", numero);
        return 0;
    }

    while (n > 0)
    {
        digito = n % 10; // sirve para descomponer el número en cada dígito
        // durante cada repetición del ciclo se extraen de izqierda a derecha
        if (digito % 2 == 0)
        {
            // si es par con el operador modulo nos dará un residuo de 0
            digpar[ip++] = digito;
            par++;
        }
        else
        {
            digImpar[iI++] = digito;
            Impar++;
        }
        n /= 10;
    }

    printf("Numero de salida <3: %d\n", numero);
    printf("Pares: (");
    for (int i = ip - 1; i >= 0; i--)
    {
        printf("%d", digpar[i]); // se guarda el valor del digito direccionandolo a la posición i del arreglo
        if (i > 0)
            printf(",");
    }
    printf(")\nImpares: (");
    for (int i = iI - 1; i >= 0; i--)
    {
        printf("%d", digImpar[i]);
        if (i > 0)
            printf(",");
    }
    printf(")\nSalida pares = %d, impares = %d\n", par, Impar);

    return 0;
}