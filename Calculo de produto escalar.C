// Autor : Elon Alves
// Data : 28/08/2023
#include <stdio.h>
void main()
{
         float ax,ay,az,bx,by,bz,produto_escalar;

         printf("Informe os três valores do produto A: \n");
         scanf("%f%f%f", &ax, &ay, &az);

         printf("Informe os três valores do produto B: \n");
         scanf("%f%f%f", &bx, &by, &bz);

         produto_escalar = (ax*bx+ay*by+az*bz);

         printf("Seu produto escalar é: %f\n", produto_escalar);
}

