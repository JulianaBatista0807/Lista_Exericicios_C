/* Função: Calcular o salário líquido de um professor
Autor: Juliana Chacon
Data: [25/03/2023]
Observações: Lê os valores pedidos e calcular o salário líquido do professor. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
   float valor_hora, salario_bruto, salario_liquido;
   int num_aulas;
   float perc_inss;
   
   printf("Digite o valor da hora-aula: ");
   scanf("%f", &valor_hora);
   
   printf("Digite o número de aulas dadas no mês: ");
   scanf("%d", &num_aulas);
   
   printf("Digite o percentual de desconto do INSS: ");
   scanf("%f", &perc_inss);
   
   salario_bruto = valor_hora * num_aulas;
   salario_liquido = salario_bruto - (salario_bruto * perc_inss / 100);
   
   printf("O salário líquido do professor é: R$ %.2f\n", salario_liquido);
   
   return 0;
}
