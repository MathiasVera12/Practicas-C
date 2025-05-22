/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*EJERCICIO 2*/
/*Integrantes: Mathias Vera y Wilson Egas*/
#include <stdio.h>

int main()
{
    int hora=0, min=0, seg=0;
    for(int i=1;i<=4;i++){
        printf("Ingrese la hora: ");
        scanf("%d",&hora);
        printf("Ingrese los minutos: ");
        scanf("%d",&min);
        printf("Ingrese los segundos: ");
        scanf("%d",&seg);
        if(hora>23||hora<0||min>59||min<0||seg>59||seg<0){
            printf("La hora ingresada no es válida\n");
        }else{
            if(hora==0 && min==0 && seg==0){
                printf("\nEl segundo anterior de %d:%d:%d",hora,min,seg);
                printf(" es: 23:59:59\n");
            }else if(hora>0 && hora<=23 && min==0 && seg==0){
                printf("\nEl segundo anterior de %d:%d:%d",hora,min,seg);
                printf(" es: %d:59:59\n",hora=hora-1);
            }else if(hora>0 && hora<=23 && min>0 &&min<=59 && seg==0){
                printf("\nEl segundo anterior de %d:%d:%d",hora,min,seg);
                printf(" es: %d:%d:59\n",hora,min=min-1);
            }else {
                printf("\nEl segundo anterior de %d:%d:%d",hora,min,seg);
                printf(" es: %d:%d:%d\n",hora,min,seg=seg-1);
            }
        }
    }
    return 0;
}
