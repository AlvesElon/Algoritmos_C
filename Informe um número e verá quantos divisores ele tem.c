// Autor : Elon Alves
// Data : 04/10/2023
#include <stdio.h>
void main()
{
         int n1,n2,i;

         printf("Informe um número :\n");
         scanf("%d", &n1);

         i = 1;
         n2 = 0;

         while (i <= n1) {
                  if (n1 % i == 0) {
                           n2++;         
                  } i++;
         }
         printf("O número tem %d divisore(s)\n", n2);
}

