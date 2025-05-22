/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*EJERCICIO 2 EGAS Y VERA*/
#include <stdio.h>

int main()
{
    int opcion=0,mayor=-99999,numero=0,i;
    float promedio=0,suma=0,cantidad=0;
    do{
        printf("\t\tMenu");
        printf("\n1. Ingrese una cantidad de numeros");
        printf("\n2. Obtener el promedio");
        printf("\n3. Obtener el numero mayor");
        printf("\n4. Salir\n");
        scanf("%d",&opcion);
        switch(opcion){
            case 1: printf("\n¿Cuantos numeros desea ingresar? ");
                    scanf("%f",&cantidad);
                    for(i=1;i<=cantidad;i++){
                        printf("\nIngrese un número ");
                        scanf("%d",&numero);
                        suma=suma+numero;
                        if(numero>mayor){
                            mayor=numero;
                        }
                    }
                    break;
            case 2: if(cantidad==0){
                        promedio=0;
                        printf("\nEl promedio es: 0\n");
                    }else{
                        promedio=suma/cantidad;
                        printf("\nEl promedio es: %f\n",promedio); 
                    }
                    promedio=0;
                    suma=0;
                    break;
            case 3: if(cantidad==0){
                        printf("Primero se deben ingresar datos en la opcion 1\n");
                    }else{
                        printf("\nEl número mayor es: %d\n", mayor);
                        mayor=-99999;
                    }
                    break;
            case 4: printf("\nHa salido con éxito del programa"); break;
            default: printf("\nLa opcion no se encuentra en el menú"); break;
        }
    }while(opcion!=4);
    return 0;
}

