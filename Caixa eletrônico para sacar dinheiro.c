// Autor : Elon Alves
// Data : 16/08/2023
#include <stdio.h>
void main()
{
         int valor, resto;
         int n200, n100, n50, n20, n10, n5, n2, m1;

         printf("Informe o valor que você deseja sacar:\n");
         scanf("%d", &valor);

                  n200 = valor / 200;
                  resto = valor % 200;

                  printf("n200 : %d\n", n200);

                  n100 = resto / 100;
                  resto = resto % 100;

                  printf("n100 : %d\n", n100);

                  n50 = resto / 50;
                  resto = resto % 50;

                  printf("n50 : %d\n", n50);

                  n20 = resto / 20;
                  resto = resto % 20;

                  printf("n20 : %d\n", n20);

                  n10 = resto / 10;
                  resto = resto % 10;

                  printf("n10 : %d\n", n10);

                  n5 = resto / 5;
                  resto = resto % 5;

                  printf("n5 : %d\n", n5);

                  n2 = resto / 2;
                  resto = resto % 2;

                  printf("n2 : %d\n", n2);

                  m1 = resto ;
                  printf("m1 : %d\n", m1);
}

