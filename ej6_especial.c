#include <stdio.h>

int main()
{
    int num, copia, digito, factorial, suma = 0, i;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    copia = num;

    printf("Suma de factores: ");

    while (num > 0)
    {
        digito = num % 10;
        num /= 10;

        factorial = 1;
        for (i = 1; i <= digito; i++)
        {
            factorial *= i;
        }

        suma += factorial;

        printf("%d!", digito);
        if (num > 0)
            printf("+");
    }

    printf(" = %d", suma);

    if (suma == copia)
        printf(" →  Es especial");
    else
        printf(" →  No es especial");

    return 0;
}