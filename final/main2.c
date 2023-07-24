#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARAC 30
typedef struct
{
char nombre[MAX_CARAC];
float nota;
}Persona;

void main(){
    Persona p;
    strcpy(p.nombre, "Tomas");
    p.nota = 2.2f;


}