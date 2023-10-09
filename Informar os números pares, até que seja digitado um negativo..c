// Autor : Elon Alves
// Data : 04/10/2023
#include <stdio.h>
void main()
{
         int n1;

do {
         printf("Informe um número: \n");
         scanf("%d", &n1);
         if (n1%2==0 && n1>0) {
                  printf("%d\n", n1);
         }
         } while (n1 >= 0);
}

