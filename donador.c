#include "donador.h"

void mostrarDonables(donador matriz[][CAP], int lista){

    tipoSangre donante;

    printf("Ingrese su tipo de sangre:\n> ");
    scanf("%d", &donante);

    switch(donante){
        case AP:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            break;
        case AN:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AN
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABN
            break;
        case BP:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            break;
        case BN:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BN
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABN
            break;
        case ABP:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            break;
        case ABN:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABN
            break;
        case OP:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para OP
            break;
        case ON:
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AN
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para BN
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para ABN
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para OP
            //mostrarTipoSangre(donador matriz[][CAP], int lista); para AN
            break;
        default:
            printf("Tipo de sangre invalido.\n");
    }
}