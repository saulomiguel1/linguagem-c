#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 3

typedef struct {
    int idade;
    float peso;
    char nome[50];
} tipo_pessoa;

int main() {
    setlocale(LC_ALL, "");

    tipo_pessoa lista[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Insira os dados da pessoa %d:\n", i+1);
        puts("Nome: ");
        fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';

        puts("Idade: ");
        scanf("%d", &lista[i].idade);

        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    system("cls");

    puts("Seus dados:\n");
    for (int i = 0; i < TAM; i++) {
        printf("---------- Pessoa %d -------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d anos\n", lista[i].idade);
        printf("\tPeso: %.2fkg\n", lista[i].peso);
    }
    printf("---------------------------------------\n");
}
