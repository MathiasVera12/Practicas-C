/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int cont=1, num,result=0,num1,ele;
   
    do
    {
        printf("Ingresar el primer numero positivo para multiplicar: ");
        scanf("%d",&num); 
        printf("\nIngresar el segundo numero positivo para multiplicar: ");
        scanf("%d",&num1);
       
    }while(num1&&num<0);
    
    if(num1<num)
    {
       while(cont<=num1)
       {
           result= num+result;
           cont++;
       }
       
    }else{
                if(num1>num)
            {
                while(cont<=num)
                {
                    result= result+num1;
                    cont++;
                }
                
            } else
                {
                    if(num1 =1 )
                    {
                        result=num;
                    } else
                    { 
                        if (num=1){
                            result=num1;
                        } else{
                            
                        }
                        
                    } 
                    if(num1=num)
                    {
                        do{
                            result=cont+num1;
                            cont++;
                            ele=num*num;
                        }while(result!=ele);
                    
                    }    
                }
        }
        if(num1==0 || num==0){
            result=0;
        }
        
        printf("\nEl resultado es:  %d", result);
        return 0; 
}
