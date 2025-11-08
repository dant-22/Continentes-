#ifndef MUNICIPIO_H
#define MUNICIPIO_H
#include "alcalde.h"

typedef struct Municipio{
    char nombre[25];
    char tipo[12];
    Alcalde alcalde;
}Municipio;

void ingresarMunicipio(Municipio *);
void imprimirMunicipio(Municipio *);

#endif