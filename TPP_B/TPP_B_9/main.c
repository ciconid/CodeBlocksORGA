#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    printf("%d argumentos \n",argc);
    for(int  i = 0; i < argc; i++){
        printf("%d: %s \n",i,argv[i]);
    }
    printf("\n");

    // Aca empieza el ejercicio 8 de verdad
    FILE* archivo1 = fopen(argv[1], "r");
    FILE* archivo2 = fopen(argv[2], "w+");
    char buffer[10],
        buffer2[100];

    // Apertura de archivos
    if(archivo1 == NULL){
        printf("No se pudo abrir el archivo %s \n",argv[1]);
        return 1;
    }
    if(archivo2 == NULL){
        printf("No se pudo abrir el archivo %s \n",argv[2]);
        return 1;
    }


    printf("*** Contenidos del archivo %s ***\n",argv[1]);
    while(fgets(buffer,10,archivo1) != NULL){
        printf("%s",buffer);
        fprintf(archivo2,buffer);
    }
    printf("\n");


    rewind(archivo2);
    printf("*** Contenidos del archivo %s ***\n",argv[2]);
    while(fgets(buffer2,100,archivo2) != NULL){
        printf("%s",buffer2);
    }
    printf("\n");






    fclose(archivo1);
    fclose(archivo2);
    return 0;
}
