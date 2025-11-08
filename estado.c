#include <stdio.h>
#include "estado.h"
#include "gobernador.h"

void ingresarEstado(Estado *ptE){
    printf("    Nombre del estado: ");
    scanf(" %[^\n]", ptE->nombre);
    getchar();
    printf("Nombre del estado ingresado: %s\n", ptE->nombre);  // Mensaje de depuración


    printf("    Clave: ");
    scanf("%d", &ptE->clave);
    getchar();
    printf("Clave del estado ingresado: %d\n", ptE->clave);  // Mensaje de depuración


    printf("    Cantidad de poblaci%cn: ", 162);
    scanf("%d", &ptE->poblacion);
    getchar();
    printf("Poblacion del estado ingresada: %d\n", ptE->poblacion);  // Mensaje de depuración


    ingresarGobernador(&ptE->gobernador);
}

void imprimirEstado(Estado *printE) {
    printf("Nombre: %s\n", printE->nombre);
    printf("Clave: %d\n", printE->clave);
    printf("Cantidad de poblaci%cn: %d\n", 162, printE->poblacion);
    imprimirGobernador(&printE->gobernador);
    printf("\n");
}
