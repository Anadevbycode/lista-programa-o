#include <stdio.h>

int main() {
    int n, i, sum, m;
    int choice;

    do {
        printf("Menu:\n");
        printf("1. Conferir se um numero e um quadrado perfeito\n");
        printf("2. Sair do programa\n");
        printf("Escolha a opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Digite um numero inteiro positivo: ");
                scanf("%d", &n);
                i = 0;
                sum = 0;
                m = 1;

                while (sum < n) {
                    sum += m;
                    printf("Impar %d: Soma = %d\n", m, sum);
                    m += 2;
                    i++;
                }

                if (sum == n) {
                    printf("%d e um quadrado perfeito e a soma dos %d numeros impares consecutivos e %d.\n\n", n, i, sum);
                } else {
                    printf("%d nao e um quadrado perfeito.\n\n", n);
                }
                break;

            case 2:
                printf("Fim do seu Programa.\n");
                break;

            default:
                printf("Opção invalida. Tente novamente.\n\n");
                break;
        }
    } while (choice != 2);

    return 0;
}
