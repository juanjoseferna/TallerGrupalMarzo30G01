
void mostrarTipoSangre(donador matriz[][CAP], int lista[], int tipoSangre)
{
  
    int i;
    for (i = 0; i < lista[tipoSangre]; i++)
    {
       donador d = matriz[tipoSangre][i];
        printf("Nombre del donador: %s\n Edad: %d\n", d.nombre, d.edad);
        
    }
}
