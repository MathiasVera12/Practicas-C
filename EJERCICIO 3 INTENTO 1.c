/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*EJERCICIO 3*/
#include <stdio.h>

int main()
{
    float numero1=0, numero2=0, numero3=0;
    int opcion;
    do{
        printf("\nMENU");
        printf("\n1. Ingresar 3 numeros flotantes");
        printf("\n2. Mostrar de menor a mayor");
        printf("\n3. Mostrar de mayor a menor");
        printf("\n4. Salir del programa\n");
        printf("Opción: ");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: printf("\nIngrese el primer numero: ");
                    scanf("%f",&numero1);
                    printf("\nIngrese el segundo numero: ");
                    scanf("%f",&numero2);
                    printf("\nIngrese el tercer numero: ");
                    scanf("%f",&numero3);
                    break;
            case 2: if(numero1<numero2 && numero2<numero3){
                        printf("De menor a mayor:%f %f %f",numero1, numero2, numero3);
                    }else if(numero1<numero3 && numero3<numero2){
                        printf("De menor a mayor:%f %f %f",numero1, numero3, numero2);
                    }else if(numero2<numero1 && numero1<numero3){
                        printf("De menor a mayor:%f %f %f",numero2, numero1, numero3);
                    }else if(numero2<numero3 && numero3<numero1){
                        printf("De menor a mayor:%f %f %f",numero2, numero3, numero1);
                    }else if(numero3<numero1 && numero1<numero2){
                        printf("De menor a mayor:%f %f %f",numero3, numero1, numero2);
                    }else if(numero3<numero2 && numero2<numero1){
                        printf("De menor a mayor:%f %f %f",numero3, numero2, numero1);
                    }
                    break;
            case 3: if(numero1>numero2 && numero2>numero3){
                        printf("De mayor a menor:%f %f %f",numero1, numero2, numero3);
                    }else if(numero1>numero3 && numero3>numero2){
                        printf("De mayor a menor:%f %f %f",numero1, numero3, numero2);
                    }else if(numero2>numero1 && numero1>numero3){
                        printf("De mayor a menor:%f %f %f",numero2, numero1, numero3);
                    }else if(numero2>numero3 && numero3>numero1){
                        printf("De mayor a menor:%f %f %f",numero2, numero3, numero1);
                    }else if(numero3>numero1 && numero1>numero2){
                        printf("De mayor a menor:%f %f %f",numero3, numero1, numero2);
                    }else if(numero3>numero2 && numero2>numero1){
                        printf("De mayor a menor:%f %f %f",numero3, numero2, numero1);
                    }
                    break;
            case 4: printf("\nHa salido con éxito del programa");
                    break;
            default:
                printf("\nNo existe esa opcion"); break;
        }
    }while(opcion!=4);
    

    return 0;
}

