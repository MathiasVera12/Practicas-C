/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    char opcion;
    int numero1;
    int numero2;
    
    printf("\tMenu");
    printf("\na. Suma");
    printf("\nb. Resta");
    printf("\nc. Multiplicar");
    printf("\nd. Dividir");
    printf("\ne. Salir");
    printf("\nSeleccione una opcion: ");
    opcion = getchar();
    
    if (opcion == 'a' || opcion == 'b' || opcion == 'c' || opcion == 'd')
    {
        printf("Ingrese el numero 1: ");
        scanf("%d",&numero1);
        printf("Ingrese el numero 2: ");
        scanf("%d",&numero2);
        switch(opcion)
        {
            case 'a': printf("la suma es %d\n",numero1+numero2);
                        break;
            case 'b': printf("la resta es %d\n",numero1-numero2);
                        break;
            case 'c': printf("la multiplicaciòn es %d\n",numero1*numero2);
                        break;
            case 'd': if(numero2==0)
            {
                printf("no hay divisiòn para cero");
            }
            else
            {
                printf("la divisiòn es %f\n",(float)numero1/numero2);
                    break;
            }
            default: printf("saliò del programa");
        }
    }
    
    return 0;
    
}
