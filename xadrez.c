#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

int main() {
    // Constantes para o número de movimentos de cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;

    printf("=== Simulador de Movimentos de Xadrez ===\n\n");

    // 1. Torre - Movimento reto (for)
    printf("Torre movendo %d casas para a direita:\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }

    // 2. Bispo - Movimento diagonal (while)
    printf("\nBispo movendo %d casas na diagonal (cima-direita):\n", MOVIMENTOS_BISPO);
    int movimentos_feitos = 0;
    while (movimentos_feitos < MOVIMENTOS_BISPO) {
        printf("Cima, Direita\n");
        movimentos_feitos++;
    }

    // 3. Rainha - Movimento reto (do-while)
    printf("\nRainha movendo %d casas para a esquerda:\n", MOVIMENTOS_RAINHA);
    int contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < MOVIMENTOS_RAINHA);

    return 0;
}
