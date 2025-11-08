#include <stdio.h>
#include "continente.h"
#include "pais.h"

void ingresarContinente(Continente *ptC){
    int i;
    printf("CONTINENTE\n");
    printf("Nombre: ");
    scanf(" %[^\n]", ptC->nombre);
    getchar();
    printf("    Nombre del continente ingresado: %s\n", ptC->nombre);  // Mensaje de depuracion


    printf("Codigo:");
    scanf("%d", &ptC->codigo);
    getchar();
    printf("    C%cdigo del continente ingresado: %d\n", 162, ptC->codigo);  // Mensaje de depuracion


    printf("\n");

    for(i=0; i<3; i ++){
        printf("Pais[%d] \n", i+1);
        ingresarPais(&ptC->pais[i]);
        printf("=======DEL PAIS %s ingresado\n", ptC->pais[i].nombre);
    }
}

void imprimirContinente(Continente *printContinente){
    int i;
    printf("Continente %s\n", printContinente->nombre);
    printf(" C%sdigo %d\n", 162, printContinente->codigo);
    
    for(i=0; i<3; i++) {
        printf("PAIS[%d]\n", i+ 1);
        imprimirPais(&printContinente->pais[i]);
    }
}