/* Função: Calcular a distância entre dois pontos
Autor: Juliana Chacon
Data: 30/03/2023
Observações: O programa lê as coordenadas dos pontos A e B e imprime a distância entre eles. */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    float x1, y1, x2, y2, distancia;

    printf("Informe as coordenadas do ponto A (x1,y1): ");
    scanf("%f%f", &x1, &y1);

    printf("Informe as coordenadas do ponto B (x2,y2): ");
    scanf("%f%f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos A e B é: %.2f\n", distancia);

    return 0;
}
