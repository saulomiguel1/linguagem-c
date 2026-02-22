#include <stdio.h>

//PAR OU ÍMPAR

int main() {
    int num;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("\nSeu numero e PAR!");
    } else {
        printf("\nSeu numero e IMPAR!");
    }
}