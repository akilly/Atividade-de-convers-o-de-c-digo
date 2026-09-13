#include <stdio.h>

int main() {
    float distancia, litros, media;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    media = distancia / litros;

    if (media >= 12) {
        printf("Eficiente\n");
    } 
    else {
        printf("Baixa eficiencia\n");
    }

    return 0;
}