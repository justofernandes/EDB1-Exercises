#include <stdio.h>
#include <stdlib.h>

void adicionar_elementos(int n, int vet[]);
int busca_binaria(int c, int i, int f, int vet[]);

int main () {

    int c, tam, resultado;

    printf("\nInforme o tamanho do vetor: ");
    scanf("%d", &tam);

    int vetor[tam];

    printf("\nInforme os elementos do vetor:\n\n");
    adicionar_elementos(tam, vetor);

    printf("\nInforme o elemento que deseja buscar no vetor: ");
    scanf("%d", &c);

    resultado = busca_binaria(c, 0, tam-1, vetor);
    printf("\n%d", resultado);

    return 0;
}

void adicionar_elementos(int n, int vet[]) {
    for(int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
}

int busca_binaria(int c, int i, int f, int vet[]) {

    if(i > f) {
        return -1;
    }

    int m = i + (f - i) / 2;

    if(vet[m] == c) {
        return m;
    }

    if(vet[m] > c) {
        return busca_binaria(c, i, m-1, vet);
    }
    if(vet[m] < c) {
        return busca_binaria(c, m+1, f, vet);
    }
}
