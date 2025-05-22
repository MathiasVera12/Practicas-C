//Ejercicio 12: Leer un número entero de 3 dígitos y determinar si tiene digito 1
//Incluimos la biblioteca stdio.h para leer y mostrar datos
#include <stdio.h>
int main (){
    //Definir las variables
    int n=0, digito1=0, digito2=0, digito3=0;
    //Pedir al usuario el numero entero de 3 digitos
    printf("Por favor ingrese un numero entero de 3 digitos: ");
    scanf("%d",&n);
    //Conseguir el valor de los digitos
    digito1=n/100;
    digito2=(n%100)/10;
    digito3=(n%100)%10;
    //Comprobar si alguno de esos digitos es 1 e imprimir esa respuesta
    if(digito1==1){
        printf("El numero ingresado contiene 1");
    } else if(digito2==1){
        printf("El numero ingresado contiene 1");
    } else if (digito3==1){
        printf("El numero ingresado contiene 1");
    } else {
        printf("El numero ingresado no contiene 1");
    }
    return 0;
    //ejercicio comprobado el funcionamiento
}