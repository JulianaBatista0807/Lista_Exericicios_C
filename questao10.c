/* Função: calcular a velocidade média de um percurso
Autor: Juliana Chacon
Data: 31/03/2023
Observações: ler a distância percorrida e o tempo gasto e então calcular e exibir a velocidade média. */

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");	
    calcularVelocidadeMedia();

    return 0;
}

void calcularVelocidadeMedia() {
    float distancia, tempo, velocidade;

    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("A velocidade média do percurso é de %.2f km/h\n", velocidade);
}

