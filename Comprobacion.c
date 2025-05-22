/*Ejercicio 48: Utilizando ciclos anidados, generar las siguientes parejas de enteros:
0 1 2 3 4 5 6 7 8 9
1 1 2 2 3 3 4 4 5 5 
*/
//Incluir la biblioteca stdio.h
#include <stdio.h>
int main (){
    //Definir las variables
    int i=0, j=1, k=0, c=0, acumulador=0;
    //Hacer la primera repeticion
    while(k<=9){
        //Hacer la segunda repeticion
        for(c=0;c<1;c++){
            //Imprimimos las filas, usando las variables j e i y una tabulacion y un salto de linea
            printf("%d\t%d\n",i ,j);
        }
        //Aumento i, que es de la primera columna y el acumulador, que me sirve para ver cuando aumentar la segunda columna
        i++;
        acumulador++;
        //Veo si debo aumentar la segunda columna, si si, se aumenta 1
        if(acumulador%2==0){
            j++;
        }
        k++; //Aumenta k para que no sea bucle infinito, es solo un contador
    }
    //Se comprobo el correcto funcionamiento del programa crea las series requeridas
}