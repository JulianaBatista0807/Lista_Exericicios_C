/* Fun��o: calcular a velocidade m�dia de um percurso
Autor: Juliana Chacon
Data: 31/03/2023
Observa��es: ler a dist�ncia percorrida e o tempo gasto e ent�o calcular e exibir a velocidade m�dia. */

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");	
    calcularVelocidadeMedia();

    return 0;
}

void calcularVelocidadeMedia() {
    float distancia, tempo, velocidade;

    printf("Digite a dist�ncia percorrida (em km): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("A velocidade m�dia do percurso � de %.2f km/h\n", velocidade);
}

