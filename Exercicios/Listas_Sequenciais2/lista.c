#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

void inicializa_lista(Lista *l) {
    l->dados = calloc(CAPACIDADE_INICIAL, sizeof(Alunos));
    l->num_elem = 0;
    l->capacidade = CAPACIDADE_INICIAL;
}

int tamanho(Lista *l) {
    return l->num_elem;
}

int busca(Lista *l, int ch) {
    for (int i = 0; i < l->num_elem; i++) {
        if (ch == l->dados[i].matricula)
            return i;
    }
    return -1;
}

void exibe_lista(Lista *l) {
    printf("Lista:\n");
    for (int i = 0; i < l->num_elem; i++) {
        printf("Nome: %s / Matrícula: %d / Nota: %.2f\n",
            l->dados[i].nome,
            l->dados[i].matricula,
            l->dados[i].nota);
    }
}

bool insere(Lista *l, Alunos d, int pos) {
    if (pos < 0 || pos > l->num_elem)
        return false;

    if (l->num_elem == l->capacidade) {
        int nova_capacidade = l->capacidade * 2;
        Alunos *novo = realloc(l->dados, nova_capacidade * sizeof(Alunos));
        if (!novo)
            return false;
        l->dados = novo;
        l->capacidade = nova_capacidade;
    }

    for (int j = l->num_elem; j > pos; j--)
        l->dados[j] = l->dados[j - 1];

    l->dados[pos] = d;
    l->num_elem++;

    // Ordena após cada inserção
    merge_sort(l, 0, l->num_elem - 1);

    return true;
}

bool remove_lista(Lista *l, int ch) {
    int pos = busca(l, ch);
    if (pos == -1)
        return false;

    for (int j = pos; j < l->num_elem - 1; j++)
        l->dados[j] = l->dados[j + 1];

    l->num_elem--;
    return true;
}

void merge(Alunos *v, int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    Alunos *esq = malloc(n1 * sizeof(Alunos));
    Alunos *dir = malloc(n2 * sizeof(Alunos));

    for (int i = 0; i < n1; i++)
        esq[i] = v[inicio + i];
    for (int j = 0; j < n2; j++)
        dir[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (esq[i].matricula <= dir[j].matricula)
            v[k++] = esq[i++];
        else
            v[k++] = dir[j++];
    }

    while (i < n1)
        v[k++] = esq[i++];
    while (j < n2)
        v[k++] = dir[j++];

    free(esq);
    free(dir);
}

void merge_sort(Lista *l, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        merge_sort(l, inicio, meio);
        merge_sort(l, meio + 1, fim);
        merge(l->dados, inicio, meio, fim);
    }
}

int busca_binaria(Lista *l, int chave) {
    int inicio = 0, fim = l->num_elem - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (l->dados[meio].matricula == chave)
            return meio;
        else if (l->dados[meio].matricula < chave)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }
    return -1;
}

void reinicializa_lista(Lista *l) {
    l->num_elem = 0;
}

void libera_lista(Lista *l) {
    free(l->dados);
}