// Autor : Elon Alves
// Data : 28/08/2023
#include <stdio.h>
void main()
{
         float base,altura,area;
         
         printf("Informe o tamanho da base:\n");
         scanf("%f", &base);
         
         printf("Informe o tamanho da altura:\n");
         scanf("%f", &altura);

         area = (base*altura)/2;

         printf("A área do seu triângulo é %f", area);
}

