#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"
#include "automovil.h"

#define DEBUG

int main()
{



    #ifdef DEBUG
        struct empleado e = {"Gonzalez","Speedy","123 Guga St.","420660",
                                m,32,posgrado,casado};
//        struct automovil a = {"Fiat","Argo",2023,"CID248",muy_bueno,9000000};

  /*      printf("%s \n",e.apellido);
        printf("%s \n",e.nombre);
        printf("%d \n",e.edad);

        e.edad = 46;
        strcpy(e.nombre,"Ruperto");

        printf("%s \n",e.apellido);
        printf("%s \n",e.nombre);
        printf("%d \n",e.edad);*/

        imprimir_empleado(e);



    #endif // DEBUG

    return 0;
}
