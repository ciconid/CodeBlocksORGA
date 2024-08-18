#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mph,kph,kpm;

    printf("Ingrese millas por hora (m/h): ");
    scanf("%f",&mph);

    kph = mph * 1.609344;
    kpm = kph / 60;

    printf("%.2f mph son %.2f kpm \n", mph, kpm);



    return 0;
}
