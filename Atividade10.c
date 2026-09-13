#include <stdio.h>

int main() {
    float nota1, nota2, nota3, freq, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a frequencia: ");
    scanf("%f", &freq);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7 && freq >= 75) {
        printf("Aprovado\n");
    } 
    else if (media >= 5 && media <= 6.9 && freq >= 75) {
        printf("Recuperacao\n");
    } 
    else {
        printf("Reprovado\n");
    }

    printf("Media do aluno: %.2f\n", media);

    return 0;
}