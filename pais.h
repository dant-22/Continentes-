#ifndef PAIS_H
#define PAIS_H
#include "presidente.h"
#include "estado.h"

typedef struct Pais{
    char nombre[22];
    int codigo;
    Presidente presidente;
    Estado estado[2];
}Pais;

void ingresarPais(Pais *);
void imprimirPais(Pais *);

#endif