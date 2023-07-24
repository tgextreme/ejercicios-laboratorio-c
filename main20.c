#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CARAC 30

typedef struct
{
    char nombre[MAX_CARAC];
    float nota;
} tficha;

int LeeAlumno(tficha *palumno);
int LeeAlumnos(tficha *pficha, int n);
void LiberaMemoria(tficha *palumno, int nalumnos);

void main()
{
    tficha *palumno;
    int nalumnos, nal_leidos;
    // Inicialización del array dinámico
    LeeAlumno(palumno);
    nal_leidos = LeeAlumnos(palumno, nalumnos);
    if (nal_leidos < nalumnos)
    {
        printf("Error el reservar la memoria de los nombres\n");
        if (nal_leidos == 0)
        {
            free(palumno);
           // return -1;
        }
    }
    // Visualización del array dinámico
    //MuestraAlumnos(palumno, nal_leidos);
    // Liberacion de memoria
    LiberaMemoria(palumno, nal_leidos);
    MemoryManager_DumpMemoryLeaks();
    system("pause");
    
}

int LeeAlumno(tficha *palumno)
{
    printf("Dígame el nombre del alumno:\n");
    char nombre[30]=getchar();
    printf("Dígame la nota:\n");
    float nota=getwchar();
    strncpy(palumno->nombre, nombre, 30);
    palumno->nota=nota;
    printf("Alumno añadido correctamente");

    return 0;
}
int LeeAlumnos(tficha *pficha, int n)
{
    return 0;
}
void LiberaMemoria(tficha *palumno, int nalumnos)
{
    MemoryManager_DumpMemoryLeaks();
    
}
