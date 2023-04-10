/* Função: calcular o montante acumulado após n anos de juros compostos
Autora: Juliana Chacon
Data: 01/04/2023
Observações: a função recebe o capital inicial e a taxa de juros anual, e calcula o montante acumulado
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

void calcularMontanteAcumulado() {
    float capital, taxaJuros, montante;
    int anos;

    printf("Digite o capital inicial: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros anual: ");
    scanf("%f", &taxaJuros);

    printf("Digite o número de anos: ");
    scanf("%d", &anos);

    montante = capital * pow(1 + taxaJuros / 100, anos);

    printf("O montante acumulado após %d anos é: %.2f\n", anos, montante);
}

int main() {
    configurarAmbiente();

    calcularMontanteAcumulado();

    return 0;
}
