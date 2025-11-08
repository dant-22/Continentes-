#include <stdio.h>
#include <string.h>

struct Asignatura{
	char nombre[22];
	int clave;
	int numCreditos;
	int semestre;
};

struct Alumno{
	char nombre[22];
	char apellido[22];
	int numCuenta;
	float promedio;
	struct Asignatura asignar[3];
};

void materias(struct Alumno *);

void imprimir(struct Alumno alumno);

void modificar(struct Alumno *);

void menu(int *);

int main(){
	int opc;
	menu(&opc);
    struct 	Alumno alumno1 = {"Maria", "Viramontes", 32245678, 8.9};
    struct 	Alumno alumno2= {"Julia", "Vargas", 32246790, 9.2};
    struct 	Alumno alumno3 = {"Enrique", "Garcia", 32278902, 7.8};
	
    while(opc !=7){
		switch(opc) {
            case 1: 
                materias(&alumno1);
                imprimir(alumno1);
			break;
			case 2:
                materias(&alumno2);
                imprimir(alumno2);
			break;
			case 3:
				materias(&alumno3);
				imprimir(alumno3);
			break;
			case 4: 
                modificar(&alumno1);
                materias(&alumno1);
                imprimir(alumno1);
			break;
            
            case 5:
                modificar(&alumno2);
                materias(&alumno2);
                imprimir(alumno2);
            break;
            
            case 6:
                modificar(&alumno3);
                materias(&alumno3);
                imprimir(alumno3);
            break;

            case 7:
            break;

			default:
				printf("Opcion invalida");
			break;
		}
		menu(&opc);
	}
	printf("Programa finalizado");
	return 0;
}

void materias(struct Alumno *alumn){
	int i;
	struct Asignatura materias[5]= {
		{"Calculo", 1221, 6, 2},
		{"Fisica", 1333, 4, 1},
		{"Geometria", 1721, 2, 2},
		{"Algebra", 1227, 2, 3},
		{"Mecanica", 1121, 4, 1},
	};
	for(i= 0; i<3; i++){
		alumn -> asignar[i] = materias[i];
	}

}

void imprimir(struct Alumno alumno){
	int i;
	printf("Nombre: %s\n", alumno.nombre);
	printf("Apellido: %s\n", alumno.apellido);
	printf("Numero de Cuenta: %d\n", alumno.numCuenta);
	printf("Promedio: %f\n", alumno.promedio);
	printf("\n");

	for (i=0; i<3; i++){
		printf("Nombre materia: %s\n", alumno.asignar[i].nombre);
		printf("Clave: %d\n", alumno.asignar[i].clave);
		printf("Numero de creditos: %d\n", alumno.asignar[i].numCreditos);
		printf("Semestre: %d\n", alumno.asignar[i].semestre);
		printf("\n");
	}
}

void modificar(struct Alumno *alumn){
    int a;
    char nomb[22], ape[22];
    printf("Solo ponga el numero\n");
    printf("Modificar su nombre: 1.Si / 2.No: ");
    scanf("%d", &a);
    if(a==1){
        printf("Nuevo nombre: ");
        scanf("%s", &nomb);
        fflush(stdin);//para limpiar el buffer
        strcpy(alumn-> nombre, nomb);
    }
    
    printf("Modificar su apellido: 1.Si / 2.No: ");
    scanf("%d", &a);
    if(a==1){
        printf("Ingrese apellido: ");
        scanf("%s", &ape);
        fflush(stdin);
        strcpy(alumn-> apellido, ape);
    }

    printf("Modificar su numero de cuenta: 1.Si / 2.No: ");
    scanf("%d", &a);
    if(a==1){
        printf("Ingrese numero de cuenta: ");
        scanf("%d", &alumn-> numCuenta);
    }

    printf("Modificar su promedio: 1.Si / 2.No: ");
    scanf("%d", &a);
    if(a==1){
        printf("Ingrese promedio: ");
        scanf("%f", &alumn-> promedio);
    }   
}

void menu(int *opc){
    printf("--Datos de alumnos--\n");
	printf("1.Alumno 1\n");
	printf("2.Alumno 2\n");
	printf("3.Alumno 3\n");
    printf("4.Modificar datos de alumno 1\n");
    printf("5.Modificar datos de alumno 2\n");
    printf("6.Modificar datos de alumno 3\n");
	printf("7.Salir\n");
	printf("Seleccione una opcion: ");
    scanf("%d", opc);
}