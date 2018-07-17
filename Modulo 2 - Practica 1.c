/* Realizar un programa que me permita guardar un vector de 7 posiciones, y que muestre el valor 2 y 5*/
/* Make a program that allows me to save a vector of 7 positions, and that shows the value 2 and 5 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void vector(){
     int c, aux, v[7];
     for(c=1;c<=7;c++){
                       printf("\n\n\t Vector[%i]:\t", c);
                       scanf("%i", &aux);
                       v[c]=aux;
     }
     printf("\n\n\t Posicion 2: %i \t", v[2]);
     printf("\n\n\t Posicion 5: %i \t", v[5]);
     getch();
}
main(){
       int opc, cont;
       char salida;
       cont = 1;
       while(cont <= 5){
                   system("cls");
                   printf("\n\n\t Menu:");
                   printf("\n\n\t Guardar en vector:     opcion 1");
                   printf("\n\n\t Salir:                 opcion 2");
                   printf("\n\n\t >: ");
                   scanf("%i",&opc);
                   switch(opc){
                               case 1:
                                    vector();
                                    cont = cont +1;
                               break;
                               case 2:
                                    printf("\n\n\t Saliendo...");
                                    getch();
                                    return 0;
                               break;
                               default:
                                       printf("\n\n\t Opcion Invalida");
                               break;
                   }
       }
}
                                    
                               
     
