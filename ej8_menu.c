#include <stdio.h>
#include <string.h>

enum opciones
{
    salir,
    consultar,
    depositar
};

float deposito(float *apuntadorSaldo)
{
    char datosIngresados[100];
    int ingresoNumeros, error = 0;

    printf("\t   Ingrese una cantidad entera:  ");

    // do
    // {
    //     fgets(datosIngresados, sizeof(datosIngresados), stdin);
    //     // datosIngresados[strcspn(datosIngresados, "\n")] = 0;
    //     if (sscanf(datosIngresados, "%d", &ingresoNumeros) == 1)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         printf("\t   Ingreso inválido, intente de nuevo: ");
    //         error = 1;
    //     }
    // } while (error == 1);

    while (fgets(datosIngresados, sizeof(datosIngresados), stdin))
    {
        datosIngresados[strcspn(datosIngresados, "\n")] = 0;

        if (sscanf(datosIngresados, "%d", &ingresoNumeros) == 1)
        {
            break;
        }
        else
        {
            printf("\t   Ingreso inválido, intente de nuevo: ");
        }
    }

    // printf("\t   Ingresó: $%d a su cuenta\n", ingresoNumeros);

    *apuntadorSaldo = *apuntadorSaldo + ingresoNumeros;
    printf("\t   Su nuevo saldo es $%f\n", *apuntadorSaldo);
}

int main()
{
    int contraseña = 1234, correcto, contraseñaIngresada, menu, seleccion, i = 1;
    float saldo = 3401.68, *apuntadorSaldo;
    apuntadorSaldo = &saldo;

    do
    {
        printf("\n\tIngrese la contraseña:");
        scanf("%d", &contraseñaIngresada);
        if (contraseña == contraseñaIngresada)
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
        scanf("%d", &seleccion);
        switch (seleccion)
        {
        case consultar:
            printf("\n\t   Su saldo es $%f\n", *apuntadorSaldo);
            break;
        case depositar:
            deposito(apuntadorSaldo);
            break;
        case salir:
            correcto = 0;
            printf("\n\t   Saliendo del cajero\n");
            break;
        default:
            printf("\n\t   Ingrese una de las opciones del manú\n");
            break;
        }
    }
    return 0;
}
