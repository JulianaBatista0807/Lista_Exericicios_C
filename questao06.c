/* Fun��o: Calcular a m�dia aritm�tica, harm�nica, geom�trica e quadr�tica de 4 valores reais
Autor: Juliana Chacon
Data: 30/03/2023
Observa��es: utiliza as f�rmulas para m�dia harm�nica, geom�trica e quadr�tica */

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

  // C�lculo da m�dia aritm�tica
  media_arit = (a + b + c + d) / 4;

  // C�lculo da m�dia harm�nica
  media_harm = 4 / (1/a + 1/b + 1/c + 1/d);

  // C�lculo da m�dia geom�trica
  media_geom = pow(a * b * c * d, 0.25);

  // C�lculo da m�dia quadr�tica
  media_quad = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4;

  // Impress�o dos resultados
  printf("\nA media aritmetica �: %.2f\n", media_arit);
  printf("A media harmonica �: %.2f\n", media_harm);
  printf("A media geometrica �: %.2f\n", media_geom);
  printf("A media quadratica �: %.2f\n", media_quad);

  return 0;
}
