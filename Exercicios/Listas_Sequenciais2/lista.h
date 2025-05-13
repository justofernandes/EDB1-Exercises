#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>

#define CAPACIDADE_INICIAL 2

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Alunos;

typedef struct {
    Alunos *dados;
    int num_elem;
    int capacidade;
} Lista;

void inicializa_lista(Lista *l);
int tamanho(Lista *l);
// int busca(Lista *l, int ch);
int busca_binaria(Lista *l, int chave);
void exibe_lista(Lista *l);
bool insere(Lista *l, Alunos d, int pos);
bool remove_lista(Lista *l, int ch);
void reinicializa_lista(Lista *l);
void libera_lista(Lista *l);
void merge_sort(Lista *l, int inicio, int fim);

#endif
