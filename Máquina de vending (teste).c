// Autor : Elon Alves
// Data : 04/10/2023
#include <stdio.h>
void main()
{
         int opcao;

	do {         
	    printf("-------------------------\n");
         printf("Escolha uma op��o\n");
         printf("-------------------------\n");
         printf("1 para suco\n");
         printf("2 para caf�\n");
         printf("3 para �gua\n");
         printf("-------------------------\n");
         printf("Digite o n�mero:\n");
         scanf("%d", &opcao);
         printf("Voc� escolheu %d\n", opcao);
         if (opcao < 1 || opcao > 3) {
                  printf("Op��o Inv�lida \n");
         }
    } while (opcao < 1 || opcao > 3);
}

