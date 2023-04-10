/* Função: calcular o número de arranjos de n objetos diferentes, onde r objetos são escolhidos de cada vez
Autora: Juliana Chacon
Data: 01/04/2023
Observações: a função recebe dois inteiros n e r, e retorna o número de arranjos
*/

#include <stdio.h>
#include <locale.h>
// -std=c99 adicionei em opções de compilador

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

int calcularArranjos(int n, int r) {
    int resultado = 1;
    for(int i = n; i > n - r; i--) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    configurarAmbiente();

    int n, r;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de r: ");
    scanf("%d", &r);

    int arranjos = calcularArranjos(n, r);

    printf("O número de arranjos de %d objetos diferentes, escolhendo %d objetos de cada vez, é %d.\n", n, r, arranjos);

    return 0;
}
