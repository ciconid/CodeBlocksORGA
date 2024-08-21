#include <stdio.h>
#include <stdlib.h>

int prolijo(long int n); //SHELL
int asc_rec(long int n);
int desc_rec(long int n);

int main()
{
    long int n;

    printf("Ingrese n (MAX %ld): ", LONG_MAX);
    scanf("%ld", &n);

    if(prolijo(n)){
        printf("%ld es prolijo \n", n);
    }else{
        printf("%ld NO es prolijo \n", n);
    }

    long int ini, fin;
    printf("Ingrese inicio y fin del intervalo (MAX %ld): ", LONG_MAX);
    scanf("%ld %ld", &ini, &fin);
    for(int i = ini; i < fin; i++){
        if(prolijo(i)){
            printf("%d es prolijo \n", i);
        }else{
            printf("%d NO es prolijo \n", i);
        }
    }
    /*for(int i = fin; i >= ini; i--){
        if(prolijo(i)){
            printf("%d es prolijo \n", i);
        }else{
            printf("%d NO es prolijo \n", i);
        }
    }*/

    return 0;
}

int prolijo(long int n){ //SHELL
    int ult = n % 10,
        pen = (n / 10) % 10;

    if(n <= 9) return 1;

    if(ult == pen) return 0;

    if(n <= 99) return 1;

    if(ult > pen){
        return asc_rec(n / 10);
    }else{
        return desc_rec(n / 10);
    }



    return 0;
}

int asc_rec(long int n){
    int ult = n % 10,
        pen = (n / 10) % 10;

    if(ult <= pen) return 0;
    //  si estoy aca entonces ult > pen
    if(n <= 99) return 1;
    // si estoy aca n > 99
    return asc_rec(n / 10);
}

int desc_rec(long int n){
    int ult = n % 10,
        pen = (n / 10) % 10;

    if(ult >= pen) return 0;
    //  si estoy aca entonces ult < pen
    if(n <= 99) return 1;
    // si estoy aca n > 99
    return desc_rec(n / 10);
}
