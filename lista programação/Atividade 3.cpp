#include <stdio.h>

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite sua primeira data (dia, mes, ano): ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite sua segunda data (dia, mes, ano): ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    if (ano1 < ano2) {
        printf("Sua primeira data é maior: %02d/%02d/%04d\n", dia1, mes1, ano1);
    } else if (ano2 < ano1) {
        printf("Sua segunda data é maior: %02d/%02d/%04d\n", dia2, mes2, ano2);
    } else {
        if (mes1 > mes2) {
            printf("Sua primeira data e maior: %02d/%02d/%04d\n", dia1, mes1, ano1);
        } else if (mes2 > mes1) {
            printf("Sua segunda data e maior: %02d/%02d/%04d\n", dia2, mes2, ano2);
        } else {
            if (dia1 > dia2) {
                printf(" Primeira data e maior: %02d/%02d/%04d\n", dia1, mes1, ano1);
            } else if (dia2 > dia1) {
                printf(" Segunda data e maior: %02d/%02d/%04d\n", dia2, mes2, ano2);
            } else {
                printf("Datas Iguais: %02d/%02d/%04d\n", dia1, mes1, ano1);
            }
        }
    }

    return 0;
}
