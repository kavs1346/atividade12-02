#include <stdio.h>

int main() {
    int vetor[10];

    // Inicializando o vetor com valores de 11 a 20
    for (int i = 0; i < 10; i++) {
        vetor[i] = 11 + i;
    }

    // Imprimindo os valores do vetor
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}