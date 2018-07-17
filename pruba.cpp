#include<stdio.h>
#include<conio.h>
//#include<math.h>
#include<string.h>

main()
{
    int edad,contador;
    float descuento,total;
    contador = 1;
    printf("\n\n\t Parque de diversiones 0.1");
    z: printf("\n\n\t Introduzca su edad: ");
    scanf("%i",&edad);
    contador = contador + 1;
   if (contador <= 5)
    {
                /*contador = contador + 1;*/
                if ((edad>=11)&&(edad<=15))
                {
                                           descuento=0.25;
                                           total =10000-(descuento*10000); 
                }
                else if ((edad>=25)&&(edad<=45))
                {
                     descuento=0.30;
                     total=10000-(descuento*10000);
                      
                }
                else if ((edad>15)&&(edad<25))
                {
                     descuento=0.10;
                     total=10000-(descuento*10000);
                }
                else
                {
                    total=10000;
                    descuento=0.00;
                }
    
    printf("\n\n\tCosto del Boleto: %i" , (10000)); 
    printf("\n\n\tDescuento por edad: %f" , descuento);
    printf("\n\n\tTotal a Pagar: %f" , total);
    getch();
    goto z;
    }
    else
    {
        printf("\n\n\tHa alcanzado el numero maximo de usuarios");
        getch();
    }
}
                

