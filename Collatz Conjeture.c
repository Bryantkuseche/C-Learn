/*La conjetura de Collatz, conocida también como conjetura 3n+1 o conjetura de Ulam (entre otros nombres), 
fue enunciada por el matemático Lothar Collatz en 1937, y a la fecha no se ha resuelto.*/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main(){
	int par, impar, aux, cont, iteraccion;
	printf("\n\n\t Conjetura de Collatz");
	printf("\n\n\t Esta conjetura dice que cualquier numero positivo dado");
	printf("\n\n\t nunca se sale de la secuencia 4 2 1");
	printf("\n\n\t Atencion: Este programa es un bucle infinito, matar cuando lo considere necesario.");
	printf("\n\n\t Introduzca un numero para encontrar un ejemplo");
	printf("\n\n\t >: ");
	scanf("%i", &aux);
	cont = 0;
	iteraccion = 1;
	while (cont < 5){
		if (aux % 2 == 0){
			par = aux;
			printf("\n\n\t %i", par);
			aux = (par / 2);
		}
		else {
			impar = aux;
			printf("\n\n\t %i", impar);
			aux = (3*impar + 1);
		}
		printf("\n\n\t Iteraccion: %i", iteraccion);
		printf("\n\n\t Presione ENTER para seguir buscando");
		getch();
		iteraccion = iteraccion + 1;
		
	}
	
}
