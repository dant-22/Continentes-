#ifndef PRESIDENTE_H
#define PRESIDENTE_H

typedef struct Presidente{
    char nombre[22];
    char apellido[22];
    int edad;
    int mandato;
}Presidente;

void ingresarPresidente(Presidente *);
void imprimirPresidente(Presidente *);


#endif