#include <stdio.h>
#include <ctype.h>

void limpiarBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    int N, numero = 0, caracter, valido = 0;

    while (!valido)
    {
        printf("\tIngrese el numero hasta donde se evaluara la serie FizzBuzz: ");
        caracter = getchar();

        if (caracter == '-')
        {
            printf("\tLos numeros negativos no estan permitidos.\n");
            limpiarBuffer();
            continue;
        }

        if (isdigit(caracter))
        {
            numero = caracter - '0';
            while ((caracter = getchar()) != '\n' && caracter != EOF)
            {
                if (isdigit(caracter))
                {
                    numero = numero * 10 + (caracter - '0'); // obtener lo números
                }
                else
                {
                    numero = -1; // invalido
                    limpiarBuffer();
                    break;
                }
            }

            if (numero >= 0)
            {
                valido = 1;
            }
            else
            {
                printf("\tIngrese solo números.\n");
            }
        }
        else
        {
            printf("\tIngrese solo números.\n");
            limpiarBuffer();
        }
    }

    N = numero;
    printf("\n\tEntrada: %i", N);

    printf("\n\t↳Salida: ");
    for (int i = 1; i < N + 1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            i != N ? printf("FizzBuzz, ") : printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            i != N ? printf("Fizz, ") : printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            i != N ? printf("Buzz, ") : printf("Buzz\n");
        }
        else
        {
            i != N ? printf("%d, ", i) : printf("%d\n", i);
        }
    }

    return 0;
}
