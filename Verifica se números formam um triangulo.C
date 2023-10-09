// Autor : Elon Alves
// Data : 12/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         int a, b, area;

         printf("Informe a base do triangulo: \n");
         scanf("%d", &a);
         printf("Informe a altura do triangulo: \n");
         scanf("%d", &b);

             if ( a > 0 && b > 0) {
                      area = ((a * b) /2);
                      printf(" A área do triangulo é %d", area);
             } else {
                      printf("Não formam triângulo");
             }      
}

