/*Função: calcular a área de uma esfera
Autor: Juliana Chacon
Data: 30/03/2023
Observações:recebe o raio da esfera como parâmetro e retorna a área calculada*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");	

    calcularAreaEsfera();

    return 0;
}

void calcularAreaEsfera() {
    float raio, area;
    const float PI = 3.14159265;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    area = 4 * PI * raio * raio;

    printf("A área da esfera é de: %.2f\n", area);
}







