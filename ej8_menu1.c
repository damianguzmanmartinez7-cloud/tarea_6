#include <stdio.h>

enum opciones
{
    salir,
    consultar,
    depositar
};

float deposito(float *apuntadorSaldo)
{

    float ingreso;
    printf("\n\t   Ingrese la contidad a depositar: ");
    scanf("%f", &ingreso);
    *apuntadorSaldo = *apuntadorSaldo + ingreso;
    printf("\t   Su nuevo saldo es: $%f\n", *apuntadorSaldo);
}

int main()
{
    int contraseña = 1234, correcto, contraseñaIngresada, menu, seleccion;
    float saldo = 3401.68, *apuntadorSaldo;
    apuntadorSaldo = &saldo;

    for (int i = 3; i > 0; i--)
    {
        printf("\n\tIngrese la contraseña:");
        scanf("%d", &contraseñaIngresada);
        if (contraseña == contraseñaIngresada)
        {
            correcto = 1;
            break;
        } //------------------------------
        if (i != 1)
        {
            i == 3 ? printf("\tContraseña incorrecta, tiene %d intentos más\n", i - 1) : printf("\tContraseña incorrecta, tiene un %d intento más\n", i - 1);
        }
        else
        {
            printf("\tAcceso bloqueado");
            break;
        }
    }
    do
    {
        printf("\n\t---Menú--- \n");
        printf("\t1. Consultar\n");
        printf("\t2. Depositar\n");
        printf("\t0. Salir\n");
        printf("\t   Elija su selección: ");
        scanf("%d", &seleccion);
        switch (seleccion)
        {
        case consultar:
            printf("\n\t   Su saldo es %f\n", *apuntadorSaldo);
            break;
        case depositar:
            deposito(apuntadorSaldo);
            break;
        case salir:
            correcto = 0;
            printf("\n\t   Saliendo del cajero\n");
            break;

        default:
            break;
        }
    } while (correcto == 1);

    return 0;
}
