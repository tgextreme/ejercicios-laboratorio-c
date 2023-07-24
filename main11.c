#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{

    int i = 1;
    printf("Nombre del programa: %s\n", argv[0]);
    double numero=0;
    if (argc < 2)
        printf("No hay argumentos para el programa %s\n", argv[0]);
    else
    {
        printf("Argumentos pasados: %d\n", argc - 1);
        for (i = 1; i < argc; i++)
        {
            printf("Argumento %d: %s\t", i, argv[i]);
            numero=atoi(argv[i]);
            printf("Valor entero: %d\t", atoi(argv[i]));
           
            printf("Valor real: %.2f\n", atof(argv[i]));
        }
       //  Otro posible bucle:
        /*while (*++argv!=NULL) //el puntero argv va avanzando en el array de punteros
        { printf("Argumento %d: %s\t", i++, *argv);
        printf("Valor entero: %d\t", atoi(*argv));
        printf("Valor real: %.6f\n", atof(*argv));
        }
        argv-=argc; //devolvemos el puntero argv a su situación original
        */
    }
}