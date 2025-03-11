#include <stdio.h>

int main() {
    int matriz[10][10];
    int valor = 100;

 
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = valor--;
        }
    }


    for (int i = 9; i >= 0; i--) {
        for (int j = 9; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}