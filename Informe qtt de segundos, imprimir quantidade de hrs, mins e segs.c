// Autor : Elon Alves
// Data : 16/08/2023
#include <stdio.h>
void main()
{
         int qtd, resto; 
         int h, m, s; 
         
         printf("Informe uma quantidade de segundos:\n");
         scanf("%d",&qtd);
         
         h = qtd / 3600;
         resto = qtd % 3600;
         m = resto / 60;
         s = resto % 60;

         printf("%dh%dm%ds\n", h, m, s);
         


}

