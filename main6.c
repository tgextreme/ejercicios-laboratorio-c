#include <stdio.h>

void mostrarTemperatura(double temperatura[]);
double temperaturaBaja(double temperatura[]);
void main()
{
    double temperatura[12];
    double tempBaja;
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

void mostrarTemperatura(double temperatura[])
{
    int i = 0;

    for (i = 0; i < 12; i++)
    {
        printf("La temperatura para array %d es %f\n ", i, temperatura[i]);
    }
}
double temperaturaBaja(double temperatura[])
{
    double temp=temperatura[0];
    double intermedio=temperatura[0];
    int i = 0;
    for (i = 0; i < 11; i++)
    {
        printf("La temperatura %f, %f",intermedio, temp);
        if(temperatura[i]< temperatura[i + 1]){
            intermedio=temperatura[i];
        }else{
            intermedio=temperatura[i+1];
        }
        if(intermedio< temp){
            temp=intermedio;
        }else{
            intermedio=temp;
        }
        //temp = comparar_flotante(intermedio, temp);
    }
    return temp;
}
