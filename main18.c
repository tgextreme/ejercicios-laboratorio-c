#include<stdio.h>
#include<string.h>


void BinaryToText(char *inputFile, char *outputFile);

int main(){

    FILE *binario;
    char buffer[500];
    


    binario=fopen("fichero2.dat","rb");

    if(!binario){
        printf("no se puede acceder al archivo\n");
    }
    else{
        size_t leido;
        while ((leido = fread(buffer, 1, sizeof(buffer), binario))) {
            fwrite(buffer, leido, 1, stdout);
        }
    }

    fclose(binario);
    BinaryToText("fichero2.dat","salida.txt");
}

void BinaryToText(char *inputFile, char *outputFile) {
    unsigned char str[256];
    unsigned int num;  // assuming 32 bit ints
    int i, len;

    FILE *finp = fopen(inputFile, "rb");
    FILE *fout = fopen(outputFile, "w");

    while ((len = fgetc(finp)) != EOF) {
        fread(str, len, 1, finp);
        str[len] = '\0';
        num  = (unsigned int)fgetc(finp) << 24;
        num |= fgetc(finp) << 16;
        num |= fgetc(finp) << 8;
        num |= fgetc(finp);
        fprintf(fout, "%s %d\n", (char*)str, num);
    }
    fclose(finp);
    fclose(fout);
}