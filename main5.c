#include <stdio.h>

void mostrarTemperatura(float temperatura[]);
float temperaturaBaja(float temperatura[]);
float comparar_flotante(float f1, float f2);
void main()
{
    float temperatura[12];
    float tempBaja;
    // printf("hola mundo");
    // printf("dime la temperatura");
    // scanf("%f", &temperatura[1]);
    temperatura[0] = 2.0;
    temperatura[1] = 0.5;
    temperatura[2] = 5.0;
    temperatura[3] = 5.0;
    temperatura[4] = 5.0;
    temperatura[5] = 5.0;
    temperatura[6] = -5.0;
    temperatura[7] = 5.0;
    temperatura[8] = 5.0;
    temperatura[9] = 5.0;
    temperatura[10] = 5.0;
    temperatura[11] = 6.0;
    mostrarTemperatura(temperatura);
    tempBaja = temperaturaBaja(temperatura);
    printf("La temperatura más baja es %f", tempBaja);
}

void mostrarTemperatura(float temperatura[])
{
    int i = 0;

    for (i = 0; i < 12; i++)
    {
        printf("La temperatura para array %d es %f\n ", i, temperatura[i]);
    }
}
float temperaturaBaja(float temperatura[])
{
    float temp=temperatura[0];
    float intermedio=temperatura[0];
    int i = 0;
    for (i = 0; i < 11; i++)
    {
        printf("La temperatura %f, %f",intermedio, temp);
        intermedio = comparar_flotante(temperatura[i], temperatura[i + 1]);
        temp = comparar_flotante(intermedio, temp);
    }
    return temp;
}
float comparar_flotante(float f1, float f2)
{
    float precision = 0.00001;
    if (((f1 - precision) < f2) &&
        ((f1 + precision) > f2))
    {
        return f1;
    }
    else
    {
        return f2;
    }
}
