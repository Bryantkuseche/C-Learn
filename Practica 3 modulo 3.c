/*Practica 3 - Modulo 3 */
/*escribir un programa que permita llenar 2 matrices de 3x3, y ordenarlas de
mayor a menor y de menor a mayor*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void matriz1(){
     int f,c,m1[3][3],v[3],aux;
     printf("\n\n\t Llenado del vector");
     for(f=0;f<3;f++){
                       for(c=0;c<3;c++){
                                         printf("\n\n\t Espacio (%i,%i):\t",f,c);
                                         scanf("%i",&aux);
                                         m1[f][c] = aux;
                       }
     }
     for(f=0;f<3;f++){
                       for(c=0;c<=2;c++){
                                         if(m1[f][c] > m1[f][c+1]){
                                                     v[f] = m1[f][c];
                                         }
                       }
     }
     aux = 0;
     for(f=0;f<=2;f++){
                      printf("\n\n\t Espacio %i: %i",f,v[f]);
                      if(v[f]>v[f+1]){
                                      aux = v[f];
                      }
     }         
     printf("\n\n\t Valor mayor:\t%i\n\n\t", aux);
     system("pause");                                         
}
void matriz2(){
     int i,j, m2[4][4],x[3],aux2;
     printf("\n\n\t Llenado del vector");
     for(i=1;i<3;i++){
                       for(j=0;j<3;j++){
                                         printf("\n\n\t Espacio (%i,%i):\t",i,j);
                                         scanf("%i",&aux2);
                                         m2[i][j] = aux2;
                       }
     }
     for(i=0;i<3;i++){
                       for(j=1;j<3;j++){
                                         if(m2[i][j] < m2[i][j+1]){
                                                     x[i] = m2[i][j];
                                         }
                       }
     }
     aux2 = 0;
     for(i=0;i<=2;i++){
                      printf("\n\n\t Espacio %i: %i",i,x[i]);
                      if(x[i]<x[i+1]){
                                      aux2 = x[i];
                      }
     }         
     printf("\n\n\t Valor menor:\t%i\n\n\t", aux2);
     system("pause");                                        
}
main() {
       int cont, opcion;
       cont = 1;
       while(cont < 5){
                  system("cls"); 
                  printf("\n\n\t Menu de opciones");
                  printf("\n\n\t Opcion 1: Valor Mayor");
                  printf("\n\n\t Opcion 2: Valor Menor");
                  printf("\n\n\t Opcion 3: Salir");
                  printf("\n\n\t >: ");
                  scanf("%i",&opcion);
                  switch(opcion){
                                 case 1:
                                      matriz1();
                                 break;
                                 case 2:
                                      matriz2();
                                 break;
                                 case 3:
                                      return 0;
                                 break;
                                 default:
                                         printf("\n\n\t Opcion Invalida\n\n\t");
                                         system("Pause");
                                 break;
                                 }
                  }
}

