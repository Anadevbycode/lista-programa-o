#include <stdio.h>

int main() {
    int n;

    printf("Diga o valor de n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf(" valor de n não deve ser negativo.\n");
    } else {
        printf("Com o comando for:\n");
        for (int i = 0; i < n; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
