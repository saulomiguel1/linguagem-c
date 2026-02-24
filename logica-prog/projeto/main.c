//Possível aqui invocar qualquer função das que criei no outro arquivo
#include <stdio.h>
#include "poligonos.h"

int main() {
    printf("Area do Triangulo: %.2f.\n", calcAreaTriangulo(10, 10));
}

//Não consegui executar pelo compile run por ter que compilar dois arquivos .c, e só tá compilando um, apenas consegui fazendo o processo manualmente de colocar o caminho corretamente e fazendo um "gcc main.c poligonos.c -o main.exe"