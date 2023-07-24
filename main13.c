#include <stdio.h>

void TablaDeMultiplicar(int numeroDeTabla);

int main()
{
    printf("Dígame una tabla a mostrar");
    int tabla;
    scanf("%d", &tabla);

    for (int numeroDeTabla = 1; numeroDeTabla <= 10; numeroDeTabla++)
    {
        TablaDeMultiplicar(tabla);
    }
}
void TablaDeMultiplicar(int numeroDeTabla)
{
    for (int x = 1; x <= 10; x++)
    {
        int resultado = x * numeroDeTabla;
        printf("%d x %d = %d\n", numeroDeTabla, x, resultado);
    }
}