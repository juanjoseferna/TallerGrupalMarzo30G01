#include "donador.h"

void mostrarTipoSangre(donador matriz[][CAP], int lista[])
{
    int tipoSangre;
    printf("Ingrese Tipo de Sangre:/n 1)AP/n 2)AN/n 3)BP/n 4)BN/n 5)ABP/n 6)ABN/n 7)OP/n 8)ON/n");
    scanf("%d", &tipoSangre);
    int i;
    for (i = 0; i < lista[tipoSangre]; i++)
    {
       donador d = matriz[tipoSangre][i];
        printf("Nombre del donador: %s\n Edad: %d\n", d.nombre, d.edad);   
    }
}

void mostrarDonables(donador matriz[][CAP]){

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
