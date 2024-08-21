#include <stdio.h>
#include <stdlib.h>

int es_impar(int n);
int mediano(long int n);
int mediano_rec(long int n, int p);

int main()
{
    long int n;

    printf("Ingrese n (Maximo %ld): ", LONG_MAX);
    scanf("%ld", &n);

    printf("El mediano de %ld es: %d", n, mediano(n));



    return 0;
}

int es_impar(int n){
    return n % 2 != 0;
}
int mediano(long int n){ // Shell
    return mediano_rec(n, 1);
}
int mediano_rec(long int n, int p){
    int to_ret;

    // CB
    if(n <= 9){
        if(es_impar(p)){
            to_ret = n;
        }else{
            to_ret = n * -1;
        }
    }else{
        int ultimo = n % 10;
        if(es_impar(p)){
            to_ret = mediano_rec(n / 10, p + 1) + ultimo;
        }else{
            to_ret = mediano_rec(n / 10, p + 1) - ultimo;
        }
    }

    return to_ret;
}
