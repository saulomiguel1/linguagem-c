#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[] = {"Ana"};
    char *p = nome;

    printf("%c", *(p+1));
}