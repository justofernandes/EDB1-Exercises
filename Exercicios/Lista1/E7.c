#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int idade;
    float altura;
}Pessoa;

int main() {

    Pessoa pessoa;

    printf("Nome: ");
    scanf("%s", &pessoa.nome);

    printf("\nIdade: ");
    scanf("%d", &pessoa.idade);

    printf("\nAltura: ");
    scanf("%f", &pessoa.altura);

    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\n", pessoa.nome, pessoa.idade, pessoa.altura);

    return 0;
}
