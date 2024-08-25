#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindroma(char str[]);
int palin_rec(char str[], int index, int longitud);

int main()
{
    char str[100],
        opcion;

    do{
        printf("Ingrese una cadena de caracteres (max 99 caracteres): ");
        scanf("%99s", str);

        if(palindroma(str)){
            printf("%s es palindroma \n", str);
        }else{
            printf("%s NO es palindroma \n", str);
        }


        printf("Ingrese X para salir y cualquier otra cosa para repetir: ");


        scanf("%c", &opcion); //Este scanf lo uso para descartar el caracter "new line" '\n'
        scanf("%c", &opcion); //Acá se lee la opcion de seguir o cortar

    }while(opcion != 'x' && opcion != 'X');




    return 0;
}

int palindroma(char str[]){
    return palin_rec(str, 0, strlen(str));
}
int palin_rec(char str[], int index, int longitud){
    if(str[index] != str[longitud - (index + 1)]) return 0;

    if(index + 1 < longitud / 2) return palin_rec(str, index + 1, longitud);

    return 1;
}
