/* Função: calcular o tempo necessário para que a massa de um material radioativo se torne menor que 0,05 gramas
Autora: Juliana Chacon
Data: 01/04/2023
Observações: o programa recebe a massa inicial em gramas e calcula o tempo necessário em segundos
*/
#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

int main() {
    configurarAmbiente();
    
    double massa_inicial, massa_atual;
    int segundos = 0;

    printf("Digite a massa inicial do material radioativo em gramas: ");
    scanf("%lf", &massa_inicial);

    massa_atual = massa_inicial;
    while (massa_atual >= 0.05) {
        massa_atual /= 2;
        segundos += 50;
    }

    printf("O tempo necessário para a massa se tornar menor que 0,05 gramas é de %d segundos.\n", segundos);

    return 0;
}
