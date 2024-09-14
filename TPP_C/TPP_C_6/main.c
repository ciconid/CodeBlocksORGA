#include <stdio.h>
#include <stdlib.h>

int cantidad_alumnos(int** pplu, char** pp_calif, int initial_size){
    int num_libreta,
        index = 0,
        size_maximo = initial_size;
    char seguir = 'a',
        calif;

    do{
        printf("Ingrese numero de libreta: ");
        scanf("%d",&num_libreta);fflush(stdin);
        printf("Ingrese calificacion: ");
        scanf("%c",&calif);fflush(stdin);

        (*pplu)[index] = num_libreta;
        (*pp_calif)[index] = calif;
        index++;


        // RESIZE
        if(index == size_maximo){
            (*pplu) = (int*) realloc(*pplu,(size_maximo * 2) * sizeof(int));
            (*pp_calif) = (char*) realloc(*pp_calif,(size_maximo * 2) * sizeof(char));
            size_maximo = size_maximo * 2;
        }





        printf("Ingrese 'x' para salir o cualquier caracter para continuar: ");
        scanf("%c",&seguir);
    }while(seguir!='x');





    return index;
}

/////////////////////////////////////// MAIN
int main()
{
    // VARIABLES
    int** pplu;
    int* plu;
    int cantidad = 0,
        initial_size = 3;
    char** pp_calif;
    char* p_calif;

    // MEMORY ALLOCATION
    pplu = &plu;
    plu = (int*) malloc(initial_size * sizeof(int));
    if(plu == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    pp_calif = &p_calif;
    p_calif = (char*) malloc(initial_size * sizeof(char));
    if(p_calif == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }



    cantidad = cantidad_alumnos(pplu, pp_calif , initial_size);
    printf("\nCantidad de alumnos ingresados: %d \n",cantidad);
    for(int i = 0; i < cantidad; i++){
        printf("%d - %d - %c \n",i,(*pplu)[i],(*pp_calif)[i]);
    }



    free(*pplu);
    free(*pp_calif);
    return 0;
}
