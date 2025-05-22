/*EJERCICION2*/
/*Integrantes: Mathias Vera, Jean Luc Morales, Santiago Molina, Wilson Egas*/
#include <stdio.h>

int cantmaxdiames (int mes){
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) return 31;
    if (mes==4 || mes==6 || mes==9 || mes==11) return 30;
    if (mes==2) return 28;
    
    return -1;
}

int main()
{
    int dia,mes;
    
    printf("Ingresar el dia: ");
    scanf("%d",&dia);
    printf("Ingresar el mes: ");
    scanf("%d",&mes);
    
    if(mes<1 || mes>12 || cantmaxdiames(mes)<dia || dia<=0){
        printf("La fecha ingresada es incorrecta");
        return -1;
    }
    
    int cantdiames=cantmaxdiames(mes);
    if(dia==cantdiames){
        if(mes==12){
            dia=1;
            mes=1;
        }
        else{
            dia=1;
            mes++;
        }
    }
    else dia++;
    printf("La fecha del dia siguienta al ingresado es: %d/%d\n", dia,mes);
    return 0;
}
