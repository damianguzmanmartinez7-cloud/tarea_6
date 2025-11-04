#include <stdio.h>

int main()
{
    int n, i = 2, x = 1;

    printf("\tIngrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("\tEl numero ingresado no es mayor que 1, vuelva a intentarlo");
        return 0;
    }

    printf("\t%d = ", n);

    while (n > 1)
    {
        if (n % i == 0)
        {
            if (x)
                x = 0;
            else
                printf(" x ");
            printf("%d", i);
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    printf("\n");
    return 0;
}