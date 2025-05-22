/*EJERCICIO 5*/
/*Integrantes: Mathias Vera, Jean Luc Morales, Santiago Molina, Wilson Egas*/
#include <stdio.h>

int main()
{
    int numero=0, pares=0, impares=0, i=0, suma=0;
    float promedio=0;
    do{
        printf("Ingrese un número, ingrese 9999 si desea salir: ");
        scanf("%d",&numero);
        if(numero!=9999){
            if(numero%2==0){
            pares=pares+1;
            }else{
            impares=impares+1;
            }
            suma=suma+numero;   
            ++i;
        }else{
            printf("Salió con éxito del programa");
        }
    }while(numero!=9999);
    promedio=suma/i;
    printf("\nEl promedio de los numeros ingresados es: %f",promedio);
    printf("\nLa cantidad de pares ingresados es: %d",pares);
    printf("\nLa cantidad de impares ingresados es: %d",impares);
    return 0;
}

