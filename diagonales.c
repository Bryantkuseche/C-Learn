#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void opcion_1(){
	int matriz[3][3],vector[3],f,c, aux;
	/*Formato de la matriz */
	for(f=1;f<=3;f++){
		for(c=1;c<=3;c++){
			matriz[f][c] = 0;
		}
	}
	/*Formato del vector*/
	for(f=1;f<=3;f++){
		vector[f] = 0;
	}
	/*Llenado de la matriz*/
	for(f=1;f<=3;f++){
		for(c=1;c<=3;c++){
			printf("\n\n\t Espacio (%i,%i):\t");
			scanf("%i",&aux);
			matriz[f][c] = aux;
		}
	}
	/*Suma de las diagonal principal*/
	for(f=1;f<=3;f++){
		vector[1] = vector[1] + matriz[f][f]; 
	}
	/*suma de la diagonal secundaria */
	for(f=3;f<=1;f--){
		vector[2] = vector[1] + matriz[f][f];
	}
	/*suma de las dos diagonales */
	vector[3] = vector[1] + vector[2];
	/*mostrarla por pantalla*/
	for(f=1;f<=3;f++){
		printf("\n\n\t Espacio del vector %i: %i",f,vector[f]);
	}
	printf("\n\n\t");
	system("pause");
}
main(){
	int opcion, cont;
	cont = 0;
	while(cont < 5){
		printf("\n\n\t Menu principal:");
		printf("\n\n\t Seleccione una opcion:");
		printf("\n\n\t Opcion 1: Suma de diagonales");
		printf("\n\n\t Opcion 2: Salir");
		printf(">: ");
		scanf("%i", &opcion);
		switch(opcion){
			case 1:
				opcion_1();
			break;
			case 2:
				return 0;
			break;
			default:
				printf("\n\n\t Opcion invalida\n\n\t");
				system("pause");
			break;
		}

	}
}