/*Fun��o: calcular a �rea de uma esfera
Autor: Juliana Chacon
Data: 30/03/2023
Observa��es:recebe o raio da esfera como par�metro e retorna a �rea calculada*/

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

    printf("A �rea da esfera � de: %.2f\n", area);
}







