#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    fgets(senha_usr, sizeof(senha_usr), stdin);
    //Não se pode esquecer de remover o '\n', se não vão considerar textos diferentes
    senha_usr[strcspn(senha_usr, "\n")] = '\0';

    //Irá comparar e retornar se elas são iguais ou se a vem antes ou depois de b
    ok = strcmp(hardText, senha_usr);

    if (ok == 0) {
        printf("Textos iguais!\n");
    } else {
        printf("Textos diferentes!\n");
    }
}