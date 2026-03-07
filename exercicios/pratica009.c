#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char palavra[50];
    int vogais = 0;

    printf("Digite uma palavra qualquer:\n");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strcspn(palavra, "\n")] = '\0';

    for (int i = 0; palavra[i] != '\0'; i++) {
        char minusc = tolower(palavra[i]);

        if (minusc == 'a' || minusc == 'e' || minusc == 'i' || minusc == 'o' || minusc == 'u') {
            vogais += 1;
        } 
    }

    system("cls");

    printf("Palavra digitada: %s.\n", palavra);
    printf("Quantidade de vogais: %d.\n", vogais);
}