#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void misterio(char cadena[]);
void shamoun(int integer, char ascii[]);

int main()
{
    char str[20];
    int n;

    printf("Ingrese n: ");
    scanf("%d",&n);

    shamoun(n, str);

    printf("%d --> %s \n", n, str);
    return 0;
}

void misterio(char cadena[]){
    int tmpch, i, j;
    for (i = 0, j = strlen(cadena) - 1; i < j; i++, j--) {
        tmpch = cadena [i];
        cadena[i] = cadena[j];
        cadena[j] = tmpch;
    }
}

void shamoun(int integer, char ascii[]) {
    int index = 0,
        sign = integer;

    if (sign < 0) integer = -integer;
    do {
        ascii[index++] = integer % 10 + '0';
    } while ((integer /= 10) > 0);
    if (sign < 0) ascii[index++] = '-';
    ascii[index] = '\0';
    misterio(ascii);
}




