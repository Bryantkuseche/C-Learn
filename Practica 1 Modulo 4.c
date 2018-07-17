#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void opcion_1(){
     int matriz[3][3],vector[3],contenedor,aux_1,aux_2,aux_3,f,c;
     /*llenado de la matriz*/
     printf("\n\n\t Llenado de la matriz");
     for(f=1;f<=3;f++){
                      for(c=1;c<=3;c++){
                                       printf("\n\n\t Espacio (%i,%i):\t",f,c);
                                       scanf("%i",&contenedor);
                                       matriz[f][c] = contenedor;
                      }
     }
     /*Inicializando vector */
     for(f=1;f<=3;f++){
                       vector[f] = 0;
     }
     /*iterando solo con un bucle for para operar con las variables*/
     for(f=1;f<=3;f++){
                       vector[1] = vector[1] + matriz[f][1];
                       vector[2] = vector[2] + matriz[2][f];
                       vector[3] = vector[3] + matriz[f][2] + matriz[f][3];
     }
     /*Mostrando en pantalla */
     for(f=1;f<=3;f++){
                      printf("\n\n\t Espacio %i:\t %i",f,vector[f]);
     }
     printf("\n\n\t");
     system("pause");
}
/*programa principal*/
main(){
       system("cls");
       int opcion, contador;
       contador = 0;
       while(contador < 5){
                      system("cls");
                      printf("\n\n\t Menu principal:\n");
                      printf("\n\n\t Opcion 1: Llenado del vector");
                      printf("\n\n\t Opcion 2: Salir\n\n\t >: ");
                      scanf("%i",&opcion);
                      switch(opcion){
                                     case 1:
                                          opcion_1();
                                     break;
                                     case 2:
                                          printf("\n\n\t");
                                          system("pause");
                                          return 0;
                                     break;
                                     default:
                                             printf("\n\n\t Opcion Invalida\n\n\t");
                                             system("pause");
                                     break;
                      }
       }
}
