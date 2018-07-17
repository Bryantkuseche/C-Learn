#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void matriz(){
     int f,c,i,j,aux, ci;
     printf("\n\n\t Introduzca su numero de cedula");
     printf("\n\n\t >:");
     scanf("%i", &ci);
     if(ci%2==0){
                 printf("\n\n\t Introduzca el numero de filas y columnas");
                 printf("\n\n\t >:");
                 scanf("%i",&f);
                 c=f;
     }
     else {
          printf("\n\n\t Introduzca el numero de filas");
          printf("\n\n\t >:");
          scanf("%i",&f);
          printf("\n\n\t Introduzca el numero de columnas");
          printf("\n\n\t >:");
          scanf("%i",&c);
     }
     int m[f][c];
     printf("\n\n\t Llenado del vector");
     for(i=1;i<=f;i++){
                       for(j=1;j<=c;j++){
                                         printf("\n\n\t Espacio(%i,%i) : ", i,j);
                                         scanf("%i",&aux);
                                         m[i][j] = aux;
                                         }
                       }
     for(i=1;i<=f;i++){
                       for(j=1;j<=c;j++){
                                         printf("\n\n\t matriz [%i][%i] = \t%i",i,j,m[i][j]);
                                         }
                                         printf("\n\n");
                       }
     system("pause");
     }

main() {
       int cont, opcion;
       cont = 1;
       while(cont < 5){
                  system("cls"); 
                  printf("\n\n\t Menu de opciones");
                  printf("\n\n\t Opcion 1: Llenado del vector");
                  printf("\n\n\t Opcion 2: Salir");
                  printf("\n\n\t >:");
                  scanf("%i",&opcion);
                  switch(opcion){
                                 case 1:
                                      matriz();
                                 break;
                                 case 2:
                                      system("Pause");
                                      return 0;
                                 break;
                                 default:
                                         printf("\n\n\t Opcion Invalida");
                                         getch();
                                 break;
                                 }
                  }
       }
