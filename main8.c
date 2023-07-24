#include <stdio.h>
char *msg(int cod); // prototipos de las funciones
char *msg2(int cod);
int main()
{
    int i;
    printf("Vamos a imprimir los 5 mensajes más habituales de mis programas:\n\n");
    for (i = 0; i < 5; i++)
        printf("Mensaje %d: %s\n", i, msg(i));
    // o bien:
    // printf("Mensaje %d: %s\n", i, msg2(i)); //otra forma de hacer lo mismo con la función msg2
}
char *msg(int cod) // solución con un array de cadenas de caracteres, retorna dirección de static
{
    static char txt[5][60] = {"Pulse una tecla para continuar...",
                              "Procesando datos, espere...",
                              "Espere, por favor...", // txt es un array local "static" que permanece siempre en la memoria
                              "Pulse ESC para abandonar...",
                              "Pulse una tecla para terminar."};
    return txt[cod]; // retorna la dirección de comienzo de la fila del array dada por "cod"
}
char *msg2(int cod) // solución con un array de punteros, retorna dirección de una constante
{
    char *p[5] = {"Pulse una tecla para continuar...",
                  "Procesando datos, espere...",
                  "Espere, por favor...", // p es un array local normal, desaparecerá al terminar la función
                  "Pulse ESC para abandonar...",
                  "Pulse una tecla para terminar."};
    return p[cod]; // retorna la dirección de la constante de cadena de caracteres dada por "cod"
}