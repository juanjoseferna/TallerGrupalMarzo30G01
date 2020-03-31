
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
