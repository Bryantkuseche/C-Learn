/* realizar un menu principal de dos opciones, siendo una de ellas salida
que cumpla con las siguientes caracteristicas:
    1: con un vector de 5 posiciones guardar y en la primera opcion colocar el numero mas bajo
    del vector.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void ordenar(){
     int vector[4], aux, i, j, k, buffer;
     printf("\n\n\t Llenado del vector");
     for(i=1;i<=4;i++){
                       printf("\n\n\t Llenado del vector");
                       printf("\n\n\t Espacio %i: ", i);
                       scanf("%i", &buffer);
                       vector[i] = buffer;
                       getch();
                       }
     for(j=1;j<=3;j++){
                       if(vector[j] < vector[j+1]){
                                    aux = vector[j];
                                    vector[1] = aux;
                       }
     }
     for(k=1;k=4;k++){
                      printf("\n\n\t Espacio %i = v[i]", vector[i]);
     }
     getch()
}
main(){
       int opcion, cont;
       system("cls");
       printf("\n\n\t Menu de Opciones");
       printf("\n\n\t Opcion 1:  Poner valor menor en 1");
       printf("\n\n\t Opcion 2: Salir");
       printf("\n\n\t >: ");
       scanf("%i", &opcion);
       while(cont <= 5){                  
                  switch(opcion){
                                 case 1:
                                      ordenar();
                                 break;
                                 case 2:
                                      printf("\n\n\t Presione una tecla para continuar");
                                      getch();
                                      cont = 6;
                                      return 0;
                                 break;
                                 default:
                                         printf("\n\n\t Opcion invalida");
                                 break;
                  }
       }
}
