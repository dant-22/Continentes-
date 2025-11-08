#ifndef CONTINENTE_H
#define CONTINENTE_H
#include "pais.h"

typedef struct Continente{
    char nombre[22];
    int codigo;
    Pais pais[3];
}Continente;

void ingresarContinente(Continente *);
void imprimirContinente(Continente *);

#endif