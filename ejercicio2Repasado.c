#include <stdio.h>
#include <string.h>



int main()
{
    char texto[15];
    char texto1[15];
    char *intermedio[1];
    int recorrido = 0;

    printf("Introduce un numero \n");
    scanf("%s", &texto);

    printf("Has introducido %s \n", texto);
    int i = 0;
  //  char sustituir="x";
 /*   for (i = 0; texto[i] != '\0'; i++)
    { // recorremos la cadena

        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i]=sustituir;
            
        }
        // strcpy(intermedio, texto[recorrido]);

        
    }*/
    do
    {

        // if (strcmp(texto[recorrido] + "", "a") == 0)
        //{
        if (texto[recorrido] >= 'A' && texto[recorrido] <= 'Z')
        {
            strcat(texto1, "x");
        }
        // strcpy(intermedio, texto[recorrido]);

        if (texto[recorrido] >= 'a' && texto[recorrido] <= 'z')
        {
            if(texto[recorrido] == 'a'){
                    strcat(texto1, "a");
            } else if(texto[recorrido]== 'b'){
                strcat(texto1, "b");
            }else if(texto[recorrido]=='c'){
                strcat(texto1, "c");
            }else if(texto[recorrido]=='d'){
                strcat(texto1, "d");
            }else if(texto[recorrido]=='e'){
                strcat(texto1, "e");
            }else if(texto[recorrido]=='f'){
                strcat(texto1, "f");
            }else if(texto[recorrido]=='g'){
                strcat(texto1, "g");
            }else if(texto[recorrido]=='h'){
                strcat(texto1, "h");
            }else if(texto[recorrido]=='i'){
                strcat(texto1, "i");
            }else if(texto[recorrido]=='j'){
                strcat(texto1, "j");
            }else if(texto[recorrido]=='k'){
                strcat(texto1, "k");
            }else if(texto[recorrido]=='l'){
                strcat(texto1, "l");
            }else if(texto[recorrido]=='m'){
                strcat(texto1, "m");
            }else if(texto[recorrido]=='n'){
                strcat(texto1, "n");
            }else if(texto[recorrido]=='o'){
                strcat(texto1, "o");
            }else if(texto[recorrido]=='p'){
                strcat(texto1, "p");
            }else if(texto[recorrido]=='q'){
                strcat(texto1, "q");
            }else if(texto[recorrido]=='r'){
                strcat(texto1, "r");
            }else if(texto[recorrido]=='s'){
                strcat(texto1, "s");
            }else if(texto[recorrido]=='t'){
                strcat(texto1, "t");
            }else if(texto[recorrido]=='u'){
                strcat(texto1, "u");
            }else if(texto[recorrido]=='v'){
                strcat(texto1, "w");
            }else if(texto[recorrido]=='x'){
                strcat(texto1, "x");
            }else if(texto[recorrido]=='y'){
                strcat(texto1, "y");
            }else if(texto[recorrido]=='z'){
                strcat(texto1, "z");
            }
           // strcat(texto1, strcpy(intermedio, &texto[recorrido]));
        //    strcat(texto1, "y");
        }

        if (texto[recorrido] == '\0')
        {
            recorrido = 17;
        }

        //    texto[recorrido] = "x";
        //  fgets(recorrido, sizeof(linea), stdin);
        //   sscanf(linea, "%d", &cambiar);
        //  printf("Da a \n");
        //}

        printf("recorriendo %c \n", texto[recorrido]);

        recorrido++;

    } while (recorrido < 15);

    printf("Has introducido %s \n", texto1);
}
