#include <stdio.h>

int main() {
    int soma = 0;
    int valor;

    while (1) {
        printf("Digite um numero para somar(Digite 0 para encerrar):\n");
        scanf("%d", &valor);
        if (valor == 0) {
            break;
        }
        soma += valor;
    }
    
    printf("\nValor total somado: %d.\n", soma);
    return 0;
}





