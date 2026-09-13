#include <stdio.h>

int main() {
    float consumo, valorFinal;

    printf("Digite o consumo: ");
    scanf("%f", &consumo);

    if (consumo <= 100) {
        valorFinal = consumo * 0.6;
    } 
    else if (consumo >= 101 && consumo <= 200) {
        valorFinal = consumo * 0.75;
    } 
    else {
        valorFinal = consumo * 0.9;
    }

    printf("Valor final: %.2f\n", valorFinal);

    return 0;
}