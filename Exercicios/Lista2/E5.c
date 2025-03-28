#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void analise(char vet[]);
int palindromo(int i, int f, char vet[]);


int main() {

    char palavra[50];

    scanf("%s", palavra);

    analise(palavra);

    return 0;
}

void analise(char vet[]) {

    int ret = palindromo(0, strlen(vet) - 1, vet);

    if(ret) {
        printf("eh palindromo");
    }
    else {
        printf("nao eh palindromo");
    }
}

int palindromo(int i, int f, char vet[]) {

    if(i >= f){
        return 1;
    }
    else {
        if(vet[i] == vet[f]) {
            return palindromo(i + 1, f - 1, vet);
        }
        else {
            return 0;
        }
    }

}
