#include <stdio.h>
#include <stdlib.h>

void verificar(int num);
int verificarPar(int num);
int verificarImpar(int num);

int main() {

    int n;

    scanf("%d", &n);

    verificar(n);

    return 0;
}

int verificarPar(int num) {

    if(num == 0){
        return 1;
    }

    if((num % 10) % 2 == 0) {
        return verificarImpar(num/10);
    }
    else {
        return 0;
    }
}

int verificarImpar(int num) {

    if(num == 0){
        return 1;
    }

    if((num % 10) % 2 != 0) {
        return verificarPar(num/10);
    }
    else {
        return 0;
    }

}

void verificar(int num) {

    int res;

    if(num % 2 == 0) {
        res = verificarPar(num);
    }
    else {
        res = verificarImpar(num);
    }

    if(res) {
        printf("Valido");
    }
    else {
        printf("Invalido");
    }
}
