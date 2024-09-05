#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[],int size){
    for(int i = 0; i < size; i++){
        printf("%d - %d \n",i,arr[i]);
    }
    printf("\n");
}
void print_punt(int** arr,int size){
    for(int i = 0; i < size; i++){
        printf("%d - %d \n",i,**arr);
        arr++;
    }
    printf("\n");
}

void invertir_arr_num(int arr [], int size){
    int f = 0, c = size-1;
    int aux;
    while(f < c){
        aux = arr[f];
        arr[f++] = arr[c];
        arr[c--] = aux;
    }
}
/*void invertir_arr_punt(int ** arr, int size){
    int ** cola = arr + size - 1;
    int * aux;
    while(arr != cola){
        aux = *arr;
        *arr = *cola;
        *cola = aux;
        if ((++arr)!=cola)
            cola--;
    }
}*/

void invertir_arr_punt(int* arr[], int size){
    int* aux;
    for(int i = 0; i < size / 2; i++){
        aux = arr[i];
        arr[i] = arr[size - (i + 1)];
        arr[size - (i + 1)] = aux;
    }
}
int main(){
    int longitud = 3;
    int arr_num [longitud];
    int * arr_punt [longitud];
    // INICIALIZACION
    int i = 0;
    for(i=0; i<longitud; i++){
        arr_num[i] = i+1;
        arr_punt[i] = &arr_num[i];
    }

    print_arr(arr_num,longitud);
    print_punt(arr_punt,longitud);

    // INSTRUCCION 1
    invertir_arr_num(arr_num, longitud);
    // INSTRUCCION 2
    invertir_arr_punt(arr_punt, longitud);
    return 0;
}
