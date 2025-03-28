#include <Stdio.h>
#include <stdlib.h>

int soma_pares(int n);

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", soma_pares(n));

    return 0;
}

int soma_pares(int n) {

    if(n == 1) {
        return 2;
    }
    else {
       return n*2 + soma_pares(n-1);
    }
}
