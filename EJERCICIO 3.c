/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*EJERCICIO 3*/
#include <stdio.h>

int main()
{
    float numero=0;
    float mayor=-99999, menor=99999;
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
            case 1: for(int i=1;i<=3;i++){
                        printf("\nIngrese un numero: ");
                        scanf("%f",&numero);
                        if(numero<menor){
                            menor=numero;
                        }
                        if(numero>mayor){
                            mayor=numero;
                        }
                    }
                    break;
            case 2: printf("\nEl numero menor es: %f",menor);
                    menor=99999;
                    break;
            case 3: printf("\nEl numero mayor es: %f",mayor);
                    mayor=-99999;
                    break;
            case 4: printf("\nHa salido con éxito del programa");
                    break;
            default:
                printf("\nNo existe esa opcion"); break;
        }
    }while(opcion!=4);
    

    return 0;
}



