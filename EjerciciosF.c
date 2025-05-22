#include <stdio.h>

 int signo (float num)
{
   int sig;
   
   if (num > 0)
      sig = 1;
   if (num == 0)
      sig = 0;    
   if (num < 0)
      sig = -1;
     
   return sig;
   
}  

int main()
{
   float numero;
   while (numero > -1000000)
   {
      printf("\nEscriba un numero real: ");
      scanf("%f", &numero);
      printf("%d", signo(numero));
   }
   return 0;
   
}