/* Função: Calcular a média aritmética, harmônica, geométrica e quadrática de 4 valores reais
Autor: Juliana Chacon
Data: 30/03/2023
Observações: utiliza as fórmulas para média harmônica, geométrica e quadrática */

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese_Brazil");
  float a, b, c, d, media_arit, media_harm, media_geom, media_quad;

  // Leitura dos valores de a, b, c e d
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  printf("Digite o valor de c: ");
  scanf("%f", &c);
  printf("Digite o valor de d: ");
  scanf("%f", &d);

  // Cálculo da média aritmética
  media_arit = (a + b + c + d) / 4;

  // Cálculo da média harmônica
  media_harm = 4 / (1/a + 1/b + 1/c + 1/d);

  // Cálculo da média geométrica
  media_geom = pow(a * b * c * d, 0.25);

  // Cálculo da média quadrática
  media_quad = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4;

  // Impressão dos resultados
  printf("\nA media aritmetica é: %.2f\n", media_arit);
  printf("A media harmonica é: %.2f\n", media_harm);
  printf("A media geometrica é: %.2f\n", media_geom);
  printf("A media quadratica é: %.2f\n", media_quad);

  return 0;
}
