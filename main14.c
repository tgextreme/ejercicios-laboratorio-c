#include <stdio.h>


int main(int argc, char *argv[])
{

    int i;
    int o=(intptr_t)argv[1];

    for (i = 0; i < argc; i++) {
        printf("El argumento %d es %s \n\n", i, argv[i]);
    }

    
}
