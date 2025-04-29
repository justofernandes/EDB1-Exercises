#include <stdio.h>
#include <string.h>
#include "lista.h"

void inicializa_lista(Lista *l) {
    l->num_elem = 0;
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
    if ((l->num_elem == MAX) || (pos < 0) || (pos > l->num_elem))
        return false;

    for (int j = l->num_elem; j > pos; j--)
        l->dados[j] = l->dados[j - 1];

    l->dados[pos] = d;
    l->num_elem++;
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

void reinicializa_lista(Lista *l) {
    l->num_elem = 0;
}
