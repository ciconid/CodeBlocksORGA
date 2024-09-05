#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define DEBUG

// No anda con palabras que estan entre parentesis
// porque no le agregué esta funcionalidad-
// Anda bien con palabras antes de: '.'  ','  '\n'

int print_line_if_string_found(char line[], char* str){
    // Aislar cada palabra y compararla con str
    int i = 0,
        icar = 0;
    char caracter_actual = line[i];
    char palabra_actual[1000];

    while(caracter_actual != '\n' && caracter_actual != '\0' &&
          caracter_actual != '\n'){
        #ifdef DEBUG
            printf("%c",caracter_actual);
        #endif // DEBUG
        if(caracter_actual != ' '){
            palabra_actual[icar] = caracter_actual;
            icar++;
        }
        i++;
        caracter_actual = line[i];

        // Comparar palabra_actual con str
        if(caracter_actual == ' ' || caracter_actual == '.' || caracter_actual == ','){     //agregar despues \0 y \n
            if(strcmp(palabra_actual,str) == 0){    // FOUND!
                return 1;
            }

            for(int in = 0; in < icar + 2; in++){
                palabra_actual[in] = '\0';
            }
            icar = 0;
        }
    }
    //printf("\n");
    return 0;
}

int main(int argc, char* argv[])
{
    FILE* file1 = fopen(argv[1],"r");
    char buffer[1000];

    if(file1 == NULL){
        printf("No se pudo abrir el archivo %s \n",argv[1]);
        return 1;
    }

    while(fgets(buffer,1000,file1) != NULL){
        if(print_line_if_string_found(buffer, argv[2])){
            printf("%s",buffer);
            fclose(file1);
            return 0;
        }

    }












    fclose(file1);
    //char ccc;
    //scanf("%c",&ccc);
    return 0;
}
