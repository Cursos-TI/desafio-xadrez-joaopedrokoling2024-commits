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

#include <stdio.h>

int main() {
    int i, j;

    printf("=== Nível Aventureiro ===\n");
    printf("Movimento do Cavalo em L (para baixo e esquerda):\n");

    // Loop externo controla o movimento em L
    for (int m = 0; m < 1; m++) {

        // Duas casas para baixo (usando while)
        i = 0;
        while (i < 2) {
            printf("Cavalo moveu para BAIXO\n");
            i++;
        }

        // Uma casa para esquerda (usando do-while)
        j = 0;
        do {
            printf("Cavalo moveu para ESQUERDA\n");
            j++;
        } while (j < 1);
    }

    return 0;
}

#include <stdio.h>

// Bispo com loops aninhados
void moverBispo() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 1; j++) { // loop interno só pra aninhar
            printf("Bispo moveu para DIAGONAL DIREITA CIMA\n");
        }
    }
}

// Torre com recursão
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Torre moveu para DIREITA\n");
    moverTorre(passos - 1);
}

// Rainha com recursão
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Rainha moveu para ESQUERDA\n");
    moverRainha(passos - 1);
}

// Cavalo com múltiplas condições, continue e break
void moverCavalo() {
    for (int i = 0; i < 3; i++) {
        if (i == 2) {
            printf("Cavalo moveu para DIREITA\n");
            break;
        }
        if (i < 2) {
            printf("Cavalo moveu para CIMA\n");
            continue;
        }
    }
}

int main() {
    printf("=== Nível Mestre ===\n");

    moverBispo();
    moverTorre(5);
    moverRainha(8);
    moverCavalo();

    return 0;
}
