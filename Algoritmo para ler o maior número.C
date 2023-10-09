// Autor : Elon Alves
// Data : 22/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         int n1,n2,resultado;

         printf("Informe dois números: \n");
         scanf("%d%d", &n1, &n2);

         resultado = (n1 + n2 + fabs(n1-n2))/2;

         printf("O maior número é %d", resultado);
}

