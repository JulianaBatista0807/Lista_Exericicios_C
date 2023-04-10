/* Função: Retorna o valor do produto notável quadrado da soma de dois termos
Autor: Juliana Chacon
Data: 27/03/2023
Observações: Recebe dois números e retorna o produto notável quadrado da soma desses dois termos */

#include <stdio.h>
#include <locale.h>

int quadrado(int num) {
   return num * num;
}

int produto_notavel(int x, int y) {
   int soma = x + y;
   int produto = quadrado(soma);
   
   produto -= quadrado(x);
   produto -= quadrado(y);
   
   return produto;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
   int x, y, resultado;
   
   printf("Digite o valor de x: ");
   scanf("%d", &x);
   
   printf("Digite o valor de y: ");
   scanf("%d", &y);
   
   resultado = produto_notavel(x, y);
   
   printf("O produto notável quadrado da soma de %d e %d é: %d\n", x, y, resultado);
   
   return 0;
}
