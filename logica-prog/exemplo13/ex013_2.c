#include <stdio.h>

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("Insira um dado:\n");
        scanf("%d", &v[i]);
    }

    printf("Dados inseridos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", v[i]);
    }
}