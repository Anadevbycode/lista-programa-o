#include <stdio.h>

int main() {
    int n, i;
    int positivos = 0, negativos = 0;

    printf("Digite o numero de elementos na sequencia: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Seu numero de elementos tem de ser positivo.\n");
        return 1;
    }

    printf("Digite a sequencia de numeros separados por espaco: ");
    for (i = 0; i < n; i++) {
        double numero;
        scanf("%lf", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }
    }

    int total = positivos + negativos;

    if (total > 0) {
        double percentualPositivos = (double)positivos / total * 100;
        double percentualNegativos = (double)negativos / total * 100;

        printf("Numeros positivos: %d (%.2lf%%)\n", positivos, percentualPositivos);
        printf("Numeros negativos: %d (%.2lf%%)\n", negativos, percentualNegativos);

        printf("Total de numeros: %d\n", total);
    } else {
        printf("Nenhum valor positivo ou negativo foi fornecido.\n");
    }

    return 0;
}
