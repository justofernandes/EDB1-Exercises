#include <stdio.h>
#include <stdlib.h>

int potencia(int a, int b);

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", potencia(a, b));

    return 0;
}

int potencia(int a, int b) {

    if(b == 0) {
        return 1;
    }
    return a * potencia(a, b-1);
}
