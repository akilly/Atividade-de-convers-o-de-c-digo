#include <stdio.h>

int main() {
    int m1, m2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &m1);

    printf("Digite o segundo numero: ");
    scanf("%d", &m2);

    resultado = m1 + m2;

    if (resultado < 20) {
        printf("Soma menor que 20\n");
    } 
    else if (resultado == 20) {
        printf("Soma igual a 20\n");
    } 
    else {
        printf("Soma maior que 20\n");
    }

    return 0;
}