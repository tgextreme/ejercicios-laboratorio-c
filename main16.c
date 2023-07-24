#include <stdio.h>
int main()
{
    FILE *pf, *pf2;
    char cad[200]; // variables de prueba de diversos tipos
    pf2 = fopen ("fichero2.dat", "wb");
   

    if ((pf = fopen("imdbMOVIES.txt", "r")) == NULL) // El fichero no existe, lo abrimos en modo escritura
    {
        /*if ((pf = fopen("C:\\datos\\datos.txt", "w")) == NULL)
        {
            printf("ERROR al abrir el fichero");
        }
        fprintf(pf, "Linea %d: %7ld %9.2f\n", i, a, b);           // grabamos 1ª linea de texto
        fprintf(pf, "Linea %d: %7ld %9.2f\n", ++i, a / 2, b * 2); // grabamos 2ª linea de texto
        /**/
    }
    else // El fichero ya existe, queda abierto en modo lectura
    {
        
        printf("Contenido de texto del fichero:\n");
        fgets(cad, 200, pf);
        printf("%s", cad); */// leemos en cad la 1ª linea del fichero (hasta el \n)
      // fwrite (cad,  sizeof(char),sizeof(cad) , pf2);
        
    }
    fclose(pf);
    fclose(pf2);
    
}