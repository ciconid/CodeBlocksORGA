#include <stdio.h>
#include <stdlib.h>

void a();
int cant_digitos(int num);
void b();
int cant_veces_d_en_n(int num, int dig);
void c();
int cant_dig_pares_en_pos_impar(int n); // Este es el shell
int cant_dig_recur(int n, int p);
int es_par(int n);
int es_impar(int n);

int main()
{
    char opcion;

    printf("--- TPP A ej 7) --- \n");
    printf("a) Cantidad de digitos de un numero entero \n");
    printf("b) Cantidad de veces que aparece el digito d en n \n");
    printf("c) Cantidad de digitos pares en posicion impar \n");
    printf("\n");

    do{
        printf("Elija una opcion (a,b o c): ");
        scanf("%c", &opcion);
    }while(opcion != 'a' && opcion != 'b' && opcion != 'c');
    printf("\n");

    switch(opcion){
    case 'a':
        a();
        break;
    case 'b':
        b();
        break;
    case 'c':
        c();
        break;


    }






    return 0;
}

//-------- a -----------------
void a(){

    int n;

    do{
        printf("Ingrese un numero entero: ");
        scanf("%d", &n);

        if(n < 0){
            printf("Numero invalido! \n");
        }
    }while(n < 0);

    printf("Cantidad de digitos de %d: %d \n", n, cant_digitos(n));
}

int cant_digitos(int num){
    if(num <= 9){
        return 1;
    }else{
        return cant_digitos(num / 10) + 1;
    }
}
//-------- a -----------------
//-------- b -----------------
void b(){
    int n,
    d;

    printf("Ingrese un numero entero: ");
    scanf("%d", &n);
    printf("Ingrese un digito d: ");
    scanf("%d", &d);

    printf("\n");

    printf("El digito %d esta %d veces en %d \n", d, cant_veces_d_en_n(n,d), n);


}

int cant_veces_d_en_n(int num, int dig){
    if(num <= 9){
        if(num == dig){
            return 1;
        }else{
            return 0;
        }
    }else{
        int ultimo = num % 10;
        if(ultimo == dig){
            return cant_veces_d_en_n(num / 10, dig) + 1;
        }else{
            return cant_veces_d_en_n(num / 10, dig);
        }
    }

}

//-------- b -----------------
//-------- c -----------------
void c(){
    int n;

    printf("Ingrese n: ");
    scanf("%d", &n);

    printf("Cantidad de digitos pares en posiciones impares de %d es: %d \n",
            n, cant_dig_pares_en_pos_impar(n));


}
// Este es el shell
int cant_dig_pares_en_pos_impar(int n){
    return cant_dig_recur(n, 1);
}
int cant_dig_recur(int n, int p){
    int to_ret;

    //CB
    if(n <= 9){
        if(es_impar(p) && es_par(n)){
            to_ret = 1;
        }else{
            to_ret = 0;
        }
    }else{
        // CR
        int ultimo = n %10;
        if(es_impar(p) && es_par(ultimo)){
            to_ret = cant_dig_recur(n / 10, p + 1) + 1;
        }else{
            to_ret = cant_dig_recur(n / 10, p + 1);
        }
    }

    return to_ret;
}
int es_par(int n){
    return n % 2 == 0;
}
int es_impar(int n){
    return n % 2 != 0;
}









//-------- c -----------------
