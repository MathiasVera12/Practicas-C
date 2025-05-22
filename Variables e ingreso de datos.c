#include <stdio.h>

int main(){
	int a;
	printf("La direccion de memoria de la variable a es: %d\n",&a);
	printf("Ingrese un valor para a :");
	scanf("%d",&a);
	printf("El valor ingresado es: %d",a);
	
	return 0;
}
