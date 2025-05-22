#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fila 4
#define columna 4
void CrearMatriz(){
    int i=0, j=0, contador=1;
    int A[fila][columna];
    switch (contador)
    {
    case 1: 
        for(i=0;i<fila;i++){
            for(j=0;j<columna;j++){
                A[i][j]= rand()%11;
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
        contador++;
        break;
    case 2: 
        for(i=columna;i>=0;i--){
            for(j=fila;j>=0;j--){
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
        break;
    default:
        break;
    }
}


int main(){
    srand(time(NULL));
    printf("La matriz generada es: \n");
    CrearMatriz();
    printf("La matriz dada la vuelta es: \n");
    CrearMatriz();
    return 0;
}