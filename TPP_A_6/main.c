#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int validar_caracter(char c);

int main()
{
    //char cadena[];
    /*char test;
    char hola[] = "hola";
    char mundo[] = "mundo";
    char c = 'h';
    char buffer[2];
    buffer[0] = c;
    buffer[1] = '\0';

    strcat(hola,mundo);
    printf("%s \n",hola);
    strcat(hola,buffer);
    printf("%s \n",hola);

    printf("Ingrese una cadena de digitos en hexadecimal: ");

    while(test != '\n'){
        scanf("%c",&test);
        printf("%d - %c\n",test,test);

      //  cadena
    }
    */

    char actual,
        cadena[30],
        buffer[2];

    buffer[1] = '\0';

    printf("Ingrese una cadena de digitos en hexadecimal: ");
    scanf("%c", &actual);

    while(actual != '\n'){
        if(validar_caracter(actual) == 0){
            printf("NO ESTA EN HEXADECIMAL!");
            return 0;
        }

        buffer[0] = actual;
        strcat(cadena,buffer);

        printf("%s \n", cadena);

        scanf("%c", &actual);
    }


    return 0;
}

int validar_caracter(char c){
    switch(c){
        case '0':
        case '1':
        case '2':
        case '3':
            return 1;
    }

    return 0;
}
