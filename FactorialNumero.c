//Código para calcular el factorial de un número positivo
//Grupo 6: Wilson Egas, Jean Luc Morales, Mathias Vera
#include <stdio.h>
int main(){
    //Definir las variables
    int n=0, i, resultado=1;
    //Pedir un número al usuario
    printf("Por favor ingrese un número entero positivo: ");
    scanf("%d",&n);
    //Realizar la repetición
    for(i=1;i<=n;i++){
        resultado = resultado * i;
    }
    //Sacar el resultado al usuario
    printf("\nEl factorial de %d es: %d",n,resultado);
    return 0;
}