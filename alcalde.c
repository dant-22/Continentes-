#include <stdio.h>
#include "alcalde.h"

void ingresarAlcalde(Alcalde *ptA){
    printf("  Datos del alcalde\n");
    printf("    Nombre: ");
    scanf(" %[^\n]", ptA->nombre);
    getchar();  
    printf("Nombre del alcalde ingresado: %s\n", ptA->nombre);  // Mensaje de depuración

    printf("    Apellido: ");
    scanf(" %[^\n]", ptA->apellido);
    getchar(); 
    printf("Apellido del alcalde ingresado: %s\n", ptA->apellido);  // Mensaje de depuración 

    printf("    Partido Politico: ");
    scanf(" %[^\n]", ptA->partido);
    getchar();  
    printf("Partido del alcalde ingresado: %s\n", ptA->partido);  // Mensaje de depuración


    printf("    Edad: ");
    scanf("%d", &ptA->edad);  
    getchar();  
    printf("Edad del alcalde ingresada: %d\n", ptA->edad);  // Mensaje de depuración
}

void imprimirAlcalde(Alcalde *printAlcalde){
    printf("        Alcalde %s %s\n", printAlcalde->nombre, printAlcalde->apellido);
    printf("        Partido Politico %s\n", printAlcalde->partido);
}
