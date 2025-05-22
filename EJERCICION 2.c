/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*EJERCICIO 2*/
#include <stdio.h>
int main()
{
    int dia, mes;
    do{
        printf("Ingrese un día: ");
        scanf("%d",&dia);
        printf("\nIngrese un mes: ");
        scanf("%d",&mes);
        if(dia>31 || mes>12 || dia<0 || mes<0){
            printf("\nLa fecha ingresada no es válida");
        }else{
            if((mes==1) || (mes==3) || (mes==5) || (mes==7) || (mes==8) || (mes==10) || (mes==12)){
                if(mes==12 && dia==31){
                    printf("\nEl día siguiente de %d/%d es 01/01",dia,mes);
                }else if(dia==31){
                printf("\nEl día siguiente de %d/%d",dia,mes);
                printf(" es 01/%d\n",mes=mes+1);
                }else if(dia<31){
                printf("\nEl día siguiente de %d/%d",dia,mes);
                printf(" es %d/%d",dia=dia+1,mes);
                }
            }else if((mes==4) || (mes==6) || (mes==9) || (mes==11)){
                if(dia==30){
                    printf("\nEl día siguiente de %d/%d",dia,mes);
                    printf(" es 01/%d",mes=mes+1);
                }
                if(dia<30){
                    printf("\nEl día siguiente de %d/%d",dia,mes);
                    printf(" es %d/%d",dia=dia+1,mes);
                }
                if(dia>30){
                    printf("La fecha ingresada es incorrecta");
                }
            }else if(mes==2){
                if(dia==28){
                    printf("\nEl día siguiente de %d/%d",dia,mes);
                    printf(" es 01/%d",mes=mes+1);
                }
                if(dia<28){
                    printf("\nEl día siguiente de %d/%d",dia,mes);
                    printf(" es %d/%d",dia=dia+1,mes);
                }
                if(dia>28){
                    printf("La fecha ingresada es incorrecta");
                }
            }
        }
    }while((dia<0) || (dia>31) || (mes<0) || (mes>12));

    return 0;
}

