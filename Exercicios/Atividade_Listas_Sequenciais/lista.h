#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>

#define MAX 100

typedef struct {
    char nome[50];
    int matricula;
    float nota;
} Alunos;

typedef struct {
    Alunos dados[MAX];
    int num_elem;
} Lista;

void inicializa_lista(Lista *l);
int tamanho(Lista *l);
int busca(Lista *l, int ch);
void exibe_lista(Lista *l);
bool insere(Lista *l, Alunos d, int pos);
bool remove_lista(Lista *l, int ch);
void reinicializa_lista(Lista *l);

#endif
