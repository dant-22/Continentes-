#include <stdio.h>
#include "pais.h"
#include "presidente.h"
#include "estado.h"

void ingresarPais(Pais *ptPI){
    int i;
    printf("Nombre del pais: ");
    scanf(" %[^\n]", ptPI->nombre);
    getchar();
    printf("    Nombre del pais ingresado: %s\n", ptPI->nombre);  //Mensaje de depuracion


    printf("C%cdigo: ", 162);
    scanf("%d", &ptPI->codigo);
    getchar();
    printf("    C%cdigo del pais ingresado: %d\n",162, ptPI->codigo);  //Mensaje de depuracion
    
    ingresarPresidente(&ptPI->presidente);

    for(i=0; i<2; i++){
        printf("//ESTADO[%d]\n", i + 1);
        ingresarEstado(&ptPI->estado[i]);
    } 
    printf("=================\n");//AQUI YA ES CUANDO TERMINA CON LOS DATOS DEL PAIS[i]
    printf("  DATOS FINALES  \n");
    printf("=================\n");
    imprimirPais(ptPI); 
}

void imprimirPais(Pais *printP){
    int i;
    printf("Pais %s\n", printP->nombre);
    printf("Codigo: %d\n", printP->codigo);
    
    imprimirPresidente(&printP->presidente);
    
    for(i=0; i<2; i++){
        printf("ESTADO[%d]\n", i+1);
        imprimirEstado(&printP->estado[i]);
    }
}