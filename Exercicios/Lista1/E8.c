#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int largura;
    int altura;

}Retangulo;

int calc_area(Retangulo *retangulo) {

    int area;

    area = retangulo->altura * retangulo->largura;

    return area;
}

int main() {

    Retangulo ret;
    int area;

    printf("Altura: ");
    scanf("%d", &ret.altura);
    printf("\nLargura: ");
    scanf("%d", &ret.largura);

    area = calc_area(&ret);

    printf("Area do retangulo: %d", area);

    return 0;
}
