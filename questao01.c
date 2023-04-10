/* Função: Calcular a hipotenusa de um triângulo retângulo
Autor: [Juliana Chacon]
Data: [25/03/2023]
Observações: Calcula or valor da hipotenusa.
*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
   setlocale(LC_ALL, "Portuguese_Brazil");
   float a, b, h;
   
   printf("Digite o valor do cateto a: ");
   scanf("%f", &a);
   
   printf("Digite o valor do cateto b: ");
   scanf("%f", &b);
   
   h = sqrt(a*a + b*b);
   
   printf("O valor da hipotenusa é: %.2f\n", h);
   
   return 0;
}
