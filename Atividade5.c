#include <stdio.h>

int main() {
    float salario, reajuste, novoSalario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 2500) {
        reajuste = salario * 0.10;
    } 
    else {
        reajuste = salario * 0.06;
    }

    novoSalario = salario + reajuste;

    printf("Salario antigo: %.2f\n", salario);
    printf("Valor do reajuste: %.2f\n", reajuste);
    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}