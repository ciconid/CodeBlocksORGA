#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int segundos;
    int minutos = 0, horas = 0;

    printf("Ingrese la cantidad de segundos: ");
    scanf("%ld", &segundos);

    if(segundos >= 60){
        minutos = segundos / 60;
        segundos = segundos % 60;
    }

    if(minutos >= 60){
        horas = minutos /60;
        minutos = minutos % 60;
    }

    printf("%02d:%02d:%02ld", horas, minutos, segundos);

    return 0;
}
