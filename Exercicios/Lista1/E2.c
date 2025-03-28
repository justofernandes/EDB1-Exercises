#include <stdio.h>
#include <stdlib.h>

void trocar_valor(int* num1, int* num2) {

    int aux;

    aux = *num1;
    *num1 = *num2;
    *num2 = aux;

}

int main() {

    void trocar_valor(int* num1, int* num2);

    int a, b;

    scanf("%d %d", &a, &b);

    printf("Valor de a: %d\nValor de b: %d\n", a, b);

    trocar_valor(&a, &b);

    printf("\nValor de a: %d\nValor de b: %d\n", a, b);


    return 0;
}
