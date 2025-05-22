/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero=0,d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,r=0,i;
    do{
        printf("Ingrese un nùmero entre 1000 y 30000: ");
        scanf("%d",&numero);
        if(numero>=10000 && numero<=30000){
            for(i=10000;i>=1;i=i/10){
                if(i==10000){
                   r=r+(numero/i); 
                }
                
            }
        }
    }while(numero<1000 || numero>30000);
    

    return 0;
}

