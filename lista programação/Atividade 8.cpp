#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char resposta[10];

    while (1) {
        printf("Deseja realizar calculo do valor absoluto de um numero? (sim/nao): ");
        scanf("%s", resposta);

        if (strcmp(resposta, "sim") == 0 || strcmp(resposta, "SIM") == 0 || strcmp(resposta, "Sim") == 0) {
            double numero;
            printf("Digite o valor real: ");
            scanf("%lf", &numero);

            double valorAbsoluto = abs(numero);

            printf("O valor absoluto de %lf e %lf\n", numero, valorAbsoluto);
        } else {
            break;
        }
    }

    return 0;
}
