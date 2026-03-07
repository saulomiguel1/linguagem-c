#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char nome[50];
    char maiusc[50];

    printf("Digite seu nome:\n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (int i = 0; nome[i] != '\0'; i++) {
        maiusc[i] = toupper(nome[i]);
    }

    system("cls");

    printf("Seu nome: %s.\n", nome);
    printf("Quantidade de letras: %d.\n", strlen(nome));
    printf("Nome em maiúsculo: %s", maiusc);
}