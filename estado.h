#ifndef ESTADO_H
#define ESTADO_H
#include "gobernador.h"


typedef struct Estado{
    char nombre[25];
    int clave;
    int poblacion;
    Gobernador gobernador;
}Estado;

void ingresarEstado(Estado *);
void imprimirEstado(Estado *);

#endif