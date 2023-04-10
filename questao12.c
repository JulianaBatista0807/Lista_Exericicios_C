/*Função: calcular o somatório de um número
Autor: Juliana Chacon
Data: 31/03/2023
Observações: a função recebe um número N e retorna o somatório de todos os números de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

void calcularSomatorio(int num) {
    int i, soma = 0;

    for(i = 1; i <= num; i++) {
        soma += i;
    }

    printf("O somatório de 1 a %d é %d\n", num, soma);
}

int main() {
    configurarAmbiente();

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    calcularSomatorio(n);

    return 0;
}
