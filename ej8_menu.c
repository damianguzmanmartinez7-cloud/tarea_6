#include <stdio.h>
#include <string.h>
#include <ctype.h>

enum opciones
{
    salir,
    consultar,
    depositar
};

void limpiarBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int ingresoSaldo(float *apuntadorSaldo)
{
    int numero = 0, caracter;
    printf("\t   Ingrese la cantidad a depositar (sin decimales): ");

    while ((caracter = getchar()) != '\n' && caracter != EOF)
    {
        if (isdigit(caracter))
        {
            numero = numero * 10 + (caracter - '0');
            printf("\t   El saldo ingresado es: %c", caracter);
        }
    }
    printf("\n");
    *apuntadorSaldo += numero;
    printf("\t   Su nuevo saldo es: $%f\n", *apuntadorSaldo);
}

int main()
{
    int contrasena = 1234, correcto, contraseñaIngresada, seleccion, i = 1;
    float saldo = 3401.68, ingreso;
    float *apuntadorSaldo = &saldo;

    do
    {
        printf("\n\tIngrese la contrasena:");
        scanf("%d", &contraseñaIngresada);
        limpiarBuffer();
        if (contrasena == contraseñaIngresada)
        {
            correcto = 1;
            break;
        }
        i != 3 ? printf("\t↳ Intento %d: incorrecto\n", i) : printf("\tAcceso bloqueado\n");
        if (i == 3)
        {
            break;
        }
        i++;
    } while (correcto == 0);

    while (correcto == 1)
    {
        printf("\n\t---Menú--- \n\t1. Consultar\n\t2. Depositar\n\t0. Salir\n\t   Elija su selección: ");
        if (scanf("%d", &seleccion) != 1)
        {
            seleccion = -1; // ingresa a default
        }
        limpiarBuffer();

        switch (seleccion)
        {
        case consultar:
            printf("\n\t   Su saldo es $%f\n", *apuntadorSaldo);
            break;
        case depositar:
            ingreso = ingresoSaldo(apuntadorSaldo);
            break;
        case salir:
            correcto = 0;
            printf("\n\t   Saliendo del cajero\n");
            break;
        default:
            printf("\n\t   Ingrese una de las opciones del menú\n");
            break;
        }
    }
    return 0;
}
