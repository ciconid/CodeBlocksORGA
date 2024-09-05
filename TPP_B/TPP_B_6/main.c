#include <stdio.h>
#include <stdlib.h>

// ---------- GLOBAL VARS
int tamanio = 0;
// ----------------------

void reemplazar(int arr[], int a, int n);
void reemplazar1(int* arr, int a, int n, int size);
void print_arr(int arr[], int size);

int main()
{
    int arr[5],
        a = 3,
        n = 0;
    int* parr;

    // Inicializacion de variables
    tamanio = 5;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    print_arr(arr,tamanio);

    reemplazar(arr,a,n);
    printf("Reemplazar pasando el array \n");
    print_arr(arr,tamanio);
    printf("\n");

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    print_arr(arr,tamanio);

    parr = &arr[0];
    reemplazar1(parr,a,n,tamanio);
    printf("Reemplazar pasando el puntero \n");
    print_arr(arr,tamanio);
    printf("\n");

    return 0;
}

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d - %d \n",i,arr[i]);
    }
}
void reemplazar(int arr[], int a, int n){
    for(int i = 0; i < tamanio; i++){
        if(arr[i] == a){
            arr[i] = n;
        }
    }
}
void reemplazar1(int* arr, int a, int n, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == a){
            arr[i] = n;
        }
    }
}


