/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero=0,d0=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,r=0;
    do{
        printf("Ingrese un nùmero entre 1000 y 30000: ");
        scanf("%d",&numero);
        if(numero>=10000 && numero<=30000){
            r=r+(numero/10000);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+((numero%10000)/1000);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+(((numero%10000)%1000)/100);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+((((numero%10000)%1000)%100)/10);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+((((numero%10000)%1000)%100)%10);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
        }else if(numero>=1000 && numero<=9999){
            r=r+(numero/1000);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+((numero%1000)/100);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+(((numero%1000)%100)/10);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
            r=r+(((numero%1000)%100)%10);
            if(r==9){
                d9++;
            }else if(r==8){
                d8++;
            }else if(r==7){
                d7++;
            }else if(r==6){
                d6++;
            }else if(r==5){
                d5++;
            }else if(r==4){
                d4++;
            }else if(r==3){
                d3++;
            }else if(r==2){
                d2++;
            }else if(r==1){
                d1++;
            }else if(r==0){
                d0++;
            }
            r=0;
        }
    }while(numero<1000 || numero>30000);
    printf("\nCantidad de digitos 0: %d",d0);
    printf("\nCantidad de digitos 1: %d",d1);
    printf("\nCantidad de digitos 2: %d",d2);
    printf("\nCantidad de digitos 3: %d",d3);
    printf("\nCantidad de digitos 4: %d",d4);
    printf("\nCantidad de digitos 5: %d",d5);
    printf("\nCantidad de digitos 6: %d",d6);
    printf("\nCantidad de digitos 7: %d",d7);
    printf("\nCantidad de digitos 8: %d",d8);
    printf("\nCantidad de digitos 9: %d",d9);
    return 0;
}

