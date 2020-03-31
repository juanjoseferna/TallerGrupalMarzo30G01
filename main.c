#include "donador.h"

int menu (donador matriz[][CAP], int lista[]){
	int opc;
	printf("Bienvenido, eliga la opcion que desee \n 1. Agregar nuevo donador \n "
		"2. Mostrar lo donadores por tipo de sangre \n 3. Mostrar que tipo de sangre puedes donar\n "
		"0. para salir \n");
	scanf("%i", &opc);
	if (opc == 1){
		agregarDonador(matriz,lista);
		menu(matriz,lista);
	}
	else if (opc == 2){
		int tipoSangre;
		printf("Ingrese el tipo de sangre \n 1. AP \n 2. AN \n 3. BP \n 4. BN \n 5. ABP \n 6. ABN \n 7. OP \n 8. ON\n");
		scanf("%i", &tipoSangre);
		tipoSangre-= 1;
		mostrarTipoSangre(matriz, lista, tipoSangre);
		menu(matriz,lista);
	}
	else if (opc == 3){
		mostrarDonables( matriz, lista);
		menu(matriz,lista);
	}
	else if (opc == 0){
		return 0;
	}
}

int main(){
	donador matriz[8][CAP];
	int lista[8];	
	menu(matriz,lista);
	return 0;
}
