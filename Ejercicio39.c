/*Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente los dos últimos elementos de la serie, así:
 0 1 1 2 3 5 8 13 21 34.......
Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10000.*/
//Utilizar la biblioteca stdio.h
#include <stdio.h>
int main (){
    //Definir las variables a usar
    int num1=0, num2=1, n=0;
    //Imprimir los dos primeros numeros de la serie
    printf ("%d %d",num1,num2);
    //Escribir la estructura de la repeticion a usar
    while (n<=10000){
        n = num1+num2; //n es la suma de los dos numeros anteriores
        //Imprimir el tercer numero
        printf(" %d",n);
        //cambiar el valor del primer numero por el del segundo
        num1=num2; 
        //cambiar el valor del segundo numero por el resultado de la suma, asi va aumentando la secuencia y se suman los 2 anteriores
        num2=n; 
    }
    return 0;
    //Se comprobo el correcto funcionamiento del programa
}