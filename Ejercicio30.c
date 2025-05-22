//Ejercicio 30: Leer un número entero y mostrar todos su componentes numericos, osea, a quienes sea multiplo
//añadir la biblioteca stdio.h para mostrar y leer datos
#include <stdio.h>
int main (){
    //Definir las variables a usar
    int n=0, i;
    //Pedir datos al usuario
    printf("Por favor ingrese un numero entero del que quiera saber sus multiplos: ");
    scanf("%d",&n);
    //Hacer la repeticion para aumentar el contador
    for(i=1;i<=n;i++){
        //Ver si es multiplo por medio de mod, si el mod del numero con el contador es cero, entonces es multiplo
        if(n%i==0){
            //Imprimir los multiplos
            printf("%d ",i);
        }
    }
    return 0;
    //Comprobado el funcionamiento del programa
}