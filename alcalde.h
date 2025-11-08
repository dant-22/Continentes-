#ifndef ALCALDE_H
#define ALCALDE_H

typedef struct Alcalde{
    char nombre[15];
    char apellido[15];
    char partido[12];
    int edad;
}Alcalde;

void ingresarAlcalde(Alcalde *);
void imprimirAlcalde(Alcalde *);

#endif