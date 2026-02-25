#include <stdio.h>
#include <string.h>

int main() {
    char senha[] = "1234";
    char teste_usr[50];

    printf("Digite a senha:\n");
    fgets(teste_usr, sizeof(teste_usr), stdin);
    teste_usr[strcspn(teste_usr, "\n")] = '\0';

    if (strcmp(senha, teste_usr) == 0) {
        printf("Senha correta, bem-vindo!\n");
    } else {
        printf("Senha incorreta, tente novamente iniciando o programa de novo.\n");
    }
}