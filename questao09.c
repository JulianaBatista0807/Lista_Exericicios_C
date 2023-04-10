/* Função: calcular a diferença entre duas horas distintas de um mesmo dia
Autor: Juliana Chacon
Data: 30/03/2023
Observações: a função recebe duas horas no formato hh:mm e retorna a diferença de tempo entre elas, no mesmo formato */

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");	
    
    calcularDiferencaHorario();

    return 0;
}

void calcularDiferencaHorario() {
    int hora1, minuto1, hora2, minuto2, difHora, difMin;

    printf("Digite a primeira hora (hh:mm): ");
    scanf("%d:%d", &hora1, &minuto1);

    printf("Digite a segunda hora (hh:mm): ");
    scanf("%d:%d", &hora2, &minuto2);

    difHora = hora2 - hora1;
    difMin = minuto2 - minuto1;

    if (difMin < 0) {
        difMin += 60;
        difHora--;
    }

    printf("A diferenca de tempo entre as horas digitadas é: %02d:%02d\n", difHora, difMin);
}


