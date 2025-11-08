#ifndef GOBERNADOR_H
#define GOBERNADOR_H
#include "municipio.h"

typedef struct Gobernador{
    char nombre[15];
    char apellido[15];
    char partido[12];
    int edad;
    int cargo;
    Municipio municipio[2];
}Gobernador;

void ingresarGobernador(Gobernador *);
void imprimirGobernador(Gobernador *);

#endif