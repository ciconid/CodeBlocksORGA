#include <stdio.h>
#include <stdlib.h>

void a();
int cant_digitos(int num);
void b();
int cant_veces_d_en_n(int num, int dig);

int main()
{
    char opcion;

    printf("--- TPP A ej 7) --- \n");
    printf("a) Cantidad de digitos de un numero entero \n");
    printf("b) Cantidad de veces que aparece el digito d en n \n");
    printf("c) \n");
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
