// Autor : Elon Alves
// Data : 28/08/2023
#include <stdio.h>
void main()
{
         float ax,ay,bx,by,produto_vetorial;

         printf("Informe os valores de A: \n");
         scanf("%f%f", &ax, &ay);

         printf("Informe os valores de B: \n");
         scanf("%f%f", &bx, &by);

         produto_vetorial = (ax*by-ay*bx);

         printf("Seu produto vetorial é: %f\n", produto_vetorial);

}

