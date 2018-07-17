#include<stdio.h>
/*Programa que calcula cuantos habitantes hay entere 4 y 12 años */
int main()
{
    int current , birth, indx , contador, age;
    current = 2018;
    indx = 1;
    contador = 0;
    printf("\n\n\t Discriminador de Edades C-3000 \n\n\t");
    z:if (indx < 5)
    {
                 printf("\n\n\t Introduzca su año de nacimiento \n\n\t");
                 scanf("%i", birth);
                 age = current - birth;
                 indx = indx + 1;
                 if (age >= 4 && age <= 12)
                 {
                        contador = contador + 1;
                        printf("\n\n\t Contado \n\n\t");
                 }
                 else
                 {
                     goto z;
                 } 
    }
    else
    {
        printf("\n\n\t Total de Personas entre 4 y 12: %i \n\n\t" , contador);
    }
}
