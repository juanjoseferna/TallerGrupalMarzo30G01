#include "donador.h"

void agregarDonador(donador matriz[][CAP], int lista[]){
    int tipo;
    printf("\nEscoga su tipo de sangre\n");
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
    if(tipo >= 0 && tipo <= 7){
        if(lista[tipo] != 5){
            printf("Nombre: ");
            scanf("%s", matriz[tipo][lista[tipo]].nombre);
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
        printf("Opción invalida\n");
    }
}

void mostrarTipoSangre(donador matriz[][CAP], int lista[], tipoSangre tiposSangre)
{
    int i;
    for (i = 0; i < lista[tipoSangre]; i++)
    {
        donador d = matriz[tipoSangre][i];
        printf("Nombre del donador: %s\n Edad: %d\n", d.nombre, d.edad);   
    }
}

void mostrarDonables(donador matriz[][CAP], int lista[]){

    tipoSangre donante;

    printf("Ingrese su tipo de sangre:\n> ");
    scanf("%d", &donante);

    switch(donante){
        case AP:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case AN:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, AN);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case BP:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case BN:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, BN);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case ABP:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, ABP);
            break;
        case ABN:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, ABN);
            break;
        case OP:
            printf("Le puedes donar a las siguientes personas:\n");
            mostrarTipoSangre(matriz, lista, AP);
            mostrarTipoSangre(matriz, lista, BP);
            mostrarTipoSangre(matriz, lista, ABP);
            mostrarTipoSangre(matriz, lista, OP);
            break;
        case ON:
            printf("Le puedes donar a las siguientes personas:\n");
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
