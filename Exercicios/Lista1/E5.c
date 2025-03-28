#include <stdio.h>
#include <stdlib.h>

void troca_ciclica(int* a, int* b, int* c, int* d, int* e, int* soma) {

    int aux = *e;
    *e = *d;
    *d = *c;
    *c = *b;
    *b = *a;
    *a = aux;

    *soma = *a + *b + *c + *d + *e;
}

int main() {

    void troca_ciclica(int* a, int* b, int* c, int* d, int* e, int* soma);

    int a, b, c, d, e, soma = 0;

    int* pSoma = &soma;

    printf("Informe os valores das variaveis:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("\nOs valores sao:\n a: %d\n b: %d\n c: %d\n d: %d\n e: %d\n", a, b, c, d, e);

    troca_ciclica(&a, &b, &c, &d, &e, pSoma);

    printf("\nOs valores apos a troca sao:\n a: %d\n b: %d\n c: %d\n d: %d\n e: %d\n", a, b, c, d, e);
    printf("\nA soma dos valores eh igual a: %d", soma);

    return 0;
}
