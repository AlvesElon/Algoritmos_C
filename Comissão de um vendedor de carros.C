//algoritmo "G001_G00000001"
// Autor : Elon Alves
// Data : 06/09/2023
#include <stdio.h>
#include <math.h>
void main()
{
         int matricula, qtd_carros;        
         float salario_fixo, comissao, comissao_de_venda, comissao_fixa, valor_carros, salario_total;

         printf("Digite a matricula do vendedor: \n");
         scanf("%d", &matricula);

         printf("Digite o salario fixo do vendedor: \n");
         scanf("%f", &salario_fixo);

         printf("Digite a quantidade de carros vendidas: \n");
         scanf("%d", &qtd_carros);

         printf("Digite a comissão por quantidade de carros do vendedor: \n");
         scanf("%f", &comissao_de_venda);

         valor_carros = 80000 * qtd_carros;

         comissao_fixa = valor_carros * 0.05;

         comissao = qtd_carros * comissao_de_venda;

         salario_total = (comissao + comissao_fixa + salario_fixo);

         printf("O vendedor %d terá um salário de %f",matricula,salario_total);
}

