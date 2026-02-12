#include <stdio.h>

//#define texto "Entrada e saída de dados." Outra formato para a constante

int main() {
    const char texto[] = "Entrada e saída de dados.";
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = ""; /* Quando se declara nome[x] já é equivalente a &nome[0], já é um endereço na memória e não apenas um valor, igual altura e idade, por isso, no scanf não se utiliza o "&". */

    printf("Digite a sua idade:\n");
    scanf("%d", &idade);

    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("\nDados informados:\n");
    printf("Idade: %d.\n", idade);
    printf("Altura: %.2f.\n", altura);
    printf("Nome: %s.\n", nome);
}