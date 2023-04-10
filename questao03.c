/* Fun��o: Fazer uma fun��o chamada cubo que retorna o cubo de um n�mero
Autor: Juliana Chacon
Data: [25/03/2023]
Observa��es: Recebe um n�mero como par�metro e retorna o seu cubo. */

#include <stdio.h>
#include <locale.h>

int cubo(int num) {
   return num * num * num;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
   int num, resultado;
   
   printf("Digite um n�mero: ");
   scanf("%d", &num);
   
   resultado = cubo(num);
   
   printf("O cubo de %d �: %d\n", num, resultado);
   
   return 0;
}
