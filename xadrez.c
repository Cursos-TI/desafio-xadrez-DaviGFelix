#include <stdio.h>

int main() {
    // Simulação do Movimento da Torre (usando for)
    // A Torre se move 5 casas para a direita.
    printf("Movimento da Torre... \n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Simulação do Movimento do Bispo (usando while)
    // O Bispo se move 5 casas na diagonal (para cima e para a direita).
    printf("Movimento do Bispo...\n");
    int casas_bispo = 5;
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }

    printf("\n");

    // Simulação do Movimento da Rainha (usando do-while)
    // A Rainha se move 8 casas para a esquerda.
    printf("Movimento da Rainha...\n");
    int casas_rainha = 8;
    int contador_rainha = 0;
    if (casas_rainha > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < casas_rainha);
    }

    printf("\n");

    // Simulação do Movimento do Cavalo (usando loops aninhados)
    // O Cavalo se move duas casas para baixo e uma para a esquerda.
    printf("Movimento do Cavalo...\n");

    // O loop for simula as 2 casas para baixo.
    // O loop externo gerencia o primeiro segmento do movimento em "L".
    int movimento_vertical = 2;
    for (int i = 0; i < movimento_vertical; i++) {
        printf("Baixo\n");
    }
    
    
    // O loop interno gerencia o segundo segmento perpendicular do movimento.
    int movimento_horizontal = 1;
    while (movimento_horizontal > 0) {
        printf("Esquerda\n");
        movimento_horizontal--;
    }

    return 0;
}