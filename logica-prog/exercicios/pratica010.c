#include <stdio.h>
#include <stdlib.h>

void mostrar_menu() {
    printf("1- Somar 2 numeros.\n2- Verificar par ou impar\n3- Sair\n");
}

int somar(int a, int b) {
    return printf("A soma resulta em: %d.\n", a + b);
}

int par_ou_impar(int a) {
    if (a % 2 == 0) {
        return printf("Seu numero e PAR!\n");
    } else {
        return printf("Seu numero e IMPAR!\n");
    }
}

int main() {
    int num1;
    int num2;
    int opcao;

    do {
        mostrar_menu();
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um numero:\n");
            scanf("%d", &num1);
            printf("Digite outro numero:\n");
            scanf("%d", &num2);

            system("cls");
            somar(num1, num2);

        } else if (opcao == 2) {
            printf("Digite um numero:\n");
            scanf("%d", &num1);

            system("cls");
            par_ou_impar(num1);

        } else if (opcao == 3) {
            break;

        } else {
            printf("Digite uma opcao valida!\n");
        }
    } while(1);
}