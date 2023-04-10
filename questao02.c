/* Fun��o: Calcular o sal�rio l�quido de um professor
Autor: Juliana Chacon
Data: [25/03/2023]
Observa��es: L� os valores pedidos e calcular o sal�rio l�quido do professor. */

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
   float valor_hora, salario_bruto, salario_liquido;
   int num_aulas;
   float perc_inss;
   
   printf("Digite o valor da hora-aula: ");
   scanf("%f", &valor_hora);
   
   printf("Digite o n�mero de aulas dadas no m�s: ");
   scanf("%d", &num_aulas);
   
   printf("Digite o percentual de desconto do INSS: ");
   scanf("%f", &perc_inss);
   
   salario_bruto = valor_hora * num_aulas;
   salario_liquido = salario_bruto - (salario_bruto * perc_inss / 100);
   
   printf("O sal�rio l�quido do professor �: R$ %.2f\n", salario_liquido);
   
   return 0;
}
