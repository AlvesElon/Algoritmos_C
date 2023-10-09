// Autor : Elon Alves
// Data : 28/08/2023
#include <stdio.h>
void main()
{
         float x1,x2,x3,y1,y2,y3,ab,bc,ac;

         printf("Informe as coordenadas x e y do ponto A: \n");
         scanf("%f%f", &x1, &y1);

         printf("Informe as coordenadas x e y do ponto B: \n");
         scanf("%f%f", &x2, &y2);

         printf("Informe as coordenadas x e y do ponto C: \n");
         scanf("%f%f", &x3, &y3);

         ab = (y2-y1)/(x2-x1);
         bc = (y3-y2)/(x3-x2);
         ac = (y3-y1)/(x3-x1);

         printf("Seu coeficiente de reta AB é : %f\n", ab);
         printf("Seu coeficiente de reta BC é : %f\n", bc);
         printf("Seu coeficiente de reta AC é : %f\n", ac);
}

