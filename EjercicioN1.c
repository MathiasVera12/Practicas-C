/*EJERCICIO 1*/
/*Integrantes: Mathias Vera, Jean Luc Morales, Santiago Molina, Wilson Egas*/
#include <stdio.h>
int main()
{
   int numero;
   do{
       printf("Por favor ingrese un número entero: ");
       scanf("%d",&numero);
       if(numero>99999 || numero<-99999){
           printf("\nEl numero ingresado no es válido\n");
       }
       else{
            if(numero%2==0 && numero!=0){
            printf("\nEl numero ingresado es par\n");
            }else {
            printf("\nEl numero ingresado es impar\n");
            }
            if(numero==0){
            printf("\nEl numero ingresado es cero\n");
            }
            if((numero<=99999 && numero>=10000)||(numero>=-99999 && numero<=-10000)){
                printf("\nEl numero es de 5 cifras");
            }else if((numero<=9999 && numero>=1000)||(numero>=-9999 && numero<=-1000)){
                printf("\nEl numero es de 4 cifras");
            }else if((numero<=999 && numero>=100)||(numero>=-999 && numero<=-100)){
                printf("\nEl numero es de 3 cifras");
            }else if((numero<=99 && numero>=10)||(numero>=-99 && numero<=-10)){
                printf("\nEl numero es de 2 cifras");
            }else if((numero<=9 && numero>=1)||(numero>=-9 && numero<=-1)){
                printf("\nEl numero es de 1 cifra");
            }
       }
   }while(numero>99999 || numero<-99999);
    return 0;
}