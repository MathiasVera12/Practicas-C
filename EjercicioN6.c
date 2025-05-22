/*EJERCICIO 6*/
/*Integrantes: Mathias Vera, Jean Luc Morales, Santiago Molina, Wilson Egas*/
#include <stdio.h>

int main()
{
    char a='|';
    int operador=1, i=-1;
    float pi=0,numerador=4, denominador=1;
    
    printf("Cantidad de numeros de la serie %c Valor aproximado de PI",a);
    for(i;i<=25;i++){
        pi+=operador*(numerador/denominador);
        denominador=denominador+2;
        operador=operador*(-1);
        if(i>=2){
            printf("\n\t\t\t%d \t%c\t %f\n",i,a,pi);
        }
    }
    return 0;
}
