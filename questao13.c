/* Função: converter ângulo de graus para radianos
Autor: Juliana Chacon
Data: 01/04/2023
Observações: a função recebe um ângulo em graus e retorna o valor do mesmo convertido para radianos.
*/

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

float converterGrausParaRadianos(float graus) {
    const float PI = 3.14159265;
    float radianos;

    radianos = graus * PI / 180;

    return radianos;
}

int main() {
    configurarAmbiente();

    float graus, radianos;
    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = converterGrausParaRadianos(graus);
    printf("%.2f graus equivale a %.2f radianos.\n", graus, radianos);

    return 0;
}
