#include <stdio.h>
#include <stdlib.h>
int AnyadeElemento();
void main()
{
    int  arr[4];
    AnyadeElemento(arr, 5);
    printf("Ejecutado correctamente %d", sizeof(arr));
    /*for(int i=0;i<sizeof(arr);i=i+1){
        printf("%d", arr[i]);
    }*/
}

int AnyadeElemento(int **p, int nelementos)
{
    int *paux = *p;
    paux = (int *)malloc( (nelementos + 1) * sizeof(int));
    if (paux != NULL)
    {
        printf("Introduce el nuevo valor\n\n");
        scanf("%d", &paux[nelementos]);
        *p = paux;
        return ++nelementos;
    }
    else
    {
        return -1;
    }
}