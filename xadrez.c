#include <stdio.h>

int main() {
    // Simulação do Movimento da Torre (usando for)
    // A Torre se move 5 casas para a direita.
    printf("Movimento da Torre\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    // Separador para a próxima simulação
    printf("\n");

    // Simulação do Movimento do Bispo (usando while)
    // O Bispo se move 5 casas na diagonal (para cima e para a direita).
    printf("Movimento do Bispo\n");
    int casas_bispo = 5;
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    // Separador para a próxima simulação
    printf("\n");

    // Simulação do Movimento da Rainha (usando do-while)
    // A Rainha se move 8 casas para a esquerda.
    printf("Movimento da Rainha\n");
    int casas_rainha = 8;
    int contador_rainha = 0;
    if (casas_rainha > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < casas_rainha);
    }

    return 0;
}