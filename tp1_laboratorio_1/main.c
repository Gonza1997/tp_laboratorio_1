#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float operando1 = 0;
    float operando2 = 0;
    float suma;
    float resta;
    float division;
    float producto;
    int factorial;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", operando1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", operando2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero: ");
                scanf("%f", &operando1);
                break;
            case 2:
                printf("Ingrese el segundo numero: ");
                scanf("%f", &operando2);
                break;
            case 3:
                suma = sumar(operando1, operando2);
                printf("Suma es: %.2f \n", suma);
                break;
            case 4:
                resta = restar(operando1, operando2);
                printf("La resta es: %.2f \n", resta);
                break;
            case 5:
                while(operando2 == 0)
                {
                    printf("Ingrese un divisor distinto a 0: ");
                    scanf("%f", &operando2);
                }
                division = dividir(operando1, operando2);
                printf("La division es: %.2f \n", division);
                break;
            case 6:
                producto = multiplicar(operando1, operando2);
                printf("El producto es: %.2f \n", producto);
                break;
            case 7:
                factorial = factorialA(operando1);
                printf("El factorial es: %d \n", factorial);
                break;
            case 8:
                suma = sumar(operando1, operando2);
                resta = restar(operando1, operando2);
                division = dividir(operando1, operando2);
                producto = multiplicar(operando1, operando2);
                factorial = factorialA(operando1);
                printf("\n La suma es: %.2f \n La resta es: %.2f \n La division es: %.2f \n El producto es: %.2f \n El factorial es: %d \n \n", suma, resta, division, producto, factorial);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }


    return 0;
}

