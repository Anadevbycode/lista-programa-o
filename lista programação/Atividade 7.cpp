#include <stdio.h>

int main() {
    int n;
    printf("Diga seu comprimento: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("sua sequencia tem de possuir o comprimento maior ou igual a 3.\n");
        return 1;
    }

    int sequencia[n];

    printf("Mostre a sequencia dos numeros inteiros (separados por espacos): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &sequencia[i]);
    }

    int triplas = 0;

    for (int i = 0; i < n - 2; i++) {
        if (sequencia[i] == sequencia[i + 1] && sequencia[i] == sequencia[i + 2]) {
            triplas++;
        }
    }

    printf("O numero de triplas com valores parecidos foi: %d\n", triplas);

    return 0;
}
