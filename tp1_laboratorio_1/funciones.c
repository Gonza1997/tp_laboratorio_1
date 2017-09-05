
float sumar(float numero1, float numero2)
{
    float suma;
    suma = numero1 + numero2;
    return suma;
}

float restar(float numero1, float numero2)
{
    float resta;
    resta = numero1 - numero2;
    return resta;
}

float dividir(float numero1, float numero2)
{
    float division;
    division = numero1 / numero2;
    return division;
}

float multiplicar(float numero1, float numero2)
{
    float multiplica;
    multiplica = numero1 * numero2;
    return multiplica;
}

int factorialA(float numero)
{
    int factorial;
    if(numero == 1)
    {
        return 1;
    }
    factorial = numero * factorialA(numero-1);

    return factorial;
}
