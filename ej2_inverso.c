#include <stdio.h>

int main()
{
    int n, digito;
    int comenzo = 0;
    int resultado;

    do
    {
        printf("\tIngrese un numero positivo: ");

        resultado = scanf("%d", &n);

        while (getchar() != '\n') // Limpia el buffer si el usuario ingresó algo no válido

            if (resultado != 1)
            {
                printf("\tEl numero que ingreso no es valido, vuelva a intentarlo\n");
                continue;
            }

        if (n < 1)
        {
            printf("\tEl numero que ingreso no es positivo, vuelva a intentarlo\n");
            continue;
        }
        break;
    } while (1);
    printf("\t");
    do
    {
        digito = n % 10;

        if (digito != 0 || comenzo)
        {
            printf("%d", digito);
            comenzo = 1;
        }
        n /= 10;
    } while (n > 0);
    printf("\n");
    return 0;
}