/* realizar un menu principal de dos opciones, siendo una de ellas salida
que cumpla con las siguientes caracteristicas:
    1: con un vector de 5 posiciones guardar y en la primera opcion colocar el numero mas bajo
    del vector.
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void vector(){
     int c, num1, aux, v[5];
     for(c=1;c<=5;c++){
                       printf("\n\n\t Vector[%i]:\t", c);
                       scanf("%i", &aux);
                       v[c]=aux;
     }
     for(c=1;c<=4;c++){
                       if((v[c])<(v[c+1])){
                                       num1=v[c];
                                       v[1]=num1;
                       }
     }
     for(c=1;c<=5;c++){
                       printf("\n\n\t Valor del indice %i: %i",c,v[c]);
     }
     printf("\n\n\t Presione una tecla para volver al menu principal...\t");
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
                                    system("pause");
                                    cont=6;
                               break;
                               default:
                                       printf("\n\n\t Opcion Invalida\n");
                                       system("pause");
                               break;
                   }
       }
}
