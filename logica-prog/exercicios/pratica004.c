#include <stdio.h>

//Tabuada

int main() {
    int num;
    int mult;

    printf("Digite um numero para mostrar a tabuada: ");
    scanf("%d", &num);

    for (int i = 0; i < 11; i++) {
        mult = num * i;
        printf("%d X %d = %d\n", num, i, mult);
    }
}