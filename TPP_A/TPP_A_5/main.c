#include <stdio.h>
#include <stdlib.h>

int main()
{
    int binario = 0,
        binario_orig = 0,
        ultimo = 0,
        decimal = 0,
        pot_2 = 1;

    printf("Ingrese un numero en binario: ");
    scanf("%d", &binario_orig);
    binario = binario_orig;

    while(binario != 0){
        ultimo = binario % 10;
        if(ultimo != 0 & ultimo != 1){
            printf("El numero ingresado no esta en binario!");
            return 0;
        }

        decimal = decimal + ultimo * pot_2;
        pot_2 = pot_2 * 2;
        binario = binario / 10;

    }

    printf("%d --> %d\n",binario_orig,decimal);

    return 0;
}
