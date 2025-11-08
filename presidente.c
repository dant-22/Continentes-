#include <stdio.h>
#include "presidente.h"

void ingresarPresidente(Presidente *ptP){
    printf("    Datos del presidente\n");
    printf("        Nombre: ");
    scanf(" %[^\n]", ptP->nombre);
    getchar();
    printf("    Nombre del presidente ingresado: %s\n", ptP->nombre);

    printf("        Apellido: ");
    scanf(" %[^\n]", ptP->apellido);
    getchar();
    printf("    Apellido del presidente ingresado: %s\n", ptP->apellido);  // Mensaje de depuración


    printf("        Edad: ");
    scanf("%d", &ptP->edad);
    getchar();
    printf("    Edad del presidente ingresada: %d\n", ptP->edad);  // Mensaje de depuración


    printf("        A%cos de mandato: ", 164);
    scanf("%d", &ptP->mandato);
    getchar();
    printf("    A%cos de mandato ingresados: %d\n", 164, ptP->mandato);  // Mensaje de depuración
    
    printf("\n");
}

void imprimirPresidente(Presidente *printPresidente){
    printf("Presidente %s %s\n", printPresidente->nombre, printPresidente->apellido);
    printf("Edad %d a%cos \n", printPresidente->edad, 164);
    printf("%d a%cos de mandato\n", printPresidente->mandato, 164);
    printf("\n");
}