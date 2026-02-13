#include <stdio.h>

int main() {
    float nota;

    printf("Digite sua nota:\n");
    scanf("%f", &nota);

    if (nota == 10) {
        printf("Perfeito!\n");
    } else if (nota >= 8) {
        printf("Excelente!\n");
    } else if (nota >= 7) {
        printf("Regular.\n");
    } else if (nota >= 4) {
        printf("Esta de Avaliacao Final.\n");
    } else {
        printf("Reprovado.\n");
    }
}