/*Fun��o: calcular o IMC
Autora: Juliana Chacon
Data: 01/04/2023
Observa��es: o programa solicita o peso e a altura do usu�rio em quilogramas e metros, e calcula o IMC. */

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

int main() {
    configurarAmbiente();
    float peso, altura, imc;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC �: %.2f\n", imc);

    printf("VALORES DE IMC\n");
    printf("Abaixo do peso: menor que 18,5\n");
    printf("Normal: entre 18,5 e 24,9\n");
    printf("Acima do peso: entre 25 e 29,9\n");
    printf("Obeso: 30 ou mais\n");

    if (imc < 18.5) {
        printf("Voc� est� abaixo do peso.\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Voc� est� com o peso normal.\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Voc� est� acima do peso.\n");
    } else {
        printf("Voc� est� obeso.\n");
    }

    return 0;
}
