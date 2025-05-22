//Ejercicio 21: Leer un número entero y determinar a cuánto es igual la suma de sus dígitos.
//Incluir la biblioteca stdio.h, leer e imprimir datos del usuario
#include <stdio.h>
int main (){
    //Definir las variables a usar 
    int num=0, digito=0, suma=0;
    //Solicitar al usuario un numero entero
    printf("Por favor, ingrese un numero entero para sumar sus digitos: ");
    scanf("%d",&num);
    //Escribir la estructura de la repeticion
    while (num!=0) {
        digito = num % 10; //La variable digito sera el resultado del mod del numero para 10
        suma = suma + digito; //Acumulamos los digitos que obtengamos
        num = num/10; //Reducimos el numero dado, para que no sea bucle infinito
    }
    //Imprimir el resultado de la suma
    printf("La suma de los digitos del numero es: %d",suma);
    return 0;
    //Se comprobo el correcto funcionamiento del programa, suma los digitos
}