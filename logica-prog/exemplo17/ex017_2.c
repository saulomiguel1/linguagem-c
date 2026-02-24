#include <stdio.h>

//Número de colunas deve ser fixo, Número de linhas podem ser passadas como parâmetro
void imprime(int m[][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {          
            printf("%d ", m[i][j]);   
        }
        printf("\n");
    }
}

int main() {
    int mat[3][4] = {
        {1, 2, 3, 4},
        {50, 60, 70, 80},
        {91, 101, 111, 121}
    };

    imprime(mat, 3);
}