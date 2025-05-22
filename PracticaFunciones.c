#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int suma(int x,int y){
    return x+y;
}
int main(){
    int a, b, resultado;
    printf ("ingresa el primer valor ");
    scanf("%d",&a);
    printf("ingresa el segundo valor ");
    scanf("%d",&b);
    resultado=suma(a,b);
    printf("El resultado de %d + %d es = %d",a,b,resultado);
    return 0;
}