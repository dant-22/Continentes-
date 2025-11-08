#include <stdio.h>
#include "municipio.h"
#include "alcalde.h"

void ingresarMunicipio(Municipio *ptM){
    printf("    Nombre del municipio: ");
    scanf(" %[^\n]", ptM->nombre);
    getchar();
    printf("Nombre del municipio ingresado: %s\n", ptM->nombre);  // Mensaje de depuración

    printf("    Tipo (Rural, Semiurbano, Urbano, Metropolitano): \n");
    scanf(" %[^\n]", ptM->tipo);
    getchar();
    printf("Tipo del municipio ingresado: %s\n", ptM->tipo);  // Mensaje de depuración

    ingresarAlcalde(&ptM->alcalde);
    printf("\n");
}
void imprimirMunicipio(Municipio *printM){
    printf("        Municipio %s\n", printM->nombre);
    printf("        Tipo %s\n", printM->tipo);
    imprimirAlcalde(&printM->alcalde);
}