#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main() {
    setlocale (LC_ALL, "");

    char origem[N] = {"Olá, Mundo!"};
    char destino[N];

    printf("\nAntes do strcpy:\n");
    puts(origem);
    puts(destino);
    //Copia uma string ao final da outra
    strcpy(destino, origem);
    
    printf("\nDepois do strcpy:\n");
    puts(origem);
    puts(destino);
}