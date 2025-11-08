#include <stdio.h>
#include "gobernador.h"
#include "municipio.h"

void ingresarGobernador(Gobernador *ptG){
    int i;
    printf("  Datos del gobernador\n");
    printf("    Nombre: ");
    scanf(" %[^\n]", ptG->nombre);
    getchar();
    printf("Nombre del gobernador ingresado: %s\n", ptG->nombre);  // Mensaje de depuración


    printf("    Apellido: ");
    scanf(" %[^\n]", ptG->apellido);
    getchar();
    printf("Apellido del gobernador ingresado: %s\n", ptG->apellido);  // Mensaje de depuración


    printf("    Edad: ");
    scanf("%d", &ptG->edad);
    getchar();
    printf("Edad del gobernador ingresada: %d\n", ptG->edad);  // Mensaje de depuración


    printf("    Partido: ");
    scanf(" %[^\n]", ptG->partido);
    getchar();
    printf("Partido del gobernador ingresado: %s\n", ptG->partido);  // Mensaje de depuración


    printf("    A%cos en el cargo: ", 164);
    scanf("%d", &ptG->cargo);
    getchar();
    printf("Cargo del gobernador ingresado: %d\n", ptG->cargo);  // Mensaje de depuración
    printf("\n");


    for(i=0; i<2;i++){
        printf("Municipio[%d]\n", i+1);
        ingresarMunicipio(&ptG->municipio[i]);
    }
}

void imprimirGobernador(Gobernador *printG){
    int i;
    printf("Gobernador %s %s \n", printG->nombre, printG->apellido);
    printf("Edad %d a%cos\n", printG->edad, 164);
    printf("Pertenenciente al partido %s\n", printG->partido);
    printf("%d a%cos en el cargo\n", printG->cargo, 164);
    printf("\n");

    for(i=0;i<2;i++){
        printf("    //Municipio[%d]\n", i+1);
        imprimirMunicipio(&printG->municipio[i]);
    }
}