/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a='|';
    int operador=1, i=-1;
    float pi=0,numerador=4, denominador=1;
    
    printf("Cantidad de numeros de la serie %c Valor aproximado de PI",a);
    for(i;i<=200;i++){
        pi+=operador*(numerador/denominador);
        denominador=denominador+2;
        operador=operador*(-1);
        if(i>=2){
            printf("\n\t\t\t%d \t%c\t %f\n",i,a,pi);
        }
    }
    return 0;
}

