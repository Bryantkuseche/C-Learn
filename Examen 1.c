/*Elaborar un programa con dos opciones, una de ellas salida, teniendo un vector
de 7 posiciones, llenar y colocar en la primera posicion el valor mayor,
y el valor 7 el menor valor */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void vector(){
     int v[7], v1[2],i, j, menor, mayor, aux, cont, mayor2;
     menor = 0;
     mayor = 0;
     cont = 1;
     printf("\n\n\t Llenado del vector");
     for(i=1;i<=7;i++){
                       printf("\n\n\t Espacio %i: ", i);
                       scanf("%i", &aux);
                       v[i] = aux;
     }
     for(j=1;j<=7;j++){
                       if(v[j]>v[j+1]){
                                          mayor=v[j];
                                          v1[cont] = mayor;
                                          cont = cont + 1;
                       }
     }
     for(j=7;j>=1;j--){
                       if(v[j-1]<v[j]){
                                       menor=v[j-1];
                       }
     }
     for(j=1;j<2;j++){
                       if(v1[j]>v1[j+1]){
                                         mayor2=v1[j];
                                         printf("%i\n", mayor2);
                       }
     }
     
     
     v[1] = mayor2;
     v[7] = menor;     
     printf("\n\n\t Impresion del vector");
     for(i=1;i<=7;i++){
                      printf("\n\n\t Espacio %i: %i", i , v[i]);
     }                
}
main(){
       int opcion, cont;
       cont = 1;
       while(cont <= 5){
       system("cls");
       printf("\n\n\t Menu de opciones");
       printf("\n\n\t Opcion 1: Llenado del vector");
       printf("\n\n\t Opcion 2: Salir");
       printf("\n\n\t >: ");
       scanf("%i", &opcion);
       switch(opcion){
                      case 1:
                           vector();
                           printf("\n");
                           system("pause");
                      break;
                      case 2:
                           system("pause");
                           cont = 6;
                           return 0;
                      break;
                      default:
                              printf("\n\n\t Opcion Invalida\n");
                              system("pause");
                      break;
                  }
       }
}


