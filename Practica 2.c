/*programa que dice cuantos numeros son positivos, negativos o neutros */

#include <stdio.h>
#include <conio.h>

main()
{
      /*declaracion de variables*/
      int a , contador, positivos, negativos, neutro;
      contador = 1;
      positivos = 0;
      negativos = 0;
      neutro = 0;
      printf("\n\n\t Bienvenido al discriminador de numero 0.1 \t");
      /*aqui regresa el puntero para que el ciclo siga evaluando*/
      z:if (contador <= 4)
      {
                   printf("\n\n\t Introduzca el valor %i: " , contador);
                   scanf("%i" , &a);
                   contador = contador + 1;
                   if (a < 0)
                   {
                         negativos = negativos + 1;
                         printf("\n\n\t El numero %i es negativo!" , a);
                         getch();
                   }
                   else
                   {
                       if (a > 0)
                       {
                             positivos = positivos + 1;
                             printf("\n\n\t El numero %i es positivo!" , a);
                             getch();
                       }
                       else
                       {
                           neutro = neutro + 1;
                           printf("\n\n\t El numero %i es neutro!" , a);
                           getch();
                       }
                   }
      goto z;
      }
      else
           {
                   printf("\n\n\t Total de numeros positivos: %i \t" , positivos);
                   printf("\n\n\t Total de numeros negativos: %i \t" , negativos);
                   printf("\n\n\t Total de numeros neutros: %i \t" , neutro);
                   getch();
           }
}

