#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("dados.txt", "r");

    int a, b, c;

    if(file == NULL) {
        printf("Arquivo nao pode ser encontrado!");
        return 0;
    }


    fscanf(file, "%d %d %d", &a, &b, &c);

    printf("%d %d %d", a, b, c);

    fclose(file);

    return 0;
}
