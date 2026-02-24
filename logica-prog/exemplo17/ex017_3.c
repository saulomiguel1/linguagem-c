#include <stdio.h>

float maior(float num1, float num2); //Protótipo da função

int main() {
    float x, y, m;

    printf("Insira um valor:\n");
    scanf("%f", &x);

    printf("Insira mais um valor:\n");
    scanf("%f", &y);

    m = maior(x, y);
    printf("Maior: %.2f", m);
}

//Fazendo com o protótipo em cima, é possível colocar funções abaixo do main
float maior(float num1, float num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}