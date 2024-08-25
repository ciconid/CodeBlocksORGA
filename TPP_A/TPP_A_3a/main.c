#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius, farenheit;

    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    farenheit = 32.0 + (1.8 * celsius);

    printf("%.2f C equivalen a %.2f F \n", celsius, farenheit);

    return 0;
}
