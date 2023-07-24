#include <stdio.h>

int comparar_flotante(float f1, float f2);
// https://how-to.fandom.com/wiki/Howto_compare_floating_point_numbers_in_the_C_programming_language
int main()
{

    double variable = (0.3 * 3) + 5.1;

    printf("%f \n", variable);
    int variableInt = comparar_flotante(variable, 6.0);
    if (variableInt == 1)
    { // 1 es entero y double son de diferente tipo
        printf("Es igual a 6 \n ");
    }
    else
    {
        printf("Es no igual a 6 \n ");
    }
}

int comparar_flotante(float f1, float f2)
{
    float precision = 0.00001;
    if (((f1 - precision) < f2) &&
        ((f1 + precision) > f2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}