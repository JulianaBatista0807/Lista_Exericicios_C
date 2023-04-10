/* Função: calcular o produto notável quadrado da soma de dois termos
Autor: Juliana Chacon
Data: 27/03/2023
Observações:Cubo da soma de dois termos */

#include <stdio.h>
#include <locale.h>

float quadrado(float num) {
    return num * num;
}

float quadrado_da_soma(float x, float y) {
    float resultado = quadrado(x) + 2 * x * y + quadrado(y);
    return resultado;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
    float x, y;
    printf("Digite o valor de x: ");
    scanf("%f", &x);
    printf("Digite o valor de y: ");
    scanf("%f", &y);
    float resultado = quadrado_da_soma(x, y);
    printf("O resultado é de %.2f e %.2f é %.2f", x, y, resultado);
    return 0;
}
