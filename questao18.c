/* Fun��o: calcular o valor do desconto e o valor a ser pago pelo cliente na compra de um ve�culo
Autor: Juliana Chacon
Data: 01/04/2023
Observa��es: o programa solicita o valor do ve�culo e o tipo de combust�vel e calcula o desconto */
#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

float calcularDesconto(float valor, char combustivel) {
    float desconto;
    switch (combustivel) {
        case 'a':
            desconto = valor * 0.28;
            break;
        case 'g':
            desconto = valor * 0.22;
            break;
        case 'd':
            desconto = valor * 0.12;
            break;
        default:
            desconto = 0;
            break;
    }
    return desconto;
}

int main() {
    configurarAmbiente();

    float valor, desconto, totalDesconto = 0, totalPago = 0;
    char combustivel;
    do {
        printf("Digite o valor do ve�culo (0 para encerrar): ");
        scanf("%f", &valor);
        if (valor == 0) {
            break;
        }
        printf("Digite o combust�vel do ve�culo (a - �lcool, g - gasolina, d - diesel): ");
        scanf(" %c", &combustivel);
        desconto = calcularDesconto(valor, combustivel);
        float valorPago = valor - desconto;
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Valor a ser pago: R$ %.2f\n", valorPago);
        totalDesconto += desconto;
        totalPago += valorPago;
    } while (valor != 0);

    printf("Total de desconto: R$ %.2f\n", totalDesconto);
    printf("Total pago pelos clientes: R$ %.2f\n", totalPago);

    return 0;
}
