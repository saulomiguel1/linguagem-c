#include <stdio.h>

//Verificador MAIOR DE IDADE

int main() {
    int num;

    printf("Digite sua idade:\n");
    scanf("%d", &num);

    if (num >= 18) {
        printf("MAIOR DE IDADE!\n");
    } else {
        printf("MENOR DE IDADE!\n");
    }
}