#include <stdio.h>
#include <stdlib.h>

void a();
void ini_random_primeros(int n, int arr[], int size_arr);
void b();
void ordenar_asc(int n, int arr[]);
void print_array(int arr[], int size);

int main()
{
    printf("--- MAIN --- \n");

    //a();
    b();


    return 0;
}

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d - %d \n", i, arr[i]);
    }
}
void a(){
    int n;

    printf("-- A -- \n");
    printf("Ingrese n: ");
    scanf("%d", &n);

    int size = n + 10,
        arr[size];

    for(int i = 0; i < size; i++){
        arr[i] = -1;
    }

    ini_random_primeros(n,arr,size);

    print_array(arr, size);




}

void ini_random_primeros(int n, int arr[], int size_arr){
    for(int i = 0; i < n; i++){
        arr[i] = rand();
    }
}

void b(){
    int n, pri;

    printf("-- B -- \n");
    printf("Ingrese primeros numeros a inicializar: ");
    scanf("%d", &pri);
    int size = pri + 10,
        arr[size];

    for(int i = 0; i < size; i++){
        arr[i] = -1;
    }
    ini_random_primeros(pri, arr, size);
    print_array(arr,size);

    printf("Ingrese primeros numeros a ordenar ascendentemente: ");
    scanf("%d", &n);
    ordenar_asc(n, arr);
    print_array(arr,size);


}
void ordenar_asc(int n, int arr[]){

    // BUBBLE SORT del Claudius
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


}

