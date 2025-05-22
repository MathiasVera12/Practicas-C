/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*Ejercicio 1 Egas y Vera*/
#include <stdio.h>

int main()
{
    int i, numero;
    do{
        printf("Ingrese un número: \n");
        scanf("%d",&numero);
        if(numero==0){
            printf("El programa ha terminado"); break;
        }else if(numero%2==0){
            printf("\nEl número %d es par\n", numero);
        }else{
            printf("\nEl número %d es impar\n", numero);
            printf("Los números anteriores: ");
            for(i=(numero-1);i>=(numero-7);i--){
                printf("\n%d",i);
            }
            if(numero<0){
                numero=numero*(-1);
            }
        }
        printf("\nEs divisible:\n ");
        for(i=1;i<=numero;i++){
            if(numero%i==0){
            printf("%d\n",i);
            }
        }
    }while(numero!=0);

    return 0;
}

