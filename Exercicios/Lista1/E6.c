#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main() {

    int soma = 0;
    int* nums;
    nums = malloc(5*sizeof(int));

    if(nums) {
        printf("Memoria alocada com sucesso!\n\n");
        for(int i = 0; i < TAM; i++) {
            scanf("%d", nums + i);
            soma += nums[i];
        }
    }
    else {
        printf("Erro ao alocar memoria!\n");
    }

    printf("\nSoma dos numeros: %d\n", soma);

    free(nums);

    return 0;
}
