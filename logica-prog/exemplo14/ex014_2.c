#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
    setlocale (LC_ALL, "");

    char s1[N] = {"Lógica de "};
    char s2[N] = {"Programacao!"};

    printf("\nAntes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);
    //Junta as strings (concatenar)
    strcat(s1, s2);

    printf("\nDepois do strcat\n");
    puts(s1);
}