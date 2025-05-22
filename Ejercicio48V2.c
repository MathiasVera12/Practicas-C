//Mismo objetivo, me parece que se puede simplificar la solucion bastante, sin usar ciclos anidados
//Por tanto esta es una version opcional del ejercicio48 sin ciclos anidados
#include <stdio.h>
int main (){
    //Definir las variables
    int i=0, j=1, acumulador=0;
    //Hacer la repeticion
    for(i=0;i<=9;i++){
        printf("%d\t %d\n", i, j);
        acumulador++;
        if(acumulador%2==0){
            j++;
        }
    }
}