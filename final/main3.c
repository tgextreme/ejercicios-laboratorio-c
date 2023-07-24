#include <stdio.h>
#include <stdlib.h>

int AnyadeElemento();
int EliminaElemento();
void main()
{
    int arr[4];
    // AnyadeElemento(arr, 5);
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    EliminaElemento(arr, 4, 2);

    /*for(int i=0;i<sizeof(arr);i=i+1){
        printf("%d", arr[i]);
    }*/
}

int AnyadeElemento(int **p, int nelementos)
{
    int *paux = *p;
    paux = (int *)realloc(*p, (nelementos + 1) * sizeof(int));
    if (paux != NULL)
    {
        printf("Introduce el nuevo valor\n\n");
        scanf("%d", &paux[nelementos]);
        *p = paux;
        return ++nelementos;
    }
    else
        return -1;
}

int EliminaElemento(int *p, int nelementos, int k)
{
    int i;
    for (i = k; i <= nelementos - 2; i++)
        p[i] = p[i + 1];
    p = (int *)realloc(p, (nelementos - 1) * sizeof(int));
    nelementos = nelementos - 1;
    return nelementos;
}