/* Função: imprimir divisores de números digitados
Autor: Juliana Chacon
Data: 01/04/2023
Observações: o programa lê vários números e imprime todos os seus divisores
*/

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

void imprimirDivisores(int num) {
    int i;

    printf("Divisores de %d: ", num);

    for(i = 1; i <= num; i++) {
        if(num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    configurarAmbiente();

    int num;

    do {
        printf("Digite um número (negativo para encerrar): ");
        scanf("%d", &num);

        if(num >= 0) {
            imprimirDivisores(num);
        }
    } while(num >= 0);

    return 0;
}
