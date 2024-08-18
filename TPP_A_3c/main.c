#include <stdio.h>
#include <stdlib.h>

int main()
{
    float litros_cada_100km,kmpl,mpl,mpg;

    printf("Ingrese litros cada 100km: ");
    scanf("%f",&litros_cada_100km);

    kmpl = litros_cada_100km / 100;
    mpl = kmpl / 1.609344;
    mpg = mpl / 0.264172052;

    printf("%.2f litros cada 100 km equivale a %.2f millas por galon \n",litros_cada_100km,mpg);


    return 0;
}
