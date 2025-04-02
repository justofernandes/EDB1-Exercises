#include <stdio.h>
#include <stdlib.h>

int busca_sequencial(int c,int i, int n, int vet[]);
void preencher_vetor(int vetor[], int tam);

int main() {

    int n, resultado, c;

    printf("\nInforme o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor_elementos[n];

    printf("\nInforme os elementos do vetor:\n\n");
    preencher_vetor(vetor_elementos, n);

    printf("\nInforme o elemento que deseja buscar no vetor: ");
    scanf("%d", &c);

    resultado = busca_sequencial(c , 0, n, vetor_elementos);

    printf("%d", resultado);

    return 0;
}

void preencher_vetor(int vetor[], int tam) {

    for(int i = 0; i < tam; i++) {
        scanf("%d", &vetor[i]);
    }

}

int busca_sequencial(int c, int i, int n, int vet[]) {

    if(vet[i] > c || i > n) {
        return -1;
    }
    else {
        if(vet[i] == c) {
            return i;
        }
    }

    return busca_sequencial(c, i+1, n, vet);
}
