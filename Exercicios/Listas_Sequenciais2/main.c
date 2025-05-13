#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "lista.h"

int main() {
    setlocale(LC_ALL, "");

    Lista l;
    inicializa_lista(&l);

    int n;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        Alunos aluno;

        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        fgets(aluno.nome, sizeof(aluno.nome), stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

        printf("Matrícula: ");
        scanf("%d", &aluno.matricula);

        printf("Nota: ");
        scanf("%f", &aluno.nota);
        getchar();

        insere(&l, aluno, l.num_elem);
    }

    printf("\nLista de alunos:\n");
    exibe_lista(&l);

    int chave;
    printf("\nDigite uma matrícula para busca binária: ");
    scanf("%d", &chave);

    int pos = busca_binaria(&l, chave);

    if (pos != -1){
        printf("Aluno encontrado: %s, Nota: %.2f\n", l.dados[pos].nome, l.dados[pos].nota);
    }

    else {
        printf("Aluno com matrícula %d não encontrado.\n", chave);
    }

    int mat;
    
    printf("\nDigite uma matrícula para remover: ");
    scanf("%d", &mat);

    if (remove_lista(&l, mat)) {
        printf("Aluno removido com sucesso.\n");
    } 
    else {
        printf("Matrícula não encontrada.\n");
    }

    printf("\nLista atualizada:\n");
    exibe_lista(&l);

    char opcao;
    printf("\nDeseja adicionar um novo aluno? (s/n): ");
    scanf(" %c", &opcao);

    if (opcao == 's' || opcao == 'S') {
        Alunos novo;
        printf("\nDigite o nome do novo aluno: ");
        scanf(" %[^\n]", novo.nome);

        printf("Digite a matrícula: ");
        scanf("%d", &novo.matricula);

        printf("Digite a nota: ");
        scanf("%f", &novo.nota);

        if (insere(&l, novo, l.num_elem))
            printf("Aluno adicionado com sucesso.\n");
        else
            printf("Erro ao adicionar aluno.\n");

        printf("\nLista atualizada:\n");
        exibe_lista(&l);
    }

    libera_lista(&l);
    return 0;
}
