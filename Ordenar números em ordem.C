// Autor : Elon Alves
// Data : 13/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         int i;
         float a, b, c;

         printf("Digite 3 números: \n");
         scanf("%f%f%f", &a, &b, &c);
         printf("Digite um número de 1 a 3, 1 para ordem crescente, 2 para decrescente e 3 para o número maior ficar ao meio \n");
         scanf("%d", &i);

         if (i == 2){
         if (a > b && a > c && b > c) {
                  printf("seus números ficam %f, %f, %f", a, b, c);
         } if (b > a && b > c && a > c) {
                  printf("seus números ficam %f, %f, %f", b, a, c);
         } if (b > a && b > c && c > a) {
                  printf("seus números ficam %f, %f, %f", b, c, a);
         } if (c > a && c > b && b > a) {
                  printf("seus números ficam %f, %f, %f", c, b, a);
         } if (c > a && c > b && a > b) {
                  printf("seus números ficam %f, %f, %f", c, a, b);
         } if (a > b && a > c && c > b) {
                  printf("seus números ficam %f, %f, %f", a, c, b);
         }
         } if (i == 1){
           if (a < b && a < c && b < c) {
                  printf("seus números ficam %f, %f, %f", a, b, c);
         } if (b < a && b < c && a < c) {
                  printf("seus números ficam %f, %f, %f", b, a, c);
         } if (b < a && b < c && c < a) {
                  printf("seus números ficam %f, %f, %f", b, c, a);
         } if (c < a && c < b && b < a) {
                  printf("seus números ficam %f, %f, %f", c, b, a);
         } if (c < a && c < b && a < b) {
                  printf("seus números ficam %f, %f, %f", c, a, b);
         } if (a < b && a < c && c < b) {
                  printf("seus números ficam %f, %f, %f", a, c, b);
         }
         } if (i == 3){
           if (a < b && a < c && b > c) {
                  printf("seus números ficam %f, %f, %f", a, b, c);
         } if (b < a && b < c && a > c) {
                  printf("seus números ficam %f, %f, %f", b, a, c);
         } if (b < a && b < c && c > a) {
                  printf("seus números ficam %f, %f, %f", b, c, a);
         } if (c < a && c < b && b > a) {
                  printf("seus números ficam %f, %f, %f", c, b, a);
         } if (c < a && c < b && a > b) {
                  printf("seus números ficam %f, %f, %f", c, a, b);
         } if (a < b && a < c && c > b) {
                  printf("seus números ficam %f, %f, %f", a, c, b);
         }
         }
}

