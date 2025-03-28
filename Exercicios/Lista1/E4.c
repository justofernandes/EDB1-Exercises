#include <stdio.h>
#include <stdlib.h>
#define TAM 3

int somar_diagonal(int matriz[][TAM]) {

    int soma = 0;

    for(int i = 0; i < TAM; i++) {
        for(int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
            if(i == j) {
                soma += matriz[i][j];
            }
        }
        printf("\n");
    }

    return soma;
}

void armazenar_elemntos(int n, int matriz[][TAM]) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

}

 int main() {

    int somar_diagonal(int matriz[][TAM]);
    void armazenar_elemntos(int n, int matriz[][TAM]);

    int matriz_num[TAM][TAM] = {0};
    int soma_diagonal = 0;

    armazenar_elemntos(TAM, matriz_num);

    printf("\nElementos da Matriz: \n");

    soma_diagonal = somar_diagonal(matriz_num);

    printf("\nSoma dos elementos da diagonal principal: %d", soma_diagonal);

    return 0;
 }
