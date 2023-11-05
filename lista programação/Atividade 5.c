#include <stdio.h>

int main() {
    int n, i;
    int positivos = 0, negativos = 0;

    printf("Digite numeros de elementos nesta sequencia: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("seu numero de elementos tem de ser positivo.\n");
        return 1;
    }

    printf("Digite agora uma sequencia de numeros separados por espaco: ");
    for (i = 0; i < n; i++) {
        double numero;
        scanf("%lf", &numero);

        if (numero > 0) {
            positivos++;
        } else if (numero < 0) {
            negativos++;
        }
    }

    printf("Numeros positivos: %d\n", positivos);
    printf("Numeros negativos: %d\n", negativos);

    return 0;
}
