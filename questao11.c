/* Fun��o: calcular a �rea de uma esfera
Autor: Juliana Chacon
Data: 31/03/2023
Observa��es: a fun��o recebe o raio da esfera e calcula a �rea. */

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

void calcularAreaEsfera() {
    float raio, area;
    const float PI = 3.14159265;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;

    printf("A �rea da esfera � de: %.2f\n", area);
}

int main() {
    configurarAmbiente();

    calcularAreaEsfera();

    return 0;
}






