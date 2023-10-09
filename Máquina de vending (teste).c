// Autor : Elon Alves
// Data : 04/10/2023
#include <stdio.h>
void main()
{
         int opcao;

	do {         
	    printf("-------------------------\n");
         printf("Escolha uma opção\n");
         printf("-------------------------\n");
         printf("1 para suco\n");
         printf("2 para café\n");
         printf("3 para água\n");
         printf("-------------------------\n");
         printf("Digite o número:\n");
         scanf("%d", &opcao);
         printf("Você escolheu %d\n", opcao);
         if (opcao < 1 || opcao > 3) {
                  printf("Opção Inválida \n");
         }
    } while (opcao < 1 || opcao > 3);
}

