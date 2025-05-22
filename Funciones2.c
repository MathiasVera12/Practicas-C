#include <stdio.h>
#include <stdlib.h>
void suma(){
    int a=0, b=0, resultado=0;
    printf("Ingrese el primer valor, y el segundo ");
    scanf("%d %d",&a,&b);
    resultado=a+b;
    printf("El resultado es %d + %d = %d ",a, b, resultado);
}

int main(){
    suma();
    return 0;
}