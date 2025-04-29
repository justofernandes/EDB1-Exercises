#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "lista.h"

int main() {
    setlocale(LC_ALL, "");

    printf("\n");

    /*O trecho abaixo poderia também ser substituido por uma estrutura de repetição
      que iria rodar até uma determinada condução de parada, e adicionaria os alunos
      na lista, sem a necessidade de armazená-los em variáveis.
    */

    Lista l;
    Alunos a1 = {"João", 123456, 7.5};
    Alunos a2 = {"Maria", 654321, 8.0};
    Alunos a3 = {"Carlos", 111111, 6.0};

    inicializa_lista(&l);
    insere(&l, a1, 0);
    insere(&l, a2, 1);
    insere(&l, a3, 1);

    exibe_lista(&l);

    printf("\nTamanho da lista: %d\n", tamanho(&l));

    printf("\nRemovendo matrícula 654321\n");
    remove_lista(&l, 654321);

    printf("\nTamanho da lista após a remoção: %d\n\n", tamanho(&l));

    exibe_lista(&l);

    printf("\n");

    return 0;
}
