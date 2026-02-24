#include <stdio.h>
#include <stdlib.h>

void display(int var, int *pont);
void update(int *p);

int main() {
    int var = 15;
    int *pont = &var;
    
    //int *pont;
    //pont = &var;

    display(var, pont);

    update(&var);

    display(var, pont);

    printf("\n\nEnd.");
    while(1);
    return 0;
}
//*pont = "Vá até o endereço guardado e pegue o valor"
//pont = Endereço da variável guardada
//&pont = Endereço do próprio pont

void display(int var, int *pont) {
    printf("\n\n");
    printf("Conteudo de var: %d\n", var);
    printf("Endereco de var: %p\n", &var);
    printf("Conteudo apontado por pont: %d\n", *pont);
    printf("Endereco apontado por pont: %p\n", pont);
    printf("Endereco do pont: %p\n", &pont);
}

void update(int *p) {
    *p += 1;
}