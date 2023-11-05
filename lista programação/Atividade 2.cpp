#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Diga o valor de n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf(" digite um valor positivo para n.\n");
        return 1;
    }

    int count = 0;
    int number = 1;

    printf("Os primeiros %d numeros primos sao:\n", n);
    while (count < n) {
        if (is_prime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }

    printf("\n");

    return 0;
}
