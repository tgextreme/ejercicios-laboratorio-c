#include <stdio.h>
void leerBinario();
int main()

{
    FILE *pf, *pf2;
    char cad[200]; // variables de prueba de diversos tipos
    pf2 = fopen("fichero2.dat", "wb");
    pf = fopen("imdbMOVIES.txt", "r");
    while (fgets(cad, 1000, pf))
    {
        printf("%s:", cad);
        fwrite(cad, sizeof(char), sizeof(cad), pf2);
    }
  
    fclose(pf);
    fclose(pf2);
      leerBinario();
}
void leerBinario()
{
    char c;
    FILE *pf = fopen("fichero2.dat", "rb");
    while(fread(&c, sizeof(char), 1000, pf))
    {
        printf("%s: \n",c);
    }
}