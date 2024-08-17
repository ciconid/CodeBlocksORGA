#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, anio;

    printf("Ingrese dia mes anio (separados con espacios): \n");
    scanf("%d %d %d", &dia, &mes, &anio);

    if(mes < 1 || mes > 12 || dia < 1 || dia > 31){
        printf("Los numeros ingresados no representan una fecha valida \n");
        return 0;
    }

    switch(mes){
        case 4:
        case 6:
        case 9:
        case 11:
            //printf("30 dias \n");
            if(dia > 30){
                printf("Los numeros ingresados no representan una fecha valida \n");
                return 0;
            }
            break;
        case 2:
            //printf("febrero \n");
            if(dia > 28){
                printf("Los numeros ingresados no representan una fecha valida \n");
                return 0;
            }
            break;
    }


    printf("Fecha valida \n");
    printf("La fecha es %d/%d/%d \n", dia, mes, anio);




    return 0;
}
