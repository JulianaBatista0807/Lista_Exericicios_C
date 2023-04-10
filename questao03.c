/* Função: Fazer uma função chamada cubo que retorna o cubo de um número
Autor: Juliana Chacon
Data: [25/03/2023]
Observações: Recebe um número como parâmetro e retorna o seu cubo. */

#include <stdio.h>
#include <locale.h>

int cubo(int num) {
   return num * num * num;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
   int num, resultado;
   
   printf("Digite um número: ");
   scanf("%d", &num);
   
   resultado = cubo(num);
   
   printf("O cubo de %d é: %d\n", num, resultado);
   
   return 0;
}
