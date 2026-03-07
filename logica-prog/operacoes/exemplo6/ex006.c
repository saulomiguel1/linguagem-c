#include <stdio.h>

int main() {
    int A, B, soma, subtr, mult, divis;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("\nResultados:\n"
    "Soma: %d.\n"
    "Subtracao: %d.\n"
    "Multiplicacao: %d.\n"
    "Divisao: %d.\n", soma, subtr, mult, divis);
}