// Autor : Elon Alves
// Data : 13/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         float a, b, multiplos;

         printf("Informe os números para descobrir se são multiplos: \n");
         scanf("%f%f", &a, &b);

         if (a == b*b || b == a*a) {
                  printf("Os números são multiplos");
         } else {
                  printf("Os números não são multiplos");
         }
}

