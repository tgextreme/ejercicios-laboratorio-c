// COPIAR UN ARRAY BIDIMENSIONAL EN OTRO
#include <stdio.h>
#define FILAS 3 // constantes simbólicas
#define COLS 2
void CopiaArray(int fil, int col, int x[][col], int y[][col]); // prototipo de la función
int main()
{
    int a[FILAS][COLS] = {24, 30, 15, 25, 18, 13}; // Array de origen de la copia (3 filas y 2 columnas)
    int b[FILAS][COLS];                            // Array de destino de la copia
    int i, j;
    CopiaArray(FILAS, COLS, a, b); // primero se pasan los tamaños de nº de filas y columnas
    printf("Los datos copiados en el array b son: ");
    for (i = 0; i < FILAS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", b[i][j]); // También podría ser:  printf("%d ", *(*(b+i)+j) );
        }
    }
}
void CopiaArray(int fil, int col, int x[][col], int y[][col])
{
    int i, j;
    for (i = 0; i < fil; i++)
    {
        for (j = 0; j < col; j++)
        {
            y[i][j] = x[i][j];
            
        }
    }
}