// Autor : Elon Alves
// Data : 13/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         float a, b, multiplos;

         printf("Informe os n�meros para descobrir se s�o multiplos: \n");
         scanf("%f%f", &a, &b);

         if (a == b*b || b == a*a) {
                  printf("Os n�meros s�o multiplos");
         } else {
                  printf("Os n�meros n�o s�o multiplos");
         }
}

