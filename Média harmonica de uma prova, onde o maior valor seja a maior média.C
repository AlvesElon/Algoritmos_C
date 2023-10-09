// Autor : Elon Alves
// Data : 12/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         float a, b, c, delta, nota_final;

         printf("Informe a primeira nota: \n");
         scanf("%f", &a);
         printf("Informe a segunda nota: \n");
         scanf("%f", &b);
         printf("Informe a terceira nota: \n");
         scanf("%f", &c);

         if (a > b && a > c) {
                  delta = (5/a) + (2.5/b) + (2.5/c);
         } if (b > c && b > a) { 
                  delta = (5/b) + (2.5/a) + (2.5/c);
         } if (c > b && c > a) {
                  delta = (5/c) + (2.5/b) + (2.5/a);
         }
                  nota_final = (10 / delta);
         
         printf("%.2f", nota_final);
}
