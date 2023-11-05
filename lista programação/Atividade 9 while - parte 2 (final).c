#include <stdio.h>

int main() {
    int n;

    printf("Diga o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("seu valor de n não deve ser negativo.\n");
    } else {
        printf("Com o comando while:\n");
        int i = 0;
        while (i < n) {
            printf("*");
            i++;
        }
        printf("\n");
    }

    return 0;
}
