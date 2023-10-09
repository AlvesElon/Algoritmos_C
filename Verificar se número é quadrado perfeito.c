// Autor : Elon Alves
// Data : 06/09/2023
#include <stdio.h>
void main()
{
         int a, parte1, parte2, parte3, caracteristica;

         printf("Informe seu número: \n");
         scanf("%d", &a);

         parte1 = a / 100;
         parte2 = a % 100;

         parte3 = parte1 + parte2;

         caracteristica = parte3 * parte3;

         if (caracteristica == a) {
                  printf("1");
         } else {
                  printf("0");
         }
}

