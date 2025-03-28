#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void armazenar(int n, int vetor[]) {

    for(int i = 0; i < n; i++ ) {
        scanf("%d", &vetor[i]);
    }
}

int somar_elemtnos(int n, int vetor[]) {

    int soma = 0;

    for(int i = 0; i < n; i++) {
        soma += vetor[i];
    }

    return soma;
}

int main() {

    int soma;

    void armazenar(int n, int vetor[]);
    int somar_elementos(int n, int vetor[]);

    int vet_notas[TAM];

    armazenar(TAM, vet_notas);

    soma = somar_elemtnos(TAM, vet_notas);

    printf("Soma dos elementos: %d", soma);


    return 0;
}
