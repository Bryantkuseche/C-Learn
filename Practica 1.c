/*Programa de saludo de bienvenida */

#include<stdio.h>
main()
{
      int a, b, c, d;
      char nombre[20];
      printf("\n \n \t Introduzca su primer nombre (20 letrs m�ximo): ");
      scanf("%s",nombre);
      printf("\n \n \t BIENVENIDOS AL CURSO D TURBO C++ \t %s \n\n" ,nombre);
      printf("Introduce tres n�meros: ");
      scanf("%i %i %i", &a, &b, &c);
      d=a+b+c;
      printf("Has tecleado los n�meros %i %i %i\n",a,b,c);
      printf("Suma de n�meros %i \n", d);
      return 0;
}
