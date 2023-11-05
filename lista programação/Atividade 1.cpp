#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Mostre seu primeiro numero real: ");
    scanf("%lf", &num1);
    printf("Mostre seu segundo numero real: ");
    scanf("%lf", &num2);
    printf("Mostre seu terceiro numero real: ");
    scanf("%lf", &num3);

    double maior = num1;
    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    printf("O maior numero foi: %lf\n", maior);

    return 0;
}
