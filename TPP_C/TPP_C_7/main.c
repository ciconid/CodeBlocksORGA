#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// TIPOS CUSTOM
typedef struct alumno{
    int lu;
    char calif;

} Alumno;

///////////////
int ingresar_alumnos(Alumno** pp_alum, int size_inicial){
    char tecla,
        cal;
    int lu,
        index = 0,
        size_max = size_inicial;

    do{
        printf("Ingrese LU: ");
        scanf("%d",&lu);fflush(stdin);
        printf("Ingrese Calificacion: ");
        scanf("%c",&cal);fflush(stdin);

        (*pp_alum)[index].lu = lu;
        (*pp_alum)[index].calif = cal;
        index++;


        if(index == size_max){
            *pp_alum = (Alumno*) realloc(*pp_alum,size_max * 2 * sizeof(Alumno));
            size_max = size_max * 2;

            if(*pp_alum == NULL){
                printf("Memory allocation failed!\n");
                return 1;
            }
        }


        printf("Presione la tecla 'x' para salir\n");
        tecla = getch();
    }while(tecla != 'x');



    return index;
}

////////////////////////////// Main
int main()
{
    // Variables
    int size_inicial = 1,
        cantidad_alumnos;
    Alumno* p_alum;
    Alumno** pp_alum = &p_alum;

    // Memory Allocation
    p_alum = (Alumno*) malloc(size_inicial * sizeof(Alumno));
    if(p_alum == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    cantidad_alumnos = ingresar_alumnos(pp_alum,size_inicial);
    printf("\nCantidad de alumnos ingresados: %d\n",cantidad_alumnos);


    for(int i = 0; i < cantidad_alumnos; i++){
        printf("%d - %d - %c \n",i,(*pp_alum)[i].lu,(*pp_alum)[i].calif);
    }

    free(*pp_alum);
    return 0;
}
