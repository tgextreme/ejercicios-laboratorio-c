#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *p;
    int i;
    long o = 0;
    long intermedio = 0;

    //(intptr_t)argv[1];//convertir argumento a str

    for (i = 1; i < argc; i++)
    {
        intermedio = strtol(argv[i], &p, 10);
        o = o + intermedio;
    }

    printf("el número es igual %i \n ", o);
}