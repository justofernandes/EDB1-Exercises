#include <stdio.h>
#include <stdlib.h>

int combinacao(int n, int k);
int fatorial(int num);

int main() {

    int n, k, comb;

    scanf("%d %d", &n, &k);

    comb = combinacao(n, k);

    printf("%d", comb);


    return 0;
}

int fatorial(int num) {

    if(num == 0 || num == 1){
        return 1;
    }
    else {
        return num * fatorial(num-1);
    }
}

int combinacao(int n, int k) {

    int resultado = fatorial(n)/(fatorial(k)*fatorial(n-k));

    return resultado;
}
