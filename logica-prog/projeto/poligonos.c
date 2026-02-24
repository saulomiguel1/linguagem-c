//Utilizo o arquivo .h com include criado para utilizar o que eu defini para PI e permitir realizar as funções nesse arquivo
#include "poligonos.h"

float calcPerimetroTriangulo(float a, float b, float c) {
    return a + b + c;
}

float calcPerimetroRetangulo(float a, float b) {
    return a * 2 + b * 2;
}

float calcPerimetroCirculo(float r) {
    return 2 * PI * r;
}

float calcAreaTriangulo(float b, float a) {
    return (b * a) / 2;
}

float calcAreaRetangulo(float a, float b) {
    return a * b;
}

float calcAreaCirculo(float r) {
    return 2 * PI * r * r;
}