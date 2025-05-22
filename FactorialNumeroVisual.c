//Codigo para calcular el factorial de un numero positivo
//Grupo 6: Wilson Egas, Jean Luc Morales, Mathias Vera
#include <stdio.h>
int main(){
    //Definir las variables
    int n=0, i, resultado=1;
    //Pedir un numero al usuario
    printf("Por favor ingrese un numero entero positivo: ");
    scanf("%d",&n);
    //Realizar la repeticion
    for(i=n;i>=1;i--){
        resultado = resultado * i;
    }
    //Sacar el resultado al usuario
    printf("\nEl factorial de %d es: %d",n,resultado);
    return 0;
}