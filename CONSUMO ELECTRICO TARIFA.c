/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* ejercicio de consumo electrico con tarifas
de 1 a 100khw cada khw = 1.16
de 101 a 500 khw cada khw = 1.25
501 - 999 khw   cada khw =  1.32
1000 o mayor    cada khw =  1.39*/

#include <stdio.h>
#define Tarifa1 1.16
#define Tarifa2 1.25
#define Tarifa3 1.32
#define Tarifa4 1.39

int main()
{
    int consumo;
    float valor_pagar;
    do
    {
        printf("Por favor, ingrese el valor de consumo electrico mensual, de 1 en adelante: ");
        scanf("%d",&consumo);
    }while(consumo<1);
    
    if((consumo>=1) && (consumo<=100))
    {
        valor_pagar = consumo*Tarifa1;
    }
    else if((consumo>=101) && (consumo<=500))
    {
        valor_pagar = consumo*Tarifa2;
    }
    else if((consumo>=501)&&(consumo<=999))
    {
        valor_pagar = consumo*Tarifa3;
    }
    else 
    {
        valor_pagar = consumo*Tarifa4;
    }
    
    printf("\nEl valor a pagar por %dkhw es: %f",consumo,valor_pagar);
    return 0;
}
