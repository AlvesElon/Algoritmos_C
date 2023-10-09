// Autor : Elon Alves
// Data : 06/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         int total, dia, mes, ano;

         printf("Digite uma data apenas em numeros, (Exemplo 13112003): \n");
         scanf("%d", &total);

         dia = total / 1000000;
         mes = (total % 1000000) / 10000;
         ano = total % 10000 ;

         if ( dia > 31 || mes > 12) {
                  printf("Invalido");
         } else {
                  printf("Válido");
         }
}

