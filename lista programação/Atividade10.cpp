#include <stdio.h>

int main() {
    int rows, cols;

    printf("Diga o numero de linhas (1-10): ");
    scanf("%d", &rows);
    printf("Diga o numero de colunas (1-10): ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0 || rows > 10 || cols > 10) {
        printf("Numero suas linhas ou colunas invalido. Deve estar entre 1 e 10.\n");
        return 1;  // Encerra o programa com erro
    }

    float matriz[10][10];

    printf("Digite  elementos da sua  matriz:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Elemento (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matriz[i][j]);
        }
    }

    float maior = matriz[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            maior = (matriz[i][j] > maior) ? matriz[i][j] : maior;
        }
    }

    printf("O maior valor na matriz e: %.2f\n", maior);

    return 0;
}

