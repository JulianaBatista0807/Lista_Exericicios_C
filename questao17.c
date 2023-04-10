/* Fun��o: calcular o n�mero de arranjos de n objetos diferentes, onde r objetos s�o escolhidos de cada vez
Autora: Juliana Chacon
Data: 01/04/2023
Observa��es: a fun��o recebe dois inteiros n e r, e retorna o n�mero de arranjos
*/

#include <stdio.h>
#include <locale.h>
// -std=c99 adicionei em op��es de compilador

void configurarAmbiente() {
    setlocale(LC_ALL, "Portuguese_Brazil");
}

int calcularArranjos(int n, int r) {
    int resultado = 1;
    for(int i = n; i > n - r; i--) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    configurarAmbiente();

    int n, r;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o valor de r: ");
    scanf("%d", &r);

    int arranjos = calcularArranjos(n, r);

    printf("O n�mero de arranjos de %d objetos diferentes, escolhendo %d objetos de cada vez, � %d.\n", n, r, arranjos);

    return 0;
}
