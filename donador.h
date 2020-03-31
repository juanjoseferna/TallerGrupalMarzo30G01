#include <stdio.h>
#include <string.h>
#define CAP 5

typedef struct donador donador;
typedef enum tipoSangre tipoSangre;

struct donador{
    char nombre[21];
    int edad;
};

enum tipoSangre{
    AP, AN, BP, BN, ABP, ABN, OP, ON 
};

//Funcion que permite agregar un donador
void agregarDonador(donador matriz[][CAP], int lista[]);

//Funcion que muestra las personas con un tipo de sangre
void mostrarTipoSangre(donador matriz[][CAP], int lista[]);

//funcion que muestra las personas a las que le puede donar alguien
void mostrarDonables(donador matriz[][CAP]);
