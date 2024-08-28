#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int size);
void a();
void ini_random_primeros(int n, int arr[], int size_arr);
void b();
void ordenar_asc(int n, int arr[]);
void c();
int esta_ordenado_asc(int n, int arr[]);
void d();
int* intercalar_ordenado(int a1[], int size_a1, int a2[], int size_a2);


int main()
{
    printf("--- MAIN --- \n");

    //a();
    //b();
    //c();
    d();

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

void c(){
    int n, pri;

    printf("-- C -- \n");
    printf("Ingrese primeros numeros a inicializar: ");
    scanf("%d", &pri);
    int size = pri + 10,
        arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = -1;
    }
    ini_random_primeros(pri, arr, size);
    print_array(arr,size);


    printf("Ingrese n: ");
    scanf("%d", &n);
    if(esta_ordenado_asc(n,arr)){
        printf("Los primeros %d elementos del arreglo estan ordenados ascendemente \n",n);
    }else{
        printf("Los primeros %d elementos del arreglo NO estan ordenados ascendemente \n",n);
    }

    ordenar_asc(pri,arr);
    print_array(arr,size);

    if(esta_ordenado_asc(n,arr)){
        printf("Los primeros %d elementos del arreglo estan ordenados ascendemente \n",n);
    }else{
        printf("Los primeros %d elementos del arreglo NO estan ordenados ascendemente \n",n);
    }

}
int esta_ordenado_asc(int n, int arr[]){
    int ultimo = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] <= ultimo){
            return 0;
        }
        ultimo = arr[i];
    }

    return 1;
}

void d(){
    int a1[5],
        a2[5];
    int* intercalados;

    //ini_random_primeros(5,a1,5);
    a1[0] = 5;
    a1[1] = 3;
    a1[2] = 2;
    a1[3] = 6;
    a1[4] = 9;
    ordenar_asc(5,a1);
    //ini_random_primeros(5,a2,5);
    a2[0] = 4;
    a2[1] = 1;
    a2[2] = 2;
    a2[3] = 6;
    a2[4] = 9;
    ordenar_asc(5,a2);
    printf("a1 \n");
    print_array(a1,5);
    printf("a2 \n");
    print_array(a2,5);

    intercalados = intercalar_ordenado(a1,5,a2,5);

    printf("intercalados \n");
    print_array(intercalados,10);


    free(intercalados);
}
int* intercalar_ordenado(int a1[], int size_a1, int a2[], int size_a2){
    int ia1 = 0,
        ia2 = 0,
        i = 0;
    int* to_ret = (int*)malloc((size_a1 + size_a2) * sizeof(int));

    while(ia1 < size_a1 && ia2 < size_a2){
        if(a1[ia1] == a2[ia2]){
            to_ret[i] = a1[ia1];
            ia1++;
            ia2++;
        }else{
            if(a1[ia1] < a2[ia2]){
                to_ret[i] = a1[ia1];
                ia1++;
            }else{
                to_ret[i] = a2[ia2];
                ia2++;
            }
        }
        i++;
    }
    while(ia1 < size_a1){
        to_ret[i] = a1[ia1];
        ia1++;
        i++;
    }
    while(ia2 < size_a2){
        to_ret[i] = a2[ia2];
        ia2++;
        i++;
    }
    while(i < size_a1 + size_a2){
        to_ret[i] = 0;
        i++;
    }


    return to_ret;

}
