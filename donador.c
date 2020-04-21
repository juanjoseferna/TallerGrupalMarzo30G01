#include "donador.h"

void agregarDonador(donador matriz[][CAP], int lista[]){
    int tipo;
    printf("\nEscoja su tipo de sangre\n");
    printf("1. A+\n");
    printf("2. A-\n");
    printf("3. B+\n");
    printf("4. B-\n");
    printf("5. AB+\n");
    printf("6. AB-\n");
    printf("7. O+\n");
    printf("8. O-\n");
    printf("Tipo: ");
    scanf("%d", &tipo);
    tipo--;
    if(tipo >= 0 && tipo <= 7){ // Numeros mágicos
        if(lista[tipo] != 5){// Numeros mágicos
            printf("Nombre: ");
            scanf("%20s", matriz[tipo][lista[tipo]].nombre);
            printf("Edad: ");
            scanf("%d", &matriz[tipo][lista[tipo]].edad);
            lista[tipo]++;
            printf("Persona agregada exitosamente\n");
        }
        else{
            printf("No hay cupo\n");
        }
    }
    else{
        printf("Opcion invalida\n");
    }
}

void mostrarTipoSangre(donador matriz[][CAP], int lista[], tipoSangre tipoSangre)
{
    int i;
    
    for (i = 0; i < lista[tipoSangre]; i++)
    {
        // Me gustaría que la variable tuviera un nombre mejor a d
        donador d = matriz[tipoSangre][i];
        printf("Nombre: %s\n Edad: %d\n", d.nombre, d.edad);   
    }
}

void mostrarDonables(donador matriz[][CAP], int lista[]){

    tipoSangre donante;

    printf("\n"); printf("1. A+ \n2. A- \n3. B+ \n4. B- \n5. AB+\n"
		"6. AB- \n7. O+ \n8. O-\n");
    printf("Ingrese su tipo de sangre:\n> ");
    scanf("%d", &donante); donante--;

    // Muy buen uso de enums
    switch(donante){
        case AP:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre AP:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case AN:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre AN:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, AN);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case BP:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre BP:\n");
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case BN:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre BN:\n");
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, BN);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case ABP:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre ABP:\n");
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case ABN:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre ABN:\n");
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case OP:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre OP:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, OP);
            break;
        case ON:
            printf("Le puedes donar a las siguientes personas con tipo de Sangre ON:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, AN);
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, BN);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            mostrarTipoSangre(matriz, lista, OP);
            mostrarTipoSangre(matriz, lista, OP);
            break;
        default:
            printf("Tipo de sangre invalido.\n");
    }
}
