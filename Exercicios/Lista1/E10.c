#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *file;
    file = fopen("dados.txt", "w");

    if(file == NULL) {
        printf("Operacao Invalida!");
        return 0;
    }

    fprintf(file,"1 10 60");
    fclose(file);

    return 0;
}

