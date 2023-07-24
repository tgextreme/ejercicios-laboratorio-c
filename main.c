#include <stdio.h>
#include <math.h>

int main()
{

    double variable = (0.3 * 3) + 0.1;

    printf("%f \n", variable);

    if (variable == 1)
    { // 1 es entero y double son de diferente tipo
        printf("Es igual a 1 \n ");
    }
    else
    {
        printf("El número es diferente a 1 \n");
    }
    double numeroDecimales = 5;
    int i = 0;
    for (i = 0; i < 100; i = i + 1)
    {

        numeroDecimales = numeroDecimales / 10;
    }

    
    printf("\n El número de decimales es %.100f \n", numeroDecimales);
    int o=fabs(variable);
    printf("%f \n", o);
    if (o == 1)
    { // 1 es entero y double son de diferente tipo
        printf("Es igual a 1 \n ");
    }
    else
    {
        printf("El número es diferente a 1 \n");
    }
}
