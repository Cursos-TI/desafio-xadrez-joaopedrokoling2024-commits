#include <stdio.h>

// Constantes para os movimentos
#define BISPO_MOVES 5
#define TORRE_MOVES 5
#define RAINHA_MOVES 8

int main() {
    // ----------------- BISPO -----------------
    // O Bispo anda 5 casas na diagonal superior direita
    // Para isso, vamos imprimir "Cima" e "Direita" juntos
    printf("Movimentos do Bispo:\n");
    for (int i = 0; i < BISPO_MOVES; i++) {
        printf("Passo %d: Cima + Direita\n", i+1);
    }

    // ----------------- TORRE -----------------
    // A Torre anda 5 casas para a direita
    // Aqui usaremos um loop while
    printf("\nMovimentos da Torre:\n");
    int t = 0;
    while (t < TORRE_MOVES) {
        printf("Passo %d: Direita\n", t+1);
        t++;
    }

    // ----------------- RAINHA -----------------
    // A Rainha anda 8 casas para a esquerda
    // Aqui usaremos um loop do...while
    printf("\nMovimentos da Rainha:\n");
    int r = 0;
    do {
        printf("Passo %d: Esquerda\n", r+1);
        r++;
    } while (r < RAINHA_MOVES);

    return 0;
}
