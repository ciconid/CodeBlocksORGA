#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,
        num,
        mayor = 0,
        menor = LONG_MAX;
    float prom,
        suma = 0.0;

    printf("Cuantos numeros va a ingresar?: ");
    scanf("%ld",&n);

    for(int i = 0; i < n; i++){
        printf("Ingrese num: ");
        scanf("%ld",&num);

        if(num > mayor){
            mayor = num;
        }

        if(num < menor){
            menor = num;
        }

        suma = suma + num;
    }

    prom = suma / n;

    printf("Mayor: %ld \n",mayor);
    printf("Menor: %ld \n",menor);
    printf("Promedio: %.2f \n",prom);





    return 0;
}
