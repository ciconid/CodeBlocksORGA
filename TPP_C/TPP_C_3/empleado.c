#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "empleado.h"

// Implementacion de funciones relacionadas con empleado
void imprimir_empleado(struct empleado e){
    printf("Apellido: %s \n",e.apellido);
    printf("Nombre: %s \n",e.nombre);
    printf("Domicilio: %s \n",e.domicilio);
    printf("Telefono: %s \n",e.telefono);
    if(e.sexo == m){
        printf("Sexo: Masculino \n");
    }else{
        printf("Sexo: Femenino \n");
    }
    printf("Edad: %d \n",e.edad);
    switch(e.estudios_cursados){
        case primarios:
            printf("Estudios Cursados: Primarios \n");
            break;
        case secundarios:
            printf("Estudios Cursados: Secundarios \n");
            break;
        case terciarios:
            printf("Estudios Cursados: Terciarios \n");
            break;
        case universitarios:
            printf("Estudios Cursados: Universitarios \n");
            break;
        case posgrado:
            printf("Estudios Cursados: Posgrado \n");
            break;
    }
    switch(e.estado_civil){
        case soltero:
            printf("Estado Civil: Soltero \n");
            break;
        case casado:
            printf("Estado Civil: Casado \n");
            break;
        case viudo:
            printf("Estado Civil: Viudo \n");
            break;
        case divorciado:
            printf("Estado Civil: Divorciado \n");
            break;
    }
}


/*struct empleado {
    char apellido[40];
    char nombre[40];
    char domicilio[50]; // Quizas es mejor usar un struct de tipo domicilio
    char telefono[30];
    enum sex sexo;
    int edad;
    enum estudios estudios_cursados;
    enum est_civ estado_civil;
};*/
