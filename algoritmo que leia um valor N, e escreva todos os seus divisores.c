// Autor : Elon Alves
// Data : 04/10/2023
#include <stdio.h>
void main()
{
         int n1, i;

         printf("Informe um n�mero: \n");
         scanf("%d", &n1);

         i = 1;

         while (i <= n1) {
                  if (n1 % i == 0){
                           printf("Seu n�mero � divis�vel por %d\n", i); 
                  } i++;
         }
}

