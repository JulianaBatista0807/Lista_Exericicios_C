/*Função: calcular a sequência de Fibonacci
Autor: Juliana Chacon
Data: 01/04/2023
Observações: o programa solicita um número n e exibe a sequência de Fibonacci
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

void configurarAmbiente() {
setlocale(LC_ALL, "Portuguese_Brazil");
}

int calcularFibonacci(int n) {
double phi = (1 + sqrt(5)) / 2;
return (int) round((pow(phi, n) - pow(1 - phi, n)) / sqrt(5));
}

int main() {
configurarAmbiente();
int n;

printf("Digite um número para gerar a sequência de Fibonacci: ");
scanf("%d", &n);

printf("Sequência de Fibonacci de 0 a %d:\n", n);

for (int i = 0; i <= n; i++) {
    printf("%d ", calcularFibonacci(i));
}

printf("\n");

return 0;
}
