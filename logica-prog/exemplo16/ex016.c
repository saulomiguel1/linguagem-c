#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

typedef struct {
    int idade;
    float peso;
    char nome[TAM];
} tipo_pessoa;

int main() {
    setlocale (LC_ALL, "");

    //Teste criando e inicializando
    tipo_pessoa pes = {0, 0.0, "Teste"};

    printf("Início:\n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    //Atribuindo valores aos campos
    pes.idade = 20;
    pes.peso = 75;
    strcpy(pes.nome, "Saulo");

    printf("\nAlterando os campos via codigo:\n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);

    //Solicitando inserções via teclado
    printf("\nInsira sua idade:\n");
    scanf("%d", &pes.idade);

    printf("Insira seu peso:\n");
    scanf("%f", &pes.peso);

    //Limpar o buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Insira seu nome:\n");
    fgets(pes.nome, sizeof(pes.nome), stdin);
    pes.nome[strcspn(pes.nome,"\n")] = '\0';
    //Caso for um único caractere - Ex: pergunta de sexo M/F, pode utilizar o scanf com o especificador %c

    printf("\nAlterando com dados do usuário:\n");
    printf("Idade: %d\n", pes.idade);
    printf("Peso: %.2f\n", pes.peso);
    printf("Nome: %s\n", pes.nome);
}   