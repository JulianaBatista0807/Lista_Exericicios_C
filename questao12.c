/*Fun��o: calcular o somat�rio de um n�mero
Autor: Juliana Chacon
Data: 31/03/2023
Observa��es: a fun��o recebe um n�mero N e retorna o somat�rio de todos os n�meros de 1 a N.
*/

#include <stdio.h>
#include <locale.h>

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

void calcularSomatorio(int num) {
    int i, soma = 0;

    for(i = 1; i <= num; i++) {
        soma += i;
    }

    printf("O somat�rio de 1 a %d � %d\n", num, soma);
}

int main() {
    configurarAmbiente();

    int n;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);

    calcularSomatorio(n);

    return 0;
}
