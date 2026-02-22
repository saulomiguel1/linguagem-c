#include <stdio.h>

//Contagem regressiva

int main() {
    int i;

    printf("Digite um número: ");
    scanf("%d", &i);

    while (i > -1) {
        printf("%d\n", i);
        i--;
    } 
}