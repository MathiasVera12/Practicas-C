//HACER UN PROGRAMA QUE CUMPLA LAS ESPECIFICACIONES DEL ESTUDIO DE CASO DE LA SEMANA 9
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int i, j, k=7, suma=0;
    int Estudiantes[i][j];
    int Carrera[7];
    do{
        for(i=0;i<5;i++){
            for(j=0;j<2;j++){
                Estudiantes[i][j]=rand()%100;
                printf("%d ", Estudiantes[i][j]);
                suma=suma+Estudiantes[i][j];
            }
            suma=0;
            printf("\n");
        }
        k--;
    }while(k>0);
    return 0;
}