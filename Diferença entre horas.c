#include <stdio.h>
// Autor : easjunior1
// Data : 16/08/2023
void main()
{
         int horario1, horario2;
         int h1, m1, s1, q1, resto;
         int h2, m2, s2, q2, diferenca;
         int hd, md, sd;
         
         printf("Informe a hora inicial no formato HHMMSS:\n");
         scanf("%d", &horario1);

         printf("Informe a hora final no formato HHMMSS:\n");
         scanf("%d", &horario2);

         h1 = horario1 / 10000;
         resto = horario1 % 10000;

         m1 = resto / 100;

         s1 = resto % 100;

         q1 = h1 * 3600 + m1 * 60 + s1;

         h2 = horario2 / 10000;
         resto = horario2 % 10000;

         m2 = resto / 100;

         s2 = resto % 100;

         q2 = h2 * 3600 + m2 * 60 + s2;

         diferenca = q2 - q1;

         printf("Entrada1: %d\n", horario1);
         printf("h1: %d\n", h1);
         printf("m1: %d\n", m1);
         printf("s1: %d\n", s1);

         hd = diferenca / 3600;
         resto = diferenca % 3600;
         md = resto / 60;
         sd = resto % 60;

         printf("Se passaram %dh%dm%ds entre %d e %d\n", hd, md, sd, horario1, horario2);

         
}

