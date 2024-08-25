#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int validar_caracter(char c);
int convertir_a_decimal(char c);

int main()
{
    char actual,
        cadena[30];
    int longitud = 0,
        decimal = 0,
        pot6 = 0,
        index = 0,
        d_test = 0;

    printf("Ingrese una cadena de digitos en hexadecimal: ");
    scanf("%c", &actual);

    // cargo las variables cadena y longitud, y valido que los caracteres sean hexadecimales
    while(actual != '\n'){
        if(validar_caracter(actual) == 0){
            printf("NO ESTA EN HEXADECIMAL!");
            return 0;
        }

        cadena[index] = actual;
        cadena[index + 1] = '\0';

        scanf("%c", &actual);
        index++;
    }


    longitud = strlen(cadena);
    for(int i = longitud - 1; i >= 0; i--){
        d_test = convertir_a_decimal(cadena[i]);
        decimal = decimal + pow(16.0, pot6 * 1.0) * d_test;
        pot6++;
    }

    printf("HEX --> DEC \n");
    printf("%s --> %d \n", cadena, decimal);


    return 0;
}

int validar_caracter(char c){
    switch(c){
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
            return 1;
    }

    return 0;
}

int convertir_a_decimal(char cc){
     switch(cc){
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case 'a':
            return 10;
        case 'b':
            return 11;
        case 'c':
            return 12;
        case 'd':
            return 13;
        case 'e':
            return 14;
        case 'f':
            return 15;
        case 'A':
            return 10;
        case 'B':
            return 11;
        case 'C':
            return 12;
        case 'D':
            return 13;
        case 'E':
            return 14;
        case 'F':
            return 15;
    }

    return 1450;
}


