#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "lista.h"

int main() {
    setlocale(LC_ALL, "");

    printf("\n");

    /*O trecho abaixo poderia tamb�m ser substituido por uma estrutura de repeti��o
      que iria rodar at� uma determinada condu��o de parada, e adicionaria os alunos
      na lista, sem a necessidade de armazen�-los em vari�veis.
    */

    Lista l;
    Alunos a1 = {"Jo�o", 123456, 7.5};
    Alunos a2 = {"Maria", 654321, 8.0};
    Alunos a3 = {"Carlos", 111111, 6.0};

    inicializa_lista(&l);
    insere(&l, a1, 0);
    insere(&l, a2, 1);
    insere(&l, a3, 1);

    exibe_lista(&l);

    printf("\nTamanho da lista: %d\n", tamanho(&l));

    printf("\nRemovendo matr�cula 654321\n");
    remove_lista(&l, 654321);

    printf("\nTamanho da lista ap�s a remo��o: %d\n\n", tamanho(&l));

    exibe_lista(&l);

    printf("\n");

    return 0;
}
