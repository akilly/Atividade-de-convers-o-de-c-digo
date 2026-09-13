#include <stdio.h>

int main() {
    float valor, desconto, resultado;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor >= 300) {
        desconto = valor * 0.12;
    } 
    else {
        desconto = valor * 0.05;
    }

    resultado = valor - desconto;

    printf("Valor final: %.2f\n", resultado);

    return 0;
}