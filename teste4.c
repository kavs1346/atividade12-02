#include <stdio.h>

int main() {
    int lista[10][10];
    int valor = 100;

    // Preenchendo a lista com valores de 100 até 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            lista[i][j] = valor--;
        }
    }

    // Imprimindo os elementos na ordem inversa
    for (int i = 9; i >= 0; i--) {
        for (int j = 9; j >= 0; j--) {
            printf("%d ", lista[i][j]);
        }
        printf("\n");
    }

    return 0;
}