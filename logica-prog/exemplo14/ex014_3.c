#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale(LC_ALL, "");

    char s[N];
    //tipo inteiro especial para tamanhos / quantidades / indíces... - nunca é negativo
    size_t i;

    printf("Digite um texto:\n");
    fgets(s, N, stdin);
    //Forma de substituir o '\n' adicionado pelo fgets pelo '\0'
    s[strcspn(s, "\n")] = '\0';
    
    //Tamanho do texto digitado sem incluir o '\0'
    i = strlen(s);
    printf("\nTamano do texto: %zu\n\n", i);

    printf("Impressao de posicao a posicao:\n");
    /*for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }*/
   puts(s);
}