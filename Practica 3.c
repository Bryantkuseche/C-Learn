#include <stdio.h>
#include <conio.h>

main(){
       int seg,eco,vip,opcion,boletos;
       float precio;
       eco=2;
       seg=3;
       vip=2;
       printf("\n\n\t Sistema de Embarque 1.0");
       g:printf("\n\n\t Seleccione la clase en la cual desea viajar: ");
       printf("\n\n\t 1. Clase Economica");
       printf("\n\n\t 2. Segunda Clase");
       printf("\n\n\t 3. Primera Clase");
       printf("\n\n\t >: ");
       scanf("%i",&opcion);
       if(opcion==1){
                 if(eco<=0){
                       printf("\n\n\t Se han agotado la cantidad maxima de boletos disponibles, intentelo mas tarde ");     
                 }
                 else {
                      printf("\n\tBoletos restantes: %i \n" , eco);
                      printf("\n\n\t Introduzca la cantidad de boletos que desea adquirir (costo de cada uno: $100):  \n");
                      scanf("%i",&boletos);
                      if(boletos<=eco){
                                      precio=boletos*100;
                                      eco=eco-boletos;
                                      printf("\n\n\t Total de Boletos a comprar: %i" , boletos);
                                      printf("\n\n\t Total a Pagar: %.2f" , precio);    
                      }
                      else{
                           printf("\n\n\t No puede comprar una cantidad mayor a la ofertada");
                      }
                      
                 }
       }
       else if(opcion==2){
            if(seg<=0){
                       printf("\n\n\t Se han agotado la cantidad maxima de boletos disponibles, intentelo mas tarde ");     
                 }
                 else {
                      printf("\n\tBoletos restantes: %i \n" , seg);
                      printf("\n\n\t Introduzca la cantidad de boletos que desea adquirir (costo de cada uno: $150):  \n");
                      scanf("%i",&boletos);
                      if(boletos<=seg){
                                      precio=boletos*150;
                                      seg=seg-boletos;
                                      printf("\n\n\t Total de Boletos a comprar: %i" , boletos);
                                      printf("\n\n\t Total a Pagar: %.2f" , precio);    
                      }
                      else{
                           printf("\n\n\t No puede comprar una cantidad mayor a la ofertada");
                      }
                      
                 }
       }
       else if(opcion==3){
            if(vip<=0){
                       printf("\n\n\t Se han agotado la cantidad maxima de boletos disponibles, intentelo mas tarde ");     
                 }
                 else {
                      printf("\n\t Boletos restantes: %i \n" , vip);
                      printf("\n\n\t Introduzca la cantidad de boletos que desea adquirir (costo de cada uno: $200):  \n");
                      scanf("%i",&boletos);
                      if(boletos<=vip){
                                      precio=boletos*200;
                                      vip=vip-boletos;
                                      printf("\n\n\t Total de Boletos a comprar: %i" , boletos);
                                      printf("\n\n\t Total a Pagar: %.2f" , precio);    
                      }
                      else{
                           printf("\n\n\t No puede comprar una cantidad mayor a la ofertada");
                      }
                      
                 }
       }
       else {
            printf("\n\n\t Ha seleccionado una opcion invalida, reintente");
            goto g;
       }
       goto g;
}
