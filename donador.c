
void mostrarTipoSangre(donador matriz[][CAP], int lista[], int tipoSangre)
{
  
    int i;
    for (i = 0; i < lista[tipoSangre-1]; i++)
    {
       donador d = matriz[tipoSangre-1][i];
        printf("Nombre del donador: %s\n Edad: %d\n", d.nombre, d.edad);
        
    }
}
