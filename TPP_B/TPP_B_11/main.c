#include <stdio.h>
#include <stdlib.h>
//#define DEBUG

int main(int argc, char* argv[])
{
    // VARIABLES
    FILE* file1 = fopen(argv[1],"r");
    FILE* file2 = fopen("temp.txt","w");
    char buffer[500];
    int line_num = 1;

    // Validacion de archivo
    if(file1 == NULL){
        printf("No se pudo abrir el archivo %s\n",argv[1]);
        return 1;
    }

    #ifdef DEBUG
    printf("%s \n",argv[1]);
    //char p[100];
    //fgets(p,100,file1);
    #endif // DEBUG

    // Copio en temp.txt el archivo pasado por parametro mas los numeros de linea
    while(fgets(buffer,500,file1) != NULL){
        fprintf(file2,"%d %s",line_num,buffer);
        line_num++;
    }
    fclose(file2);
    fclose(file1);

    // Copio contenidos de temp.txt en el archivo original y eliminio temp.txt
    file1 = fopen(argv[1],"w");
    file2 = fopen("temp.txt","r");

    while(fgets(buffer,500,file2) != NULL){
        fprintf(file1,"%s",buffer);
    }

    fclose(file2);
    fclose(file1);
    remove("temp.txt");

    return 0;
}
