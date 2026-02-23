#include <stdio.h>

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Imprimindo a primeira linha da matriz:\n");
    for(int j = 0; j < 3; j++) {
        printf("%d ", mat[0][j]);
    }

    printf("\nImprimindo a matriz toda:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}